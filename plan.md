# Rencana Tugas Praktikum 3 (TP3) DPBO 2526 C2

## 1. Analisis Persyaratan & Penyesuaian Pola TP1 & TP2
* **Tema:** Sistem Bioskop (Cinema) - Melanjutkan TP1 dan TP2.
* **Bahasa Pemrograman:** C++ dan Python (Wajib). Sesuai kesepakatan, Java ditiadakan karena Java tidak mendukung *class multiple inheritance* secara *native* dan sifatnya hanya bonus opsional.
* **Pola Enkapsulasi:** Seluruh atribut bersifat `protected` / `private` dengan **Getter dan Setter** lengkap di setiap kelas.
* **Standar Bahasa & Komentar:** 
  - Penamaan class, atribut, method, dan variabel menggunakan **Bahasa Indonesia**.
  - Pola komentar method mengikuti standar TP1 dan TP2 (`// Konstruktor ini ...`, `// Method ini mengembalikan ...`, `// Method ini mengubah ...`).
* **Format Output:** Tampilan data bioskop dan tabel dinamis bergaris (`+-----+-----+`) untuk penonton.
* **Konsep Utama TP3 yang Diimplementasikan:**
  1. **Multiple Inheritance:** Class `Penonton` mewarisi sifat dari `Orang` dan `Tiket` (didukung *native* di C++ dan Python).
  2. **Composition:** Class `Bioskop` memiliki objek `Studio` yang dibuat langsung di dalam konstruktornya (*part-of*).
  3. **Array of Object:** Class `Bioskop` mengelola kumpulan objek `Penonton` (`vector` di C++ dan `list` di Python).

## 2. Struktur Kelas
1. `Orang`: `nik`, `nama`, `jenisKelamin`.
2. `Tiket`: `kodeTiket`, `namaFilm`, `nomorKursi`, `harga`.
3. `Penonton` (Child dari `Orang` & `Tiket` $\rightarrow$ Multiple Inheritance): `camilan`, `metodePembayaran`.
4. `Studio`: `namaStudio`, `kapasitas`, `jenisLayar`.
5. `Bioskop`: `namaBioskop`, `lokasi`, `studio` (Komposisi), `daftarPenonton` (Array of Object).

## 3. Struktur Direktori Proyek
```
TP3DPBO2526C2/
├── CPP/
│   ├── Program/
│   │   ├── Orang.cpp
│   │   ├── Tiket.cpp
│   │   ├── Penonton.cpp
│   │   ├── Studio.cpp
│   │   ├── Bioskop.cpp
│   │   └── main.cpp
│   └── Dokumentasi/
├── Python/
│   ├── Program/
│   │   ├── Orang.py
│   │   ├── Tiket.py
│   │   ├── Penonton.py
│   │   ├── Studio.py
│   │   ├── Bioskop.py
│   │   └── main.py
│   └── Dokumentasi/
├── README.md
└── plan.md
```

## 4. Status Pengerjaan
- [x] Desain kelas & relasi Multiple Inheritance + Composition + Array of Object.
- [x] Implementasi kode program C++ dengan Getter & Setter lengkap.
- [x] Implementasi kode program Python dengan Getter & Setter lengkap.
- [x] Penyeragaman penamaan, komentar bahasa Indonesia, dan pembuatan tabel output dinamis.
- [x] Pembuatan README.md lengkap dengan diagram Mermaid dan Janji (fokus C++ dan Python).
- [x] Penghapusan folder Java agar proyek fokus dan murni pada bahasa yang mendukung Multiple Inheritance.
