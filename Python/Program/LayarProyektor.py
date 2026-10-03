class LayarProyektor:
    # Konstruktor ini membuat objek LayarProyektor dengan nilai awal kosong atau parameter yang diberikan.
    def __init__(self, tipe_layar="", resolusi="", kondisi_lampu=""):
        self.__tipe_layar = tipe_layar
        self.__resolusi = resolusi
        self.__kondisi_lampu = kondisi_lampu

    # Method ini mengembalikan tipe layar proyektor.
    def getTipeLayar(self):
        return self.__tipe_layar

    # Method ini mengubah tipe layar proyektor.
    def setTipeLayar(self, tipe_layar):
        self.__tipe_layar = tipe_layar

    # Method ini mengembalikan resolusi layar proyektor.
    def getResolusi(self):
        return self.__resolusi

    # Method ini mengubah resolusi layar proyektor.
    def setResolusi(self, resolusi):
        self.__resolusi = resolusi

    # Method ini mengembalikan kondisi lampu proyektor.
    def getKondisiLampu(self):
        return self.__kondisi_lampu

    # Method ini mengubah kondisi lampu proyektor.
    def setKondisiLampu(self, kondisi_lampu):
        self.__kondisi_lampu = kondisi_lampu

    # Method ini menampilkan informasi data layar proyektor.
    def tampilkanData(self):
        print(f"Tipe Layar    : {self.__tipe_layar}")
        print(f"Resolusi      : {self.__resolusi}")
        print(f"Kondisi Lampu : {self.__kondisi_lampu}")
