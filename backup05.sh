#!/bin/bash
curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw1toH3-bak", "node": {"id":"00:00:00:00:00:00:00:11", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.3", "priority":"5","actions":["OUTPUT=5101"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:11/staticFlow/sw1toH3-bak'

curl -u admin:admin -H 'Content-type: application/json' -X PUT -d '{"installInHw":"true", "name":"sw3toH1-bak", "node": {"id":"00:00:00:00:00:00:00:13", "type":"OF"}, "etherType": "0x800", "nwDst": "192.168.1.1", "priority":"5","actions":["OUTPUT=5097"]}' 'http://localhost:8080/controller/nb/v2/flowprogrammer/default/node/OF/00:00:00:00:00:00:00:13/staticFlow/sw3toH1-bak'
