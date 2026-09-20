// Secret knowledge of the Zhang family:
namespace zhang {
int bank_number_part(int secret_modifier) {
    int zhang_part{8'541};
    return (zhang_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 512; }
}  // namespace red
namespace blue {
int code_fragment() { return 677; }
}  // namespace blue
}  // namespace zhang

// Secret knowledge of the Khan family:
namespace khan {
int bank_number_part(int secret_modifier) {
    int khan_part{4'142};
    return (khan_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 148; }
}  // namespace red
namespace blue {
int code_fragment() { return 875; }
}  // namespace blue
}  // namespace khan

// Secret knowledge of the Garcia family:
namespace garcia {
int bank_number_part(int secret_modifier) {
    int garcia_part{4'023};
    return (garcia_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 118; }
}  // namespace red
namespace blue {
int code_fragment() { return 923; }
}  // namespace blue
}  // namespace garcia


// Enter your code below

// PENJELASAN 1:
// Kamu membuat ruang namamu sendiri (estate_executor) agar kodemu terpisah
// dan tidak bentrok dengan kode milik keluarga Zhang, Khan, atau Garcia.
namespace estate_executor {

    // PENJELASAN 2:
    // Kamu memanggil fungsi bank_number_part milik masing-masing keluarga.
    // Tanda :: (Scope Resolution Operator) berfungsi seperti alamat rumah.
    // zhang::bank_number_part artinya "masuk ke namespace zhang, lalu ambil fungsi bank_number_part".
    // Kamu mengirimkan secret_modifier ke ketiganya, lalu langsung menjumlahkannya.
    int assemble_account_number(int secret_modifier) {
        return zhang::bank_number_part(secret_modifier) + 
               khan::bank_number_part(secret_modifier) + 
               garcia::bank_number_part(secret_modifier);
    }

    // PENJELASAN 3:
    // Ini adalah contoh pemanggilan Nested Namespace (namespace di dalam namespace).
    // Kamu masuk ke zhang -> blue -> lalu mengeksekusi code_fragment().
    // Di kodemu ini, kamu langsung menjumlahkan semua yang 'blue' di dalam kurung pertama,
    // lalu dikalikan (*) dengan jumlah semua yang 'red' di kurung kedua.
    // Logika satu baris ini sangat efisien.
    int assemble_code() {
        return (zhang::blue::code_fragment() + khan::blue::code_fragment() + garcia::blue::code_fragment()) * 
               (zhang::red::code_fragment() + khan::red::code_fragment() + garcia::red::code_fragment());
    }

}