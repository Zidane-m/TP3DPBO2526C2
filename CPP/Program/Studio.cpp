#include <iostream>
#include <string>
using namespace std;

class Studio {
private:
    string namaStudio;
    int kapasitas;
    string jenisLayar;

public:
    // Konstruktor ini membuat objek Studio dengan nilai awal kosong.
    Studio() : namaStudio(""), kapasitas(0), jenisLayar("") {}

    // Konstruktor ini mengisi data studio bioskop dari nilai yang diberikan.
    Studio(string namaStudio, int kapasitas, string jenisLayar)
        : namaStudio(namaStudio), kapasitas(kapasitas), jenisLayar(jenisLayar) {}

    // Method ini mengembalikan nama studio.
    string getNamaStudio() const {
        return namaStudio;
    }

    // Method ini mengubah nama studio.
    void setNamaStudio(string namaStudio) {
        this->namaStudio = namaStudio;
    }

    // Method ini mengembalikan kapasitas kursi studio.
    int getKapasitas() const {
        return kapasitas;
    }

    // Method ini mengubah kapasitas kursi studio.
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Method ini mengembalikan jenis layar studio.
    string getJenisLayar() const {
        return jenisLayar;
    }

    // Method ini mengubah jenis layar studio.
    void setJenisLayar(string jenisLayar) {
        this->jenisLayar = jenisLayar;
    }

    // Method ini menampilkan informasi data studio.
    void tampilkanData() const {
        cout << "Studio        : " << namaStudio << endl;
        cout << "Kapasitas     : " << kapasitas << " Kursi" << endl;
        cout << "Jenis Layar   : " << jenisLayar << endl;
    }
};
