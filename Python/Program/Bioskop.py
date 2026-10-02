from Studio import Studio

class Bioskop:
    # Konstruktor ini membuat objek Bioskop dengan menerapkan Composition pada Studio dan Array of Object pada Penonton.
    def __init__(self, nama_bioskop="", lokasi="", nama_studio="", kapasitas=0, jenis_layar=""):
        self.__nama_bioskop = nama_bioskop
        self.__lokasi = lokasi
        # Komposisi: Objek Studio dibuat langsung di dalam objek Bioskop (part-of)
        self.__studio = Studio(nama_studio, kapasitas, jenis_layar)
        # Array of Object: Daftar penonton disimpan dalam list
        self.__daftar_penonton = []

    # Method ini mengembalikan nama bioskop.
    def getNamaBioskop(self):
        return self.__nama_bioskop

    # Method ini mengubah nama bioskop.
    def setNamaBioskop(self, nama_bioskop):
        self.__nama_bioskop = nama_bioskop

    # Method ini mengembalikan lokasi bioskop.
    def getLokasi(self):
        return self.__lokasi

    # Method ini mengubah lokasi bioskop.
    def setLokasi(self, lokasi):
        self.__lokasi = lokasi

    # Method ini mengembalikan objek studio bioskop.
    def getStudio(self):
        return self.__studio

    # Method ini mengubah objek studio bioskop.
    def setStudio(self, studio):
        self.__studio = studio

    # Method ini mengembalikan daftar seluruh penonton di bioskop.
    def getDaftarPenonton(self):
        return self.__daftar_penonton

    # Method ini mengatur/mengubah daftar penonton bioskop.
    def setDaftarPenonton(self, daftar_penonton):
        self.__daftar_penonton = daftar_penonton

    # Method ini menambahkan satu objek penonton ke dalam daftar penonton (Array of Object).
    def tambahPenonton(self, penonton):
        self.__daftar_penonton.append(penonton)

    # Method ini menampilkan informasi umum bioskop dan studionya.
    def tampilkanInfoBioskop(self):
        print(f"Bioskop       : {self.__nama_bioskop}")
        print(f"Lokasi        : {self.__lokasi}")
        self.__studio.tampilkanData()
