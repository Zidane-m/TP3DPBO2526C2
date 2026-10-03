#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "LayarProyektor.cpp"
#include "Penonton.cpp"
using namespace std;

class Studio {
private:
    string namaStudio;
    string namaBioskop;
    int kapasitas;
    LayarProyektor layarProyektor; // Komposisi: Objek LayarProyektor menjadi bagian utuh dari Studio
    vector<Penonton> daftarPenonton; // Array of Object: Kumpulan objek Penonton

public:
    // Konstruktor ini membuat objek Studio dengan nilai awal kosong.
    Studio() : namaStudio(""), namaBioskop(""), kapasitas(0), layarProyektor(), daftarPenonton() {}

    // Konstruktor ini menginisialisasi Studio beserta objek LayarProyektor di dalamnya (Komposisi).
    Studio(string namaStudio, string namaBioskop, int kapasitas, string tipeLayar, string resolusi, string kondisiLampu):
        namaStudio(namaStudio), namaBioskop(namaBioskop), kapasitas(kapasitas),
        layarProyektor(tipeLayar, resolusi, kondisiLampu) {}

    // Method ini mengembalikan nama studio.
    string getNamaStudio() const {
        return namaStudio;
    }

    // Method ini mengubah nama studio.
    void setNamaStudio(string namaStudio) {
        this->namaStudio = namaStudio;
    }

    // Method ini mengembalikan nama bioskop tempat studio berada.
    string getNamaBioskop() const {
        return namaBioskop;
    }

    // Method ini mengubah nama bioskop tempat studio berada.
    void setNamaBioskop(string namaBioskop) {
        this->namaBioskop = namaBioskop;
    }

    // Method ini mengembalikan kapasitas kursi studio.
    int getKapasitas() const {
        return kapasitas;
    }

    // Method ini mengubah kapasitas kursi studio.
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Method ini mengembalikan objek layar proyektor studio.
    LayarProyektor getLayarProyektor() const {
        return layarProyektor;
    }

    // Method ini mengubah objek layar proyektor studio.
    void setLayarProyektor(LayarProyektor layarProyektor) {
        this->layarProyektor = layarProyektor;
    }

    // Method ini mengembalikan daftar seluruh penonton di studio.
    vector<Penonton> getDaftarPenonton() const {
        return daftarPenonton;
    }

    // Method ini mengatur/mengubah daftar penonton di studio.
    void setDaftarPenonton(vector<Penonton> daftarPenonton) {
        this->daftarPenonton = daftarPenonton;
    }

    // Method ini menambahkan satu objek penonton ke dalam daftar penonton (Array of Object).
    void tambahPenonton(Penonton penonton) {
        daftarPenonton.push_back(penonton);
    }

    // Method ini menampilkan informasi umum studio beserta spesifikasi proyektornya.
    void tampilkanInfoStudio() const {
        cout << "Studio        : " << namaStudio << endl;
        cout << "Bioskop       : " << namaBioskop << endl;
        cout << "Kapasitas     : " << kapasitas << " Kursi" << endl;
        layarProyektor.tampilkanData();
    }

    // Destruktor ini membersihkan objek Studio saat siklus hidupnya berakhir.
    ~Studio() {}
};
