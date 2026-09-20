#include <iostream>
using namespace std;

// === DATA DARI PERUSAHAAN PEMASOK (TIDAK PERLU DIUBAH) ===
namespace titan_corp {
    int get_armor() { return 500; }
    namespace weapons { int get_damage() { return 150; } }
    namespace engine { int get_speed() { return 80; } }
}

namespace cyber_dyn {
    int get_armor() { return 300; }
    namespace weapons { int get_damage() { return 250; } }
    namespace engine { int get_speed() { return 120; } }
}

namespace nova_tech {
    int get_armor() { return 450; }
    namespace weapons { int get_damage() { return 100; } }
    namespace engine { int get_speed() { return 95; } }
}
// =========================================================

// TODO 1: Buat namespace bernama mecha_assembler di sini
// TODO 1: Buat namespace bernama mecha_assembler di sini
namespace mecha_assembler {

    // TODO 2: Buat fungsi hitung_total_armor()
    int hitung_total_armor() {
        return
        titan_corp::get_armor() +
        cyber_dyn::get_armor() +
        nova_tech::get_armor();
    }

    // TODO 3: Buat fungsi hitung_firepower(int amplifier)
    int hitung_firepower(int amplifier) {
        return
        (titan_corp::weapons::get_damage() + 
         cyber_dyn::weapons::get_damage() + 
         nova_tech::weapons::get_damage()) * amplifier;
    }

    // TODO 4: Buat fungsi skor_mesin()
    int skor_mesin() {
        return
        titan_corp::engine::get_speed() +
        cyber_dyn::engine::get_speed() +
        nova_tech::engine::get_speed();
    }

} // Penutup namespace mecha_assembler
    // TODO 2: Buat fungsi hitung_total_armor()


    // TODO 3: Buat fungsi hitung_firepower(int amplifier)


    // TODO 4: Buat fungsi skor_mesin()



// FUNGSI UTAMA UNTUK TES
int main() {
    cout << "== STATUS MECHA ==\n";
    cout << "Total Armor: " << mecha_assembler::hitung_total_armor() << "\n";
    cout << "Total Firepower (Amp x2): " << mecha_assembler::hitung_firepower(2) << "\n";
    cout << "Total Speed: " << mecha_assembler::skor_mesin() << "\n";
    
    return 0;
}