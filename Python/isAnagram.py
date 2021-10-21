def isAnagram(a, b):
    matches = 0
    if len(a) != len(b):
        return False

    for i in a:
        for x in b:
            if x == i:
                matches += 1

    if matches == len(a):
        return True
    else:
        return False


print(isAnagram("today", "today"))
print(isAnagram("yes", "no"))
