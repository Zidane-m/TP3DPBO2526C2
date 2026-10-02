from Bioskop import Bioskop
from Penonton import Penonton


def tampilkanTabelPenonton(daftar_penonton):
    # Fungsi ini menampilkan seluruh data penonton dalam format tabel dinamis bergaris.
    if len(daftar_penonton) == 0:
        print("\n[INFO] Belum ada penonton yang terdaftar di bioskop ini.\n")
        return

    headers = [
        "NIK", "Nama", "L/P", "Kode", "Film", "Kursi", "Harga", "Camilan", "Pembayaran"
    ]
    rows = []

    for i in range(len(daftar_penonton)):
        p = daftar_penonton[i]
        rows.append([
            p.getNik(),
            p.getNama(),
            p.getJenisKelamin(),
            p.getKodeTiket(),
            p.getNamaFilm(),
            p.getNomorKursi(),
            "Rp " + str(int(p.getHarga())),
            p.getCamilan(),
            p.getMetodePembayaran()
        ])

    widths = []
    for i in range(len(headers)):
        widths.append(len(headers[i]))

    for i in range(len(rows)):
        for j in range(len(rows[i])):
            if len(rows[i][j]) > widths[j]:
                widths[j] = len(rows[i][j])

    border = "+"
    for i in range(len(widths)):
        border += "-" * (widths[i] + 2) + "+"

    print(border)

    # Cetak baris header
    header_str = "|"
    for i in range(len(headers)):
        spasi = " " * (widths[i] - len(headers[i]))
        header_str += " " + headers[i] + spasi + " |"
    print(header_str)
    print(border)

    # Cetak baris data penonton
    for i in range(len(rows)):
        row_str = "|"
        for j in range(len(rows[i])):
            spasi = " " * (widths[j] - len(rows[i][j]))
            row_str += " " + rows[i][j] + spasi + " |"
        print(row_str)
    print(border)


def main():
    # Fungsi utama ini mendemonstrasikan sistem bioskop dengan Komposisi, Multiple Inheritance, dan Array of Object.
    print("=========================================================================================")
    print("                      SISTEM INFORMASI MANAJEMEN PENONTON BIOSKOP                        ")
    print("=========================================================================================")

    # Inisialisasi Bioskop (yang sekaligus menginisialisasi Studio melalui Komposisi)
    bioskop = Bioskop("CGV Grand Indonesia", "Jakarta Pusat", "Studio 1 - Velvet Screen", 60, "IMAX Laser")

    # Bagian 1: Tampilkan data sebelum penambahan penonton
    print("\n>>> DATA SEBELUM PENAMBAHAN PENONTON <<<")
    bioskop.tampilkanInfoBioskop()
    tampilkanTabelPenonton(bioskop.getDaftarPenonton())

    # Menyiapkan 3 data penonton awal (Multiple Inheritance dari Orang dan Tiket)
    p1 = Penonton("320101", "Muhammad Zidan", "Laki-laki", "TIK-001", "Interstellar", "A1", 75000, "Popcorn Karamel", "QRIS")
    p2 = Penonton("320102", "Mirza Fedrieka", "Laki-laki", "TIK-002", "Interstellar", "A2", 75000, "Nachos Keju", "Kartu Debit")
    p3 = Penonton("320103", "Alya Amanda", "Perempuan", "TIK-003", "Inception", "B5", 60000, "Kentang Goreng", "Tunai")

    bioskop.tambahPenonton(p1)
    bioskop.tambahPenonton(p2)
    bioskop.tambahPenonton(p3)

    print("\n>>> MENAMBAHKAN 2 PENONTON BARU KE BIOSKOP <<<")
    p4 = Penonton("320104", "Budi Santoso", "Laki-laki", "TIK-004", "Avengers: Secret Wars", "C3", 85000, "Hotdog Sapi", "E-Wallet")
    p5 = Penonton("320105", "Citra Kirana", "Perempuan", "TIK-005", "Agak Laen 2", "D7", 50000, "Churros Manis", "QRIS")

    bioskop.tambahPenonton(p4)
    bioskop.tambahPenonton(p5)
    print("[BERHASIL] 2 data penonton baru telah berhasil ditambahkan!\n")

    # Bagian 2: Tampilkan data setelah penambahan penonton
    print(">>> DATA SESUDAH PENAMBAHAN PENONTON <<<")
    bioskop.tampilkanInfoBioskop()
    tampilkanTabelPenonton(bioskop.getDaftarPenonton())


if __name__ == "__main__":
    main()
