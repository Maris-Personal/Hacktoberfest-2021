import random

def generateRandomNumber() -> str:
    return str(int(random.random() * 100))

def generateUppercase() -> str:
    r = random.randint(65,90)
    return chr(r)

def generateLowercase() -> str:
    r = random.randint(97,122) 
    return chr(r)

id_len = 10


def generateId() -> str:
    res = ""
    while(len(res) < id_len):

        r = int(random.random() * 10) % 5
        s = int(random.random() * 10) % 6
        t = int(random.random() * 10) % 10
        for i in range(r):
            res += generateRandomNumber()

        for i in range(s):
            res += generateUppercase()
        for i in range(t):
            res += generateLowercase()

    return res[0:id_len]

ids = []

for i in range(100):
    ids.append(generateId())

print(",".join(ids))



