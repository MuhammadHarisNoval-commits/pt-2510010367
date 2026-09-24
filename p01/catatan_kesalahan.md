# Catatan Kesalahan Praktikum 5

| Berkas | Jenis kesalahan | Pesan yang muncul | Cara mengetahuinya |

| k1_sintaks.cpp | Kesalahan sintaks | expected ';' before 'std' | Compiler menunjukkan kesalahan pada baris sebelum std::cout karena tanda titik koma hilang. |

| k2_nama.cpp | Kesalahan nama | 'nilai' was not declared in this scope | Compiler menunjukkan bahwa variabel digunakan sebelum dideklarasikan / nama variabel tidak sesuai. |

| k3_runtime.cpp | Kesalahan runtime | Program berjalan tetapi bermasalah saat input 0 | Saat jumlah mahasiswa diisi 0, terjadi pembagian dengan nol sehingga hasil tidak normal. |

| k4_logika.cpp | Kesalahan logika | Tidak ada pesan error, tetapi hasil 81 | Program berhasil dijalankan, tetapi hasil rata-rata salah karena pembagian menggunakan bilangan integer. |

## Kesalahan yang menurut saya paling berbahaya

Menurut saya, kesalahan runtime cukup berbahaya karena program dapat berhasil di-build dan terlihat normal, tetapi dapat bermasalah ketika pengguna memasukkan data tertentu. Kesalahan logika juga perlu diperhatikan karena program dapat berjalan tanpa error, tetapi menghasilkan jawaban yang salah.