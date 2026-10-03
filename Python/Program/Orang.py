class Orang:
    # Konstruktor ini membuat objek Orang dengan nilai awal kosong atau parameter yang diberikan.
    def __init__(self, no_ktp="", nama="", jenis_kelamin=""):
        self.__no_ktp = no_ktp
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # Method ini mengembalikan nomor KTP orang.
    def getNoKtp(self):
        return self.__no_ktp

    # Method ini mengubah nomor KTP orang.
    def setNoKtp(self, no_ktp):
        self.__no_ktp = no_ktp

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
        print(f"No KTP        : {self.__no_ktp}")
        print(f"Nama          : {self.__nama}")
        print(f"Jenis Kelamin : {self.__jenis_kelamin}")
