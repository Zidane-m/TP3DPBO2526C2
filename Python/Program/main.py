from Bioskop import Bioskop
from Penonton import Penonton


def tampilkanTabelPenonton(daftar_penonton):
    # Fungsi ini menampilkan seluruh data penonton dalam format tabel dinamis bergaris.
    if not daftar_penonton:
        print("\n[INFO] Belum ada penonton yang terdaftar di bioskop ini.\n")
        return

    headers = [
        "NIK", "Nama", "L/P", "Kode", "Film", "Kursi", "Harga", "Camilan", "Pembayaran"
    ]
    rows = []

    for p in daftar_penonton:
        rows.append([
            p.getNik(),
            p.getNama(),
            p.getJenisKelamin(),
            p.getKodeTiket(),
            p.getNamaFilm(),
            p.getNomorKursi(),
            f"Rp {int(p.getHarga())}",
            p.getCamilan(),
            p.getMetodePembayaran()
        ])

    widths = [len(str(header)) for header in headers]
    for row in rows:
        for i, value in enumerate(row):
            widths[i] = max(widths[i], len(str(value)))

    def print_row(values):
        cells = [str(value).ljust(widths[i]) for i, value in enumerate(values)]
        print("| " + " | ".join(cells) + " |")

    border = "+" + "+".join("-" * (width + 2) for width in widths) + "+"
    print(border)
    print_row(headers)
    print(border)
    for row in rows:
        print_row(row)
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
