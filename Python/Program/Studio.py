from LayarProyektor import LayarProyektor


class Studio:
    # Konstruktor ini membuat objek Studio sekaligus menginisialisasi LayarProyektor di dalamnya (Komposisi).
    def __init__(self, nama_studio="", nama_bioskop="", kapasitas=0, tipe_layar="", resolusi="", kondisi_lampu=""):
        self.__nama_studio = nama_studio
        self.__nama_bioskop = nama_bioskop
        self.__kapasitas = kapasitas
        self.__layar_proyektor = LayarProyektor(tipe_layar, resolusi, kondisi_lampu)
        self.__daftar_penonton = []

    # Method ini mengembalikan nama studio.
    def getNamaStudio(self):
        return self.__nama_studio

    # Method ini mengubah nama studio.
    def setNamaStudio(self, nama_studio):
        self.__nama_studio = nama_studio

    # Method ini mengembalikan nama bioskop tempat studio berada.
    def getNamaBioskop(self):
        return self.__nama_bioskop

    # Method ini mengubah nama bioskop tempat studio berada.
    def setNamaBioskop(self, nama_bioskop):
        self.__nama_bioskop = nama_bioskop

    # Method ini mengembalikan kapasitas kursi studio.
    def getKapasitas(self):
        return self.__kapasitas

    # Method ini mengubah kapasitas kursi studio.
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    # Method ini mengembalikan objek layar proyektor studio.
    def getLayarProyektor(self):
        return self.__layar_proyektor

    # Method ini mengubah objek layar proyektor studio.
    def setLayarProyektor(self, layar_proyektor):
        self.__layar_proyektor = layar_proyektor

    # Method ini mengembalikan daftar seluruh penonton di studio.
    def getDaftarPenonton(self):
        return self.__daftar_penonton

    # Method ini mengatur/mengubah daftar penonton di studio.
    def setDaftarPenonton(self, daftar_penonton):
        self.__daftar_penonton = daftar_penonton

    # Method ini menambahkan satu objek penonton ke dalam daftar penonton (Array of Object).
    def tambahPenonton(self, penonton):
        self.__daftar_penonton.append(penonton)

    # Method ini menampilkan informasi umum studio beserta spesifikasi proyektornya.
    def tampilkanInfoStudio(self):
        print(f"Studio        : {self.__nama_studio}")
        print(f"Bioskop       : {self.__nama_bioskop}")
        print(f"Kapasitas     : {self.__kapasitas} Kursi")
        self.__layar_proyektor.tampilkanData()
