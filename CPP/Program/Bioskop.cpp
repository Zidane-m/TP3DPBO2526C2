#include <iostream>
#include <vector>
#include <string>
#include "Studio.cpp"
#include "Penonton.cpp"
using namespace std;

class Bioskop {
private:
    string namaBioskop;
    string lokasi;
    Studio studio; // Komposisi: Objek Studio menjadi bagian utuh dari Bioskop
    vector<Penonton> daftarPenonton; // Array of Object: Kumpulan objek Penonton

public:
    // Konstruktor ini membuat objek Bioskop dengan nilai awal kosong.
    Bioskop() : namaBioskop(""), lokasi(""), studio(), daftarPenonton() {}

    // Konstruktor ini menginisialisasi Bioskop beserta objek Studio di dalamnya (Komposisi).
    Bioskop(string namaBioskop, string lokasi, string namaStudio, int kapasitas, string jenisLayar):
        namaBioskop(namaBioskop), lokasi(lokasi), studio(namaStudio, kapasitas, jenisLayar) {}

    // Method ini mengembalikan nama bioskop.
    string getNamaBioskop() const {
        return namaBioskop;
    }

    // Method ini mengubah nama bioskop.
    void setNamaBioskop(string namaBioskop) {
        this->namaBioskop = namaBioskop;
    }

    // Method ini mengembalikan lokasi bioskop.
    string getLokasi() const {
        return lokasi;
    }

    // Method ini mengubah lokasi bioskop.
    void setLokasi(string lokasi) {
        this->lokasi = lokasi;
    }

    // Method ini mengembalikan objek studio bioskop.
    Studio getStudio() const {
        return studio;
    }

    // Method ini mengubah objek studio bioskop.
    void setStudio(Studio studio) {
        this->studio = studio;
    }

    // Method ini mengembalikan daftar seluruh penonton di bioskop.
    vector<Penonton> getDaftarPenonton() const {
        return daftarPenonton;
    }

    // Method ini mengatur/mengubah daftar penonton di bioskop.
    void setDaftarPenonton(vector<Penonton> daftarPenonton) {
        this->daftarPenonton = daftarPenonton;
    }

    // Method ini menambahkan satu objek penonton ke dalam daftar penonton (Array of Object).
    void tambahPenonton(Penonton penonton) {
        daftarPenonton.push_back(penonton);
    }

    // Method ini menampilkan informasi umum bioskop beserta studionya.
    void tampilkanInfoBioskop() const {
        cout << "Bioskop       : " << namaBioskop << endl;
        cout << "Lokasi        : " << lokasi << endl;
        studio.tampilkanData();
    }
};
