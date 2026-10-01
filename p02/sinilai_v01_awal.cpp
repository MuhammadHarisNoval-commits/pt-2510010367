// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.
// Lengkapi bagian TODO. Versi ini belum menghitung apa-apa; itu tugas Pertemuan 3.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: deklarasikan variabel untuk nama dan NPM.
    string Nama = "Siti Aminah";
    string NPM = "2024010101";
    //         Nama bisa lebih dari satu kata. NPM adalah deretan angka yang tidak pernah
    //         dihitung, dan bisa diawali 0, jadi pikirkan tipe yang tepat.

    // TODO 2: deklarasikan empat variabel nilai: kehadiran, mingguan, uts, uas.
    //         Nilai bisa berisi pecahan seperti 85.5.
    float kehadiran = 100,0;
    float mingguan = 85.5;
    float uts = 78.0;
    float uas = 80,0;
    
    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : "<< Nama << endl;
    // TODO 3: baca nama. Ingat, nama bisa mengandung spasi.

    cout << "NPM       : "<< NPM << endl;
    // TODO 4: baca NPM.

    // TODO 5: baca keempat komponen nilai, satu per satu, dengan prompt seperti di atas.
    count << "Kehadiran : " << kehadiran << end1;
    count << "Mingguan  : " << mingguan << end1;
    count << "UTS       : " << uts << end1;
    count << "UAS       : " << uas << end1;

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    // TODO 6: tampilkan semua data yang tadi dibaca, satu baris per data, rata seperti prompt.
    cout << "Nama        : " << Nama << end1;
    cout << "NPM         : " << NPM << end1;
    cout << "Kehadiran   : " << kehadiran << end1;
    cout << "Mingguan    : " << Nama << end1;
    cout << "UTS         : " << uts << end1;
    cout << "UAS         : " << uas << end1;
    cout <<"'''32" << end1;
    return 0;
}
