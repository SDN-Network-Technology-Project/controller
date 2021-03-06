import pycurl
from StringIO import StringIO
import xml.etree.ElementTree as ET
import time

xmlPos1 = 0
xmlPos2 = 6
xmlPos3 = 3

buffer = StringIO()

maxLinkSpeed = 63700000
upperThreshold = 0.9

#-----------------------FUNCTIONS------------------------------------------------------------------------------------------------------------------------

def getInterfaceBytes():
    c = pycurl.Curl()
    c.setopt(pycurl.URL, 'http://localhost:8080/controller/nb/v2/statistics/default/port/')
    c.setopt(pycurl.HTTPHEADER, ['Accept: application/xml'])
    c.setopt(pycurl.VERBOSE, 0)
    c.setopt(pycurl.USERPWD, 'admin:project')
    c.setopt(c.WRITEDATA, buffer)
    c.perform()
    c.close()
    body = buffer.getvalue()
    tree = ET.fromstring(body)
    buffer.truncate(0)
    return int(tree[xmlPos1][xmlPos2][xmlPos3].text) + int(tree[xmlPos1][xmlPos2][xmlPos3+1].text)


#--------------------------------------------------------------------------------------------------------------------------------------------------------

totalPackets = getInterfaceBytes()

while True:
    oldTotalPackets = totalPackets
    totalPackets = getInterfaceBytes()
    latestPackets = totalPackets - oldTotalPackets

    if totalPackets != oldTotalPackets:
        print "XML Updated. Bytes since last update: ",latestPackets
        if latestPackets > (maxLinkSpeed * upperThreshold):
            print "Alert, Threshold reached"
    buffer.truncate(0)
    time.sleep(0.5)

