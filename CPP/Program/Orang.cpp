#include <iostream>
#include <string>
using namespace std;

class Orang {
protected:
    string nik;
    string nama;
    string jenisKelamin;

public:
    // Konstruktor ini membuat objek Orang dengan nilai awal kosong.
    Orang() : nik(""), nama(""), jenisKelamin("") {}

    // Konstruktor ini mengisi data dasar Orang dari nilai yang diberikan.
    Orang(string nik, string nama, string jenisKelamin)
        : nik(nik), nama(nama), jenisKelamin(jenisKelamin) {}

    // Method ini mengembalikan NIK orang.
    string getNik() const {
        return nik;
    }

    // Method ini mengubah NIK orang.
    void setNik(string nik) {
        this->nik = nik;
    }

    // Method ini mengembalikan nama orang.
    string getNama() const {
        return nama;
    }

    // Method ini mengubah nama orang.
    void setNama(string nama) {
        this->nama = nama;
    }

    // Method ini mengembalikan jenis kelamin orang.
    string getJenisKelamin() const {
        return jenisKelamin;
    }

    // Method ini mengubah jenis kelamin orang.
    void setJenisKelamin(string jenisKelamin) {
        this->jenisKelamin = jenisKelamin;
    }

    // Method ini menampilkan data dasar orang.
    virtual void tampilkanData() const {
        cout << "NIK           : " << nik << endl;
        cout << "Nama          : " << nama << endl;
        cout << "Jenis Kelamin : " << jenisKelamin << endl;
    }
};
