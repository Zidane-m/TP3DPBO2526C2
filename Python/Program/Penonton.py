from Orang import Orang
from Tiket import Tiket

class Penonton(Orang, Tiket):
    # Konstruktor ini membuat objek Penonton yang mewarisi sifat Orang dan Tiket (Multiple Inheritance).
    def __init__(self, no_ktp="", nama="", jenis_kelamin="", kode_tiket="", nama_film="", nomor_kursi="", harga=0.0, camilan="", metode_pembayaran=""):
        Orang.__init__(self, no_ktp, nama, jenis_kelamin)
        Tiket.__init__(self, kode_tiket, nama_film, nomor_kursi, harga)
        self.__camilan = camilan
        self.__metode_pembayaran = metode_pembayaran

    # Method ini mengembalikan pilihan camilan penonton.
    def getCamilan(self):
        return self.__camilan

    # Method ini mengubah pilihan camilan penonton.
    def setCamilan(self, camilan):
        self.__camilan = camilan

    # Method ini mengembalikan metode pembayaran tiket penonton.
    def getMetodePembayaran(self):
        return self.__metode_pembayaran

    # Method ini mengubah metode pembayaran tiket penonton.
    def setMetodePembayaran(self, metode_pembayaran):
        self.__metode_pembayaran = metode_pembayaran

    # Method ini menampilkan seluruh data penonton secara lengkap.
    def tampilkanData(self):
        Orang.tampilkanData(self)
        Tiket.tampilkanData(self)
        print(f"Camilan       : {self.__camilan}")
        print(f"Pembayaran    : {self.__metode_pembayaran}")
