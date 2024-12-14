def hitung(nilai1, nilai2):
    angka = nilai1 - nilai2
    if angka < 0:
        return -angka
    else:
        return angka

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

a, b, c, d = map(int, input(). split())
hasil = hitung(a, c) + hitung(b, d)
print(mutlak(hasil))