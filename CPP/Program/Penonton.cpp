#pragma once
#include <iostream>
#include <string>
#include "Orang.cpp"
#include "Tiket.cpp"
using namespace std;

class Penonton : public Orang, public Tiket {
private:
    string camilan;
    string metodePembayaran;

public:
    // Konstruktor ini membuat objek Penonton dengan nilai awal kosong.
    Penonton() : Orang(), Tiket(), camilan(""), metodePembayaran("") {}

    // Konstruktor ini membuat objek Penonton yang mewarisi sifat Orang dan Tiket (Multiple Inheritance).
    Penonton(string noKtp, string nama, string jenisKelamin, string kodeTiket, string namaFilm, string nomorKursi, double harga, string camilan, string metodePembayaran):
        Orang(noKtp, nama, jenisKelamin), Tiket(kodeTiket, namaFilm, nomorKursi, harga), camilan(camilan), metodePembayaran(metodePembayaran) {}

    // Method ini mengembalikan pilihan camilan penonton.
    string getCamilan() const {
        return camilan;
    }

    // Method ini mengubah pilihan camilan penonton.
    void setCamilan(string camilan) {
        this->camilan = camilan;
    }

    // Method ini mengembalikan metode pembayaran tiket.
    string getMetodePembayaran() const {
        return metodePembayaran;
    }

    // Method ini mengubah metode pembayaran tiket.
    void setMetodePembayaran(string metodePembayaran) {
        this->metodePembayaran = metodePembayaran;
    }

    // Method ini menampilkan seluruh data penonton secara lengkap.
    void tampilkanData() const {
        Orang::tampilkanData();
        Tiket::tampilkanData();
        cout << "Camilan       : " << camilan << endl;
        cout << "Pembayaran    : " << metodePembayaran << endl;
    }
};
