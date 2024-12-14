def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    usia = tahun_sekarang - tahunLahir
    print(f"Perkenalkan Nama Saya : {Namaku}")
    print(f"Umur Saya : {usia}")
    print("Saya Adalah Angkatan : 2020")
    print(f"Asal Saya dari : {Asal}")

tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)