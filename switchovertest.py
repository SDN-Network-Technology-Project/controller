import time
from subprocess import call


while True:
    call(["/home/localadmin/backup05.sh"])
    print (". Changed flow to priority 5")
    time.sleep(10)
    call(["/home/localadmin/backup21.sh"])
    print (". Changed flow to priority 21")
    time.sleep(10)

