dictDB = {}
fileName = "dictionaryDB.txt"

def addUser(dictDB, string):
    data = string.split(";")
    newEntry = {'forename':data[1], 'surname':data[2], 'job':data[3], 'age':int(data[4])}
    dictDB[int(data[0])] = newEntry

def readFile(dictDB, fileName):
    f = open(fileName, 'r')

    for line in f:
        addUser(dictDB, line)

def removeUser(dictDB, id):
    
    if id in dictDB:
        del dictDB[id]
    else:
        print("The Key is not in the Dictionary")

def printUser(dictDB, id):
    
    if id in dictDB:
        user = dictDB[id]
        print("Vorname: %s, Nachname: %s" % (user['forename'], user['surname']))
    else:
        print("the key is not in the Dictionary")

readFile(dictDB,fileName)

for k,v in dictDB.items():
    if v == 'Mathematiker':
        removeUser(dictDB, k)
        
for id in dictDB:
    user = dictDB[id]
    if user['age'] == 23:
        printUser(dictDB, id)

    

