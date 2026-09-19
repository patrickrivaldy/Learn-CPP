// 1. INCLUDE (Pre-processor Directive)
// Menyisipkan file header ke dalam kode ini sebelum proses kompilasi berjalan.
// Ibarat "daftar isi", file hello_world.h berisi deklarasi bahwa fungsi hello() itu ada,
// sementara file .cpp ini adalah "isi bab"-nya tempat fungsi itu benar-benar ditulis.
#include "hello_world.h"

// 2. USING NAMESPACE (Standard Library)
// Mengimpor seluruh fitur bawaan C++ (seperti string, cout, dll) agar bisa langsung diketik.
// Tanpa baris ini, kamu wajib mengetik "std::string" di baris ke-17.
// Dengan baris ini, kamu cukup mengetik "string" saja.
using namespace std;

// 3. NAMESPACE (Pembungkus Ruang Lingkup)
// Membuat ruang khusus bernama "hello_world". 
// Tujuannya untuk mencegah bentrok (collision). Jika ada program atau library lain 
// yang juga punya fungsi bernama hello(), kompilator tidak akan bingung karena fungsi ini 
// secara spesifik adalah milik keluarga (namespace) hello_world.
namespace hello_world {

// 4. FUNCTION DEFINITION (Implementasi Logika)
// - "string"  : Menandakan bahwa fungsi ini akan menghasilkan output berupa teks.
// - "hello()" : Nama fungsinya. Tanda kurung kosong () berarti fungsi ini tidak butuh input data.
// - "return"  : Perintah untuk mengembalikan/melemparkan teks "Hello, World!" ke 
//               siapapun yang memanggil fungsi ini (dalam hal ini, si file unit test).
// Insight RE : Di Assembly, instruksi 'return' biasanya menaruh pointer/alamat memori dari teks 
//              ini ke dalam register CPU (seperti RAX) lalu melakukan instruksi 'RET'.
string hello() { 
    return "Hello, World!"; 
}

}  // Penutup dari block namespace hello_world