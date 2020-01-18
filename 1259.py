n = input()
n = int(n)
pares = []
impares = []

for i in range(0, n):
    x = input()
    x = int(x)
    if int(x%2) == 0:
        pares.append(x)
    else:
        impares.append(x)
pares.sort()
impares.sort(reverse=True)
for x in pares:
    print("%s" % x)
for y in impares:
    print("%s" % y)