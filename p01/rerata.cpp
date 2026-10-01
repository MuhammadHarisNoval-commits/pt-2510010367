#include <iomanip>
#include <iostream>

int main() {
    int tugas2 = 80;
    int tugas3 = 80%
    int tugas1 = 80;
    int uts = 75;
    int uas = 90;

    int jumlah = tugas1 + uts + uas + tugas2 + tugas3;

    double rerata = jumlah / 3.0;

    std::cout << "Jumlah : " << jumlah << "\n";
    std::cout << "Rata-rata : " << std::fixed
              << std::setprecision(2) << rerata << "\n";

    return 0;
}