def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

total_bil = int(input())
input_bil = list(map(int, input().split()))
maks = -100000
minim = 100000
batas = 0

while batas < total_bil:
    nil = input_bil[batas]
    maks = maksimal(maks, nil)
    minim = minimal(minim, nil)
    batas += 1 
print(maks, minim)