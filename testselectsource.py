maxLinkSpeed = 63700000
upperThreshold = 0.9
lowerThreshold = 0.7

standardLink = 0
backupLink = 1
state = standardLink
#-----------------------FUNCTIONS------------------------------------------------------------------------------------------------------------------------

def getInterfaceByte(xmlPos1,xmlPos2,xmlPos3):
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


def switchLink(link):
        if link is standardLink:
                #switch traffic to standard link
                call(["/home/localadmin/backup05.sh"])
                print (". Changed flow to priority 5 (Standard)")
        if link is backupLink:
                #switch traffic to backup link
                call(["/home/localadmin/backup21.sh"])
                print (". Changed flow to priority 21 (Backup)")

#--------------------------------------------------------------------------------------------------------------------------------------------------------

totalPackets = getInterfaceBytes()

while True:
    oldTotalPackets = totalPackets
    totalPackets = getInterfaceBytes()
    latestPackets = totalPackets - oldTotalPackets

    if totalPackets != oldTotalPackets:
        print "XML Updated. Bytes since last update: ",latestPackets
        if latestPackets > (maxLinkSpeed * upperThreshold) and state is standardLink:
            print "Alert, Upper Threshold reached"
            state = backupLink
            switchLink(state) #switch traffic to backup link
        if latestPackets < (maxLinkSpeed * lowerThreshold) and state is backupLink:
                        print "Alert, Lower Threshold reached"
                        state = standardLink
                        switchLink(state) #switch traffic to standard link

    time.sleep(0.5)
