#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Bioskop.cpp"
using namespace std;

// Method ini menampilkan daftar seluruh penonton dalam format tabel yang dinamis dan bergaris.
void tampilkanTabelPenonton(const vector<Penonton>& daftarPenonton) {
    if (daftarPenonton.empty()) {
        cout << "\n[INFO] Belum ada penonton yang terdaftar di bioskop ini.\n" << endl;
        return;
    }

    vector<string> header = {"NIK", "Nama", "L/P", "Kode", "Film", "Kursi", "Harga", "Camilan", "Pembayaran"};
    vector<int> lebar;
    for (const auto& kolom : header) {
        lebar.push_back((int)kolom.length());
    }

    for (const auto& p : daftarPenonton) {
        lebar[0] = max(lebar[0], (int)p.getNik().length());
        lebar[1] = max(lebar[1], (int)p.getNama().length());
        lebar[2] = max(lebar[2], (int)p.getJenisKelamin().length());
        lebar[3] = max(lebar[3], (int)p.getKodeTiket().length());
        lebar[4] = max(lebar[4], (int)p.getNamaFilm().length());
        lebar[5] = max(lebar[5], (int)p.getNomorKursi().length());
        lebar[6] = max(lebar[6], (int)("Rp " + to_string((long long)p.getHarga())).length());
        lebar[7] = max(lebar[7], (int)p.getCamilan().length());
        lebar[8] = max(lebar[8], (int)p.getMetodePembayaran().length());
    }

    auto cetakBaris = [&](const vector<string>& kolom) {
        cout << "|";
        for (size_t i = 0; i < kolom.size(); i++) {
            cout << " " << left << setw(lebar[i]) << kolom[i] << " |";
        }
        cout << endl;
    };

    string garis = "+";
    for (int w : lebar) {
        garis += string(w + 2, '-') + "+";
    }

    cout << garis << endl;
    cetakBaris(header);
    cout << garis << endl;

    for (const auto& p : daftarPenonton) {
        vector<string> data = {
            p.getNik(),
            p.getNama(),
            p.getJenisKelamin(),
            p.getKodeTiket(),
            p.getNamaFilm(),
            p.getNomorKursi(),
            "Rp " + to_string((long long)p.getHarga()),
            p.getCamilan(),
            p.getMetodePembayaran()
        };
        cetakBaris(data);
    }

    cout << garis << endl;
}

// Method utama ini mendemonstrasikan sistem bioskop dengan Komposisi, Multiple Inheritance, dan Array of Object.
int main() {
    cout << "=========================================================================================" << endl;
    cout << "                      SISTEM INFORMASI MANAJEMEN PENONTON BIOSKOP                        " << endl;
    cout << "=========================================================================================" << endl;

    // Inisialisasi Bioskop (yang sekaligus menginisialisasi Studio melalui Komposisi)
    Bioskop bioskop("CGV Grand Indonesia", "Jakarta Pusat", "Studio 1 - Velvet Screen", 60, "IMAX Laser");

    // Bagian 1: Tampilkan data sebelum penambahan penonton
    cout << "\n>>> DATA SEBELUM PENAMBAHAN PENONTON <<<" << endl;
    bioskop.tampilkanInfoBioskop();
    tampilkanTabelPenonton(bioskop.getDaftarPenonton());

    // Menyiapkan 3 data penonton awal (Multiple Inheritance dari Orang dan Tiket)
    Penonton p1("320101", "Muhammad Zidan", "Laki-laki", "TIK-001", "Interstellar", "A1", 75000, "Popcorn Karamel", "QRIS");
    Penonton p2("320102", "Asep Samsudin", "Laki-laki", "TIK-002", "Interstellar", "A2", 75000, "Nachos Keju", "Kartu Debit");
    Penonton p3("320103", "Indira Melati", "Perempuan", "TIK-003", "Inception", "B5", 60000, "Kentang Goreng", "Tunai");

    bioskop.tambahPenonton(p1);
    bioskop.tambahPenonton(p2);
    bioskop.tambahPenonton(p3);

    cout << "\n>>> MENAMBAHKAN 2 PENONTON BARU KE BIOSKOP <<<" << endl;
    Penonton p4("320104", "Budi Santoso", "Laki-laki", "TIK-004", "Avengers: Secret Wars", "C3", 85000, "Hotdog Sapi", "E-Wallet");
    Penonton p5("320105", "Citra Kirana", "Perempuan", "TIK-005", "Agak Laen 2", "D7", 50000, "Churros Manis", "QRIS");

    bioskop.tambahPenonton(p4);
    bioskop.tambahPenonton(p5);
    cout << "[BERHASIL] 2 data penonton baru telah berhasil ditambahkan!\n" << endl;

    // Bagian 2: Tampilkan data sesudah penambahan penonton
    cout << ">>> DATA SESUDAH PENAMBAHAN PENONTON <<<" << endl;
    bioskop.tampilkanInfoBioskop();
    tampilkanTabelPenonton(bioskop.getDaftarPenonton());

    return 0;
}
