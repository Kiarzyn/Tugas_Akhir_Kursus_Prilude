# Tugas Akhir - Sistem Manajemen Data Siswa (Bahasa C)

Repo ini berisi program manajemen data siswa berbasis CLI (Command Line Interface) menggunakan Bahasa C. Program ini dirancang untuk mendata nilai, menghitung rata-rata dan total nilai siswa, serta menentukan status kelulusan siswa secara otomatis.

## 📋 Fitur Utama
- Input Data: Memasukkan nama (String) dan nilai (float) sesuai jumlah siswa.
- Penyimpanan: Menggunakan struktur data Array agar data terkelola dengan baik.
- Proses & Perhitungan: Otomatis menghitung total nilai dan rata-rata kelas.
- Output Penentu Kelulusan: Validasi otomatis berdasarkan KKM (Nilai ≥ 80 = Lulus, < 80 = Tidak Lulus).


## 💻 Contoh Tampilan Output
```text
Masukkan jumlah siswa: 4

Siswa ke-1
Nama: Dika No Fliker
Nilai: 67.67

Siswa ke-2
Nama: Bagus No Purify
Nilai: 79.99

Siswa ke-3
Nama: Dzikri No Retri
Nilai: 80.01

Siswa ke-4
Nama: Adit No Winter
Nilai: 99.99

=== HASIL ===
Dika No Fliker - 67.67 - Tidak Lulus
Bagus No Purify - 79.99 - Tidak Lulus
Dzikri No Retri - 80.01 - Lulus
Adit No Winter - 99.99 - Lulus

Total nilai kelas: 327.66
Rata-rata kelas: 81.91
```
