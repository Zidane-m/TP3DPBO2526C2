#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Studio.cpp"
using namespace std;

// Method ini menampilkan daftar seluruh penonton dalam format tabel yang dinamis dan bergaris.
void tampilkanTabelPenonton(const vector<Penonton>& daftarPenonton) {
    string header[9] = {"No KTP", "Nama", "L/P", "Kode", "Film", "Kursi", "Harga", "Camilan", "Pembayaran"};
    int lebar[9];
    for (int i = 0; i < 9; i++) {
        lebar[i] = header[i].length();
    }

    if (daftarPenonton.size() == 0) {
        string garis = "+";
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < lebar[i] + 2; j++) {
                garis += "-";
            }
            garis += "+";
        }
        cout << garis << endl;
        cout << "|";
        for (int i = 0; i < 9; i++) {
            cout << " " << left << setw(lebar[i]) << header[i] << " |";
        }
        cout << endl;
        cout << garis << endl;
        string pesan = "Belum ada penonton yang terdaftar di studio ini.";
        int totalLebar = garis.length() - 4;
        cout << "| " << left << setw(totalLebar) << pesan << " |" << endl;
        cout << garis << endl;
        return;
    }

    for (int i = 0; i < (int)daftarPenonton.size(); i++) {
        if ((int)daftarPenonton[i].getNoKtp().length() > lebar[0]) {
            lebar[0] = daftarPenonton[i].getNoKtp().length();
        }
        if ((int)daftarPenonton[i].getNama().length() > lebar[1]) {
            lebar[1] = daftarPenonton[i].getNama().length();
        }
        if ((int)daftarPenonton[i].getJenisKelamin().length() > lebar[2]) {
            lebar[2] = daftarPenonton[i].getJenisKelamin().length();
        }
        if ((int)daftarPenonton[i].getKodeTiket().length() > lebar[3]) {
            lebar[3] = daftarPenonton[i].getKodeTiket().length();
        }
        if ((int)daftarPenonton[i].getNamaFilm().length() > lebar[4]) {
            lebar[4] = daftarPenonton[i].getNamaFilm().length();
        }
        if ((int)daftarPenonton[i].getNomorKursi().length() > lebar[5]) {
            lebar[5] = daftarPenonton[i].getNomorKursi().length();
        }
        string hargaStr = "Rp " + to_string((int)daftarPenonton[i].getHarga());
        if ((int)hargaStr.length() > lebar[6]) {
            lebar[6] = hargaStr.length();
        }
        if ((int)daftarPenonton[i].getCamilan().length() > lebar[7]) {
            lebar[7] = daftarPenonton[i].getCamilan().length();
        }
        if ((int)daftarPenonton[i].getMetodePembayaran().length() > lebar[8]) {
            lebar[8] = daftarPenonton[i].getMetodePembayaran().length();
        }
    }

    string garis = "+";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < lebar[i] + 2; j++) {
            garis += "-";
        }
        garis += "+";
    }

    cout << garis << endl;

    cout << "|";
    for (int i = 0; i < 9; i++) {
        cout << " " << left << setw(lebar[i]) << header[i] << " |";
    }
    cout << endl;

    cout << garis << endl;

    for (int i = 0; i < (int)daftarPenonton.size(); i++) {
        cout << "|";
        cout << " " << left << setw(lebar[0]) << daftarPenonton[i].getNoKtp() << " |";
        cout << " " << left << setw(lebar[1]) << daftarPenonton[i].getNama() << " |";
        cout << " " << left << setw(lebar[2]) << daftarPenonton[i].getJenisKelamin() << " |";
        cout << " " << left << setw(lebar[3]) << daftarPenonton[i].getKodeTiket() << " |";
        cout << " " << left << setw(lebar[4]) << daftarPenonton[i].getNamaFilm() << " |";
        cout << " " << left << setw(lebar[5]) << daftarPenonton[i].getNomorKursi() << " |";
        cout << " " << left << setw(lebar[6]) << ("Rp " + to_string((int)daftarPenonton[i].getHarga())) << " |";
        cout << " " << left << setw(lebar[7]) << daftarPenonton[i].getCamilan() << " |";
        cout << " " << left << setw(lebar[8]) << daftarPenonton[i].getMetodePembayaran() << " |";
        cout << endl;
    }

    cout << garis << endl;
}

// Method utama ini mendemonstrasikan sistem bioskop dengan Komposisi, Multiple Inheritance, dan Array of Object.
int main() {
    cout << "=========================================================================================" << endl;
    cout << "                      SISTEM INFORMASI MANAJEMEN PENONTON BIOSKOP                        " << endl;
    cout << "=========================================================================================" << endl;

    // Inisialisasi Studio (yang sekaligus menginisialisasi LayarProyektor melalui Komposisi)
    Studio studio("Studio 1 - Velvet Screen", "CGV Grand Indonesia", 60, "IMAX Laser", "4K Ultra HD", "Optimal");

    // Menyiapkan 3 data penonton awal (Multiple Inheritance dari Orang dan Tiket)
    Penonton p1("320101", "Muhammad Zidan", "Laki-laki", "TIK-001", "Interstellar", "A1", 75000, "Popcorn", "QRIS");
    Penonton p2("320102", "Asep Samsudin", "Laki-laki", "TIK-002", "Interstellar", "A2", 75000, "Nachos", "Kartu Debit");
    Penonton p3("320103", "Indira Melati", "Perempuan", "TIK-003", "Inception", "B5", 60000, "Kentang", "Tunai");

    studio.tambahPenonton(p1);
    studio.tambahPenonton(p2);
    studio.tambahPenonton(p3);

    // Bagian 1: Tampilkan data sebelum penambahan penonton (Tabel berisi 3 penonton awal)
    cout << "\n>>> DATA SEBELUM PENAMBAHAN PENONTON <<<" << endl;
    studio.tampilkanInfoStudio();
    tampilkanTabelPenonton(studio.getDaftarPenonton());

    cout << "\n>>> MENAMBAHKAN 2 PENONTON BARU KE STUDIO <<<" << endl;
    Penonton p4("320104", "Budi Santoso", "Laki-laki", "TIK-004", "Avengers", "C3", 85000, "Hotdog", "E-Wallet");
    Penonton p5("320105", "Citra Kirana", "Perempuan", "TIK-005", "Agak Laen 2", "D7", 50000, "Churros", "QRIS");

    studio.tambahPenonton(p4);
    studio.tambahPenonton(p5);
    cout << "[BERHASIL] 2 data penonton baru telah berhasil ditambahkan!\n" << endl;

    // Bagian 2: Tampilkan data sesudah penambahan penonton (Tabel berisi 5 penonton)
    cout << ">>> DATA SESUDAH PENAMBAHAN PENONTON <<<" << endl;
    studio.tampilkanInfoStudio();
    tampilkanTabelPenonton(studio.getDaftarPenonton());

    return 0;
}
