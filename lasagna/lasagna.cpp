// 1. FUNGSI TANPA PARAMETER
// 'int' di awal menandakan bahwa fungsi ini akan menghasilkan/mengembalikan
// sebuah nilai berupa bilangan bulat (integer).
// Tanda kurung () kosong berarti fungsi ini bisa langsung dipanggil 
// tanpa memerlukan data input apa pun.
int ovenTime() {
    // Fungsi ini sangat sederhana, ia selalu mengembalikan angka tetap, yaitu 40.
    return 40;
}

// 2. FUNGSI DENGAN SATU PARAMETER & MEMANGGIL FUNGSI LAIN
// Di dalam kurung ada 'int actualMinutesInOven'. Ini disebut Parameter.
// Artinya, fungsi ini butuh disuapi 1 data angka bulat (int) agar bisa bekerja.
int remainingOvenTime(int actualMinutesInOven) {
    // Di sini kita memanggil fungsi ovenTime() yang ada di atas.
    // C++ akan mengambil hasil ovenTime() yaitu 40, lalu menguranginya (-) 
    // dengan angka apa pun yang dimasukkan ke actualMinutesInOven, dan mengembalikannya.
    return ovenTime() - actualMinutesInOven;
}

// 3. FUNGSI DENGAN OPERASI MATEMATIKA DASAR
// Sama seperti fungsi sebelumnya, fungsi ini meminta 1 input angka bulat
// yang diwakili oleh variabel bernama 'numberOfLayers'.
int preparationTime(int numberOfLayers) {
    // C++ menggunakan tanda bintang (*) untuk operasi perkalian.
    // Variabel numberOfLayers dikalikan 2, lalu hasilnya dikembalikan (return).
    return numberOfLayers * 2;
}

// 4. FUNGSI DENGAN DUA PARAMETER
// Fungsi ini meminta 2 input data sekaligus.
// Parameter dipisahkan oleh tanda koma (,). Keduanya bertipe integer (int).
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Di sini terjadi dua langkah dalam satu baris:
    // Langkah 1: Memanggil preparationTime(numberOfLayers) untuk menghitung waktu persiapan.
    // Langkah 2: Hasil perhitungan tadi langsung ditambah (+) dengan actualMinutesInOven.
    // Total akhirnya dikembalikan sebagai hasil dari fungsi ini.
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}