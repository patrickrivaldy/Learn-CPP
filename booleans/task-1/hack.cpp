#include <iostream>
using namespace std;

// 1. Verifikasi Admin
bool aksesAdmin(bool passwordBenar, bool bawaTokenFisik) {
    // TODO: Gunakan logika AND
    return passwordBenar && bawaTokenFisik;
}

// 2. Pemicu Alarm
bool alarmAktif(bool pintuDiterobos, bool kacaPecah) {
    // TODO: Gunakan logika OR
    return pintuDiterobos || kacaPecah;
}

// 3. Sistem Kunci Otomatis
bool sistemTerkunci(bool statusAlarm, bool statusAdmin) {
    // TODO: Gunakan kombinasi AND dan NOT
    return statusAlarm && !statusAdmin;
}

// 4. Syarat Meretas Brankas
bool bisaRetasBrankas(bool statusTerkunci, bool punyaKabelBypass) {
    // TODO: Gunakan kombinasi NOT dan AND
    return !statusTerkunci && punyaKabelBypass;
}

int main() {
    cout << "== STATUS SERVER ==\n";
    cout << "Akses Admin (pass benar, tanpa token)? " << aksesAdmin(true, false) << "\n";
    cout << "Alarm (pintu aman, kaca pecah)? " << alarmAktif(false, true) << "\n";
    cout << "Lockdown (alarm nyala, bukan admin)? " << sistemTerkunci(true, false) << "\n";
    cout << "Bisa Hack (sistem terkunci, punya kabel)? " << bisaRetasBrankas(true, true) << "\n";
    
    return 0;
}