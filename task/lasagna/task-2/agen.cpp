#include <iostream>
using namespace std;

// 1. Tentukan waktu putaran CCTV
int waktuTungguCCTV() {
    // TODO: Kembalikan waktu standar putaran CCTV (15 menit)
    return 15;
    
}

// 2. Hitung sisa waktu tunggu
int sisaWaktuTunggu(int waktuBerjalan) {
    // TODO: Panggil fungsi waktuTungguCCTV(), kurangi dengan waktuBerjalan, lalu kembalikan hasilnya
    return waktuTungguCCTV() - waktuBerjalan;
    
}

// 3. Hitung waktu meretas pintu
int waktuRetasPintu(int jumlahPintu) {
    // TODO: Kembalikan total waktu retas (1 pintu = 8 menit)
    return jumlahPintu * 8;
    
}

// 4. Hitung total waktu misi sejauh ini
int totalWaktuMisi(int jumlahPintu, int waktuBerjalan) {
    // TODO: Panggil waktuRetasPintu() lalu tambahkan dengan waktuBerjalan
    return waktuRetasPintu(jumlahPintu) + waktuBerjalan;
    
}

// FUNGSI UTAMA (Area Juri) - Tidak perlu diubah!
int main() {
    cout << "== SIMULASI MISI AGEN RAHASIA ==\n";
    cout << "Waktu tunggu CCTV standar: " << waktuTungguCCTV() << " menit\n";
    cout << "Sisa waktu jika sudah sembunyi 5 menit: " << sisaWaktuTunggu(5) << " menit\n";
    cout << "Waktu untuk meretas 3 pintu: " << waktuRetasPintu(3) << " menit\n";
    cout << "Total waktu misi (3 pintu, 5 menit sembunyi): " << totalWaktuMisi(3, 5) << " menit\n";
    
    return 0;
}