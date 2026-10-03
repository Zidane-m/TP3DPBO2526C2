#pragma once
#include <iostream>
#include <string>
using namespace std;

class LayarProyektor {
private:
    string tipeLayar;
    string resolusi;
    string kondisiLampu;

public:
    // Konstruktor ini membuat objek LayarProyektor dengan nilai awal kosong.
    LayarProyektor() : tipeLayar(""), resolusi(""), kondisiLampu("") {}

    // Konstruktor ini mengisi data spesifikasi LayarProyektor dari nilai yang diberikan.
    LayarProyektor(string tipeLayar, string resolusi, string kondisiLampu)
        : tipeLayar(tipeLayar), resolusi(resolusi), kondisiLampu(kondisiLampu) {}

    // Method ini mengembalikan tipe layar proyektor.
    string getTipeLayar() const {
        return tipeLayar;
    }

    // Method ini mengubah tipe layar proyektor.
    void setTipeLayar(string tipeLayar) {
        this->tipeLayar = tipeLayar;
    }

    // Method ini mengembalikan resolusi layar proyektor.
    string getResolusi() const {
        return resolusi;
    }

    // Method ini mengubah resolusi layar proyektor.
    void setResolusi(string resolusi) {
        this->resolusi = resolusi;
    }

    // Method ini mengembalikan kondisi lampu proyektor.
    string getKondisiLampu() const {
        return kondisiLampu;
    }

    // Method ini mengubah kondisi lampu proyektor.
    void setKondisiLampu(string kondisiLampu) {
        this->kondisiLampu = kondisiLampu;
    }

    // Method ini menampilkan informasi data layar proyektor.
    void tampilkanData() const {
        cout << "Tipe Layar    : " << tipeLayar << endl;
        cout << "Resolusi      : " << resolusi << endl;
        cout << "Kondisi Lampu : " << kondisiLampu << endl;
    }

    // Destruktor ini membersihkan objek LayarProyektor saat siklus hidupnya berakhir.
    ~LayarProyektor() {}
};
