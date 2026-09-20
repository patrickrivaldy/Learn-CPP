bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    // && (AND) mensyaratkan KEDUA sisi harus bernilai true (1).
    // Pac-Man HANYA bisa makan hantu JIKA pelletnya aktif (true) 
    // DAN dia juga sedang menyentuh hantu (true).
    // Jika salah satu saja false (misal: pellet mati), hasilnya pasti false.
    return power_pellet_active && touching_ghost;
}

bool scored(bool touching_power_pellet, bool touching_dot) {
    // || (OR) mensyaratkan MINIMAL SALAH SATU sisi bernilai true (1).
    // Skor akan bertambah JIKA menyentuh pellet (true) 
    // ATAU menyentuh titik biasa (true).
    // Bahkan jika dia menyentuh keduanya sekaligus, hasilnya tetap true.
    return touching_power_pellet || touching_dot;
}

bool lost(bool power_pellet_active, bool touching_ghost) {
    // ! (NOT) membalikkan nilai. Jika power_pellet_active adalah true, 
    // maka !power_pellet_active menjadi false.
    // Logika di bawah ini dibaca: Pac-Man kalah JIKA dia menyentuh hantu (true) 
    // DAN dia TIDAK memiliki pellet aktif (!power_pellet_active).
    return touching_ghost && !power_pellet_active;
}

bool won(bool has_eaten_all_dots, bool power_pellet_active, bool touching_ghost) {
    // Sama seperti pelajaran memanggil fungsi sebelumnya, kita melempar 
    // variabel power_pellet_active dan touching_ghost ke dalam fungsi lost().
    // Logikanya dibaca: Menang JIKA semua titik dimakan (true) 
    // DAN TIDAK kalah (!lost).
    return has_eaten_all_dots && !lost(power_pellet_active, touching_ghost);
}