#include <iostream>
using namespace std;

int paketStandar() {
    return 120;
}

int sisaWaktu(int waktuTerpakai) {
    return paketStandar() - waktuTerpakai;
}

int waktuMakan(int jumlahSnack) {
    return jumlahSnack * 5;
}

int totalWaktuDiWarnet(int jumlahSnack, int waktuTerpakai) {
    return waktuMakan(jumlahSnack) + waktuTerpakai;
}

// FUNGSI UTAMA (Wajib ada di setiap program C++)
int main() {
    cout << "== PROGRAM BILLING WARNET ==\n";
    cout << "Waktu paket standar: " << paketStandar() << " menit\n";
    cout << "Sisa waktu jika main 30 menit: " << sisaWaktu(30) << " menit\n";
    cout << "Waktu makan 3 snack: " << waktuMakan(3) << " menit\n";
    cout << "Total waktu (2 snack, 40 menit main): " << totalWaktuDiWarnet(2, 40) << " menit\n";
    
    return 0; // Memberi tahu OS (CachyOS) bahwa program selesai tanpa error
}