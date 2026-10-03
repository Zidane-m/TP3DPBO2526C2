from Studio import Studio
from Penonton import Penonton


def tampilkanTabelPenonton(daftar_penonton):
    # Fungsi ini menampilkan seluruh data penonton dalam format tabel dinamis bergaris.
    headers = [
        "No KTP", "Nama", "L/P", "Kode", "Film", "Kursi", "Harga", "Camilan", "Pembayaran"
    ]

    widths = [len(h) for h in headers]

    if len(daftar_penonton) == 0:
        border = "+"
        for w in widths:
            border += "-" * (w + 2) + "+"
        print(border)
        header_str = "|"
        for i in range(len(headers)):
            spasi = " " * (widths[i] - len(headers[i]))
            header_str += " " + headers[i] + spasi + " |"
        print(header_str)
        print(border)
        pesan = "Belum ada penonton yang terdaftar di studio ini."
        total_lebar = len(border) - 3
        spasi_pesan = " " * (total_lebar - len(pesan))
        print("| " + pesan + spasi_pesan + " |")
        print(border)
        return

    rows = []
    for i in range(len(daftar_penonton)):
        p = daftar_penonton[i]
        rows.append([
            p.getNoKtp(),
            p.getNama(),
            p.getJenisKelamin(),
            p.getKodeTiket(),
            p.getNamaFilm(),
            p.getNomorKursi(),
            "Rp " + str(int(p.getHarga())),
            p.getCamilan(),
            p.getMetodePembayaran()
        ])

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

    # Inisialisasi Studio (yang sekaligus menginisialisasi LayarProyektor melalui Komposisi)
    studio = Studio("Studio 1 - Velvet Screen", "CGV Grand Indonesia", 60, "IMAX Laser", "4K Ultra HD", "Optimal")

    # Menyiapkan 3 data penonton awal (Multiple Inheritance dari Orang dan Tiket)
    p1 = Penonton("320101", "Muhammad Zidan", "Laki-laki", "TIK-001", "Interstellar", "A1", 75000, "Popcorn", "QRIS")
    p2 = Penonton("320102", "Andi Saputra", "Laki-laki", "TIK-002", "Interstellar", "A2", 75000, "Nachos", "Kartu Debit")
    p3 = Penonton("320103", "Siti Khadijah", "Perempuan", "TIK-003", "Inception", "B5", 60000, "Kentang", "Tunai")

    studio.tambahPenonton(p1)
    studio.tambahPenonton(p2)
    studio.tambahPenonton(p3)

    # Bagian 1: Tampilkan data sebelum penambahan penonton baru (tabel berisi 3 penonton awal)
    print("\n>>> DATA SEBELUM PENAMBAHAN PENONTON <<<")
    studio.tampilkanInfoStudio()
    tampilkanTabelPenonton(studio.getDaftarPenonton())

    # Menambahkan 2 penonton baru
    print("\n>>> MENAMBAHKAN 2 PENONTON BARU KE STUDIO <<<")
    p4 = Penonton("320104", "Budi Santoso", "Laki-laki", "TIK-004", "Avengers", "C3", 85000, "Hotdog", "E-Wallet")
    p5 = Penonton("320105", "Citra Kirana", "Perempuan", "TIK-005", "Agak Laen 2", "D7", 50000, "Churros", "QRIS")

    studio.tambahPenonton(p4)
    studio.tambahPenonton(p5)
    print("[BERHASIL] 2 data penonton baru telah berhasil ditambahkan!\n")

    # Bagian 2: Tampilkan data sesudah penambahan penonton (tabel berisi 5 penonton)
    print(">>> DATA SESUDAH PENAMBAHAN PENONTON <<<")
    studio.tampilkanInfoStudio()
    tampilkanTabelPenonton(studio.getDaftarPenonton())


if __name__ == "__main__":
    main()
