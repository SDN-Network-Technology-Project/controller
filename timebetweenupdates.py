import pycurl
from StringIO import StringIO
import xml.etree.ElementTree as ET
import time

buffer = StringIO()
totalPackets = 0
oldTotalPackets = 0
current_time = time.time()
last_time = current_time
while True:
    oldTotalPackets = totalPackets
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
    totalPackets = int(tree[0][6][3].text) + int(tree[0][6][4].text) 
    if oldTotalPackets != totalPackets:
        current_time = time.time()
        print "Interval Time: ",(current_time-last_time)
        last_time = current_time
    buffer.truncate(0)

