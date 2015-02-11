cd SDNHub_Opendaylight_Tutorial && git pull --rebase
ls -al
cd andre-controller/
find . -name Troubleshoot.java
find . -name Troubleshoot
find . -name Troubleshoot*
find . -name *.java
l
ls
cd ..
cd controller/
find . -name Troubleshoot.java
vi ./opendaylight/web/troubleshoot/src/main/java/org/opendaylight/controller/troubleshoot/web/Troubleshoot.java
cd ~/andre-controller/
unzip controller.zip 
find . -name Troubleshoot.java
vi ./controller/opendaylight/adsal/web/troubleshoot/src/main/java/org/opendaylight/controller/troubleshoot/web/Troubleshoot.java
ls
vi interfacevalues.py
python interfacevalues.py 
pip install pycurl
sudo apt-get install python-pip
pip install pycurl
sudo pip install pycurl
cat /home/localadmin/.pip/pip.log
pip install -U setuptools
sudo pip install -U setuptools
sudo pip install pycurl
pip install distribute
sudo pip install distribute
sudo pip install pycurl
sudo pip install pycurlsudo apt-get install libcurl4-openssl-dev
sudo apt-get install libcurl4-openssl-dev
sudo pip install pycurl
sudo apt-get install python-pycurl
sudo pip install pycurl
sudo pip install pycurl --upgrade
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
find . -name run.sh
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
ls
vi interfacevalues.py 
python interfacevalues.py
ls
cat interfacevalues.py 
python interfacevalues.py 
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
python interfacevalues.py 
vi interfacevalues.py 
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
mininet
ls
virtualbox
ls
ping 192.168.134.103
ls
cp interfacevalues.py controller/
cd controller/
git commit "added interfacevalues.py"
git commit -m "added interfacevalues.py"
git config --global user.email "barrybobbit@gmail.com"
git config --global user.name "Robert Barrett"
git remote add origin https://github.com/SDN-Network-Technology-Project/controller.git
git push -u origin master
git add .
git add . -A
git push -u origin master
ls
git add interfacevalues.py 
git init
git remote add origin https://github.com/SDN-Network-Technology-Project/controller.git
git push -u origin master
vi interfacevalues.py 
exit
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
python interfacevalues.py 
exit
ls
vi interfacevalues.py 
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
exit
python test2.py
sudo pip install httplib2
python test2.py
ls
cp interfacevalues.py injectflow.py
vi injectflow.py 
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"flow1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"2", "etherType": "0x800", "protocol": "6", "tpDst": "80", "priority":"65535","actions":["DROP"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/flow1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"flow1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":5097", "etherType": "0x800", "protocol": "6", "tpDst": "80", "priority":"65535","actions":["DROP"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/flow1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"flow1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "protocol": "6", "tpDst": "80", "priority":"65535","actions":["DROP"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/flow1'
python
vi test2.py
python test2.py
vi test2.py
python test2.py
vi test2.py
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh
vi interfacevalues.py 
exit
sudo apt-get install tmux
tmux
tmux a
history | grep curl
tmux a
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h1-h3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h1-h3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"21","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"false", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"5","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"5","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
tmux a
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5098", "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"15","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h2-h4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h4-h2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"16","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h4-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5098", "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"15","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h2-h4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h4-h2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"16","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h4-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5099", "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"15","actions":["OUTPUT=5103"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw1-h2-h4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h4-h2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5103", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"16","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw1-h4-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5098", "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"15","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h2-h4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h4-h2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"16","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h4-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h2-h4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5099", "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"15","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h2-h4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h4-h2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5105", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"16","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h4-h2'
git clone 
sudo apt-get install git maven openjdk-7-jre openjdk-7-jdk
git clone https://github.com/SDN-Network-Technology-Project/controller.git
mkdir andre-controller
ls
cd ~
python interfacevalues.py 
python testinsert.py 
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"test", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5105", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"14","actions":["DROP"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/test'
python testinsert.py 
clear
python testinsert.py 
python testinsert2.py 
curl -u admin:admin
python testinsert2.py 
.ls
ls
./curltest.sh
chmod +x curltest.sh
python testinsert2.py 
./curltest.sh
python testinsert2.py 
pwd
python testinsert2.py 
ls
cat interfacevalues.py 
more interfacevalues.py 
python testinsert2.py 
vi backup05.sh 
vi backup21.sh 
python testinsert2.py 
vi backup05.sh 
./backup05.sh 
vi backup05.sh 
./backup05.sh 
vi backup05.sh 
./backup05.sh 
vi backup05.sh 
vi backup21.sh 
tmux a
cd ~

python interfacevalues.py 
vi interfacevalues.py 
history | grep curl
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h1-h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "priority":"11","actions":["OUTPUT:5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/flow1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1h1h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "priority":"11","actions":["OUTPUT:5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/flow1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1h1h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "priority":"11","actions":["OUTPUT:5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1h1h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1h1h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "priority":"11","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1h1h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"test1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "protocol": "12", "ipv4": "192.168.1.2", "priority":"65535","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/test1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"test1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "protocol": "12", "nwSrc": "192.168.1.2", "priority":"65535","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/test1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"test1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "protocol": "12", "nwDst": "192.168.1.2", "priority":"65535","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/test1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h1-h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"11","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h1-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5098", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h2-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h3-h1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"13","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h3-h1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h3-h2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"14","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h3-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h1-h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5097", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"11","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h1-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h2-h3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5098", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h2-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h3-h1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h3-h1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1-h3-h2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "ingressPort":"5102", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"14","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1-h3-h2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h1-h3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5099", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"11","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h1-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h2-h3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5099", "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h2-h3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h3-h1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5104", "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"13","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h3-h1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3-h3-h2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "ingressPort":"5104", "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"14","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3-h3-h2'
vi testinsert.py
rm test2.py 
vi testinsert.py
nc -l 8080
vi testinsert.py
vi testinsert2.py
vi testinsert.py
vi testinsert2.py
vi curltest.sh
vi testinsert2.py
vi curltest.sh
vi testinsert2.py
vi curltest.sh
vi testinsert2.py
vi curltest.sh
;s
ls
rm curltest.sh 
chmod +x backup*
ls
vi testinsert2.py
exit
history | grep run.sh
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackag│
e/opendaylight/run.sh    
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh 
sudo shutdown -r now
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"21","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"21","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
ifconfig
tmux a
tmux
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"21","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"21","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"21","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.2.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"05","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"05","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh 
ifconfig
tmux a
tmux

exit
exit
cd ~
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"05","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"05","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
exit
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh 
exit
tmux a
tmux
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"05","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"05","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
cd ~
ls
cat backup05.sh 
cat injectflow.py 
cat injectflow.py
ls
rm injectflow.py 
cat testinsert2.py 
python testinsert2.py 
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH1", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH2", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5098"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH4", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5102"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH4'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH1", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5100"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw2toH3", "node": {"id":"00:00:00:00:00:00:00:12", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"12","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:12/staticFlow/sw2toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"11","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH2", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.2", "priority":"12","actions":["OUTPUT=5099"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH2'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH3", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"13","actions":["OUTPUT=5104"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH3'
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH4", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.4", "priority":"14","actions":["OUTPUT=5105"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH4'
ifconfig
python testinsert2.py 
ls
python interfacevalues.py 
cat interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
nano interfacevalues.py 
python interfacevalues.py 
tmux a
./controller/opendaylight/distribution/opendaylight/target/distribution.opendaylight-osgipackage/opendaylight/run.sh 
tmux
ls
cat interfacevalues.py 
jython test.py 
jython jython.py 
ls
cat interfacevalues.py 
ls
cat backup05.sh 
cat testinsert2.py 
vi jytest.py
jython jython.py 
chmod +x jytest.py 
python jytest.py 
jython jython.py 
cat jytest.py 
cat testinsert2.py 
jython jython.py 
ls
cat backup05.sh 
vi jytest.sh
cat jython.sh
vi jytest.sh
ls
cat jytest.sh
vi jytest.sh
jython jython.py 
chmod +x jytest.sh
jython jython.py 
vi jytest.sh
jython jython.py 
sudo apt-get install jython
ls
pwd
ls
jython test.py
sudo apt-get install geany
geany
ls
geany
tmux -a
tmux a
vi timebetweenupdates.py 
exit
ls
vi interfacevalues.py 
cp interfacevalues.py timebetweenupdates.py
vi interfacevalues.py 
ci timebetweenupdates.py 
vi timebetweenupdates.py 
python timebetweenupdates.py 
vi timebetweenupdates.py 
tmux a
ls
geany
exit
ls
ls -l
vi timebetweenupdates.py 
python timebetweenupdates.py 
vi timebetweenupdates.py 
exit
ls
python interfacevalues.py 
exit
