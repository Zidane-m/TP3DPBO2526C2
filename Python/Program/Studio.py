class Studio:
    # Konstruktor ini membuat objek Studio bioskop.
    def __init__(self, nama_studio="", kapasitas=0, jenis_layar=""):
        self.__nama_studio = nama_studio
        self.__kapasitas = kapasitas
        self.__jenis_layar = jenis_layar

    # Method ini mengembalikan nama studio.
    def getNamaStudio(self):
        return self.__nama_studio

    # Method ini mengubah nama studio.
    def setNamaStudio(self, nama_studio):
        self.__nama_studio = nama_studio

    # Method ini mengembalikan kapasitas kursi studio.
    def getKapasitas(self):
        return self.__kapasitas

    # Method ini mengubah kapasitas kursi studio.
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    # Method ini mengembalikan jenis layar studio.
    def getJenisLayar(self):
        return self.__jenis_layar

    # Method ini mengubah jenis layar studio.
    def setJenisLayar(self, jenis_layar):
        self.__jenis_layar = jenis_layar

    # Method ini menampilkan informasi data studio.
    def tampilkanData(self):
        print(f"Studio        : {self.__nama_studio}")
        print(f"Kapasitas     : {self.__kapasitas} Kursi")
        print(f"Jenis Layar   : {self.__jenis_layar}")
