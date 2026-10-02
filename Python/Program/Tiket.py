class Tiket:
    # Konstruktor ini membuat objek Tiket dengan data penayangan dan kursi.
    def __init__(self, kode_tiket="", nama_film="", nomor_kursi="", harga=0.0):
        self.__kode_tiket = kode_tiket
        self.__nama_film = nama_film
        self.__nomor_kursi = nomor_kursi
        self.__harga = harga

    # Method ini mengembalikan kode tiket.
    def getKodeTiket(self):
        return self.__kode_tiket

    # Method ini mengubah kode tiket.
    def setKodeTiket(self, kode_tiket):
        self.__kode_tiket = kode_tiket

    # Method ini mengembalikan nama film pada tiket.
    def getNamaFilm(self):
        return self.__nama_film

    # Method ini mengubah nama film pada tiket.
    def setNamaFilm(self, nama_film):
        self.__nama_film = nama_film

    # Method ini mengembalikan nomor kursi penonton.
    def getNomorKursi(self):
        return self.__nomor_kursi

    # Method ini mengubah nomor kursi penonton.
    def setNomorKursi(self, nomor_kursi):
        self.__nomor_kursi = nomor_kursi

    # Method ini mengembalikan harga tiket.
    def getHarga(self):
        return self.__harga

    # Method ini mengubah harga tiket.
    def setHarga(self, harga):
        self.__harga = harga

    # Method ini menampilkan data tiket.
    def tampilkanData(self):
        print(f"Kode Tiket    : {self.__kode_tiket}")
        print(f"Nama Film     : {self.__nama_film}")
        print(f"Nomor Kursi   : {self.__nomor_kursi}")
        print(f"Harga Tiket   : Rp {self.__harga}")
