#pragma once
#include <iostream>
#include <string>
using namespace std;

class Orang {
protected:
    string noKtp;
    string nama;
    string jenisKelamin;

public:
    // Konstruktor ini membuat objek Orang dengan nilai awal kosong.
    Orang() : noKtp(""), nama(""), jenisKelamin("") {}

    // Konstruktor ini mengisi data dasar Orang dari nilai yang diberikan.
    Orang(string noKtp, string nama, string jenisKelamin)
        : noKtp(noKtp), nama(nama), jenisKelamin(jenisKelamin) {}

    // Method ini mengembalikan nomor KTP orang.
    string getNoKtp() const {
        return noKtp;
    }

    // Method ini mengubah nomor KTP orang.
    void setNoKtp(string noKtp) {
        this->noKtp = noKtp;
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
        cout << "No KTP        : " << noKtp << endl;
        cout << "Nama          : " << nama << endl;
        cout << "Jenis Kelamin : " << jenisKelamin << endl;
    }
};
