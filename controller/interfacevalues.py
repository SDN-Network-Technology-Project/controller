import pycurl
from StringIO import StringIO
import xml.etree.ElementTree as ET
import time

buffer = StringIO()
totalPackets = 0

while True:
    oldTotalpackets = totalPackets
    c = pycurl.Curl()
    c.setopt(pycurl.URL, 'http://localhost:8080/controller/nb/v2/statistics/default/port/')
    c.setopt(pycurl.HTTPHEADER, ['Accept: application/xml'])
    c.setopt(pycurl.VERBOSE, 0)
    c.setopt(pycurl.USERPWD, 'admin:admin')
    c.setopt(c.WRITEDATA, buffer)
    c.perform()
    c.close()
    body = buffer.getvalue()
    tree = ET.fromstring(body)
    totalPackets = int(tree[0][3][1].text) + int(tree[0][3][2].text)
    lastestPackets = totalPackets - oldTotalpackets

    print "Total Packets sin last 10 seconds: ",lastestPackets
    buffer.truncate(0)
    time.sleep(10)

