#include <iostream>
#include <string>
using namespace std;

class Tiket {
protected:
    string kodeTiket;
    string namaFilm;
    string nomorKursi;
    double harga;

public:
    // Konstruktor ini membuat objek Tiket dengan nilai awal kosong.
    Tiket() : kodeTiket(""), namaFilm(""), nomorKursi(""), harga(0.0) {}

    // Konstruktor ini mengisi data tiket dari nilai yang diberikan.
    Tiket(string kodeTiket, string namaFilm, string nomorKursi, double harga)
        : kodeTiket(kodeTiket), namaFilm(namaFilm), nomorKursi(nomorKursi), harga(harga) {}

    // Method ini mengembalikan kode tiket.
    string getKodeTiket() const {
        return kodeTiket;
    }

    // Method ini mengubah kode tiket.
    void setKodeTiket(string kodeTiket) {
        this->kodeTiket = kodeTiket;
    }

    // Method ini mengembalikan nama film pada tiket.
    string getNamaFilm() const {
        return namaFilm;
    }

    // Method ini mengubah nama film pada tiket.
    void setNamaFilm(string namaFilm) {
        this->namaFilm = namaFilm;
    }

    // Method ini mengembalikan nomor kursi penonton.
    string getNomorKursi() const {
        return nomorKursi;
    }

    // Method ini mengubah nomor kursi penonton.
    void setNomorKursi(string nomorKursi) {
        this->nomorKursi = nomorKursi;
    }

    // Method ini mengembalikan harga tiket film.
    double getHarga() const {
        return harga;
    }

    // Method ini mengubah harga tiket film.
    void setHarga(double harga) {
        this->harga = harga;
    }

    // Method ini menampilkan data tiket penonton.
    virtual void tampilkanData() const {
        cout << "Kode Tiket    : " << kodeTiket << endl;
        cout << "Nama Film     : " << namaFilm << endl;
        cout << "Nomor Kursi   : " << nomorKursi << endl;
        cout << "Harga Tiket   : Rp " << (int)harga << endl;
    }
};
