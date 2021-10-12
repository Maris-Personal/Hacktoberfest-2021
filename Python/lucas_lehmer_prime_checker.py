p = input("Enter a number : ")

s = 4

m = (2**int(p)) -1

for x in range(int(p) - 2):
    print(s)
    s = ((s*s) - 2) % m

print(s)

if(s == 0):
    print("prime")
else:
    print("composite")