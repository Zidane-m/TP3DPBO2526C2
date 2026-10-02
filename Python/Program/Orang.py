class Orang:
    # Konstruktor ini membuat objek Orang dengan nilai awal kosong atau parameter yang diberikan.
    def __init__(self, nik="", nama="", jenis_kelamin=""):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # Method ini mengembalikan NIK orang.
    def getNik(self):
        return self.__nik

    # Method ini mengubah NIK orang.
    def setNik(self, nik):
        self.__nik = nik

    # Method ini mengembalikan nama orang.
    def getNama(self):
        return self.__nama

    # Method ini mengubah nama orang.
    def setNama(self, nama):
        self.__nama = nama

    # Method ini mengembalikan jenis kelamin orang.
    def getJenisKelamin(self):
        return self.__jenis_kelamin

    # Method ini mengubah jenis kelamin orang.
    def setJenisKelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin

    # Method ini menampilkan data dasar orang.
    def tampilkanData(self):
        print(f"NIK           : {self.__nik}")
        print(f"Nama          : {self.__nama}")
        print(f"Jenis Kelamin : {self.__jenis_kelamin}")
