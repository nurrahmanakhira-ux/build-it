#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

// ===== Variabel Global =====
vector<string> namaBarang;
vector<double> hargaBarang;
string username, password;

// ===== Fungsi Login =====
bool login() {
    cout << "=== LOGIN ===\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "admin" && password == "admin") {
        cout << "Login berhasil!\n\n";
        return true;
    } else {
        cout << "Login gagal! Username atau password salah.\n\n";
        return false;
    }
}

// ===== Fungsi Tambah Barang =====
void tambahBarang() {
    string nama;
    double harga;
    cout << "Masukkan nama dan harga barang (ketik -1 pada harga untuk selesai):\n";
    while (true) {
        cout << "Nama barang: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // membersihkan buffer
        getline(cin, nama);

        cout << "Harga barang: ";
        cin >> harga;
        if (harga == -1) break;

        namaBarang.push_back(nama);
        hargaBarang.push_back(harga);
        cout << "Barang berhasil ditambahkan!\n\n";
    }
}

// ===== Fungsi Tampilkan Semua Barang =====
void tampilkanSemua() {
    if (hargaBarang.empty()) {
        cout << "Belum ada data barang.\n\n";
        return;
    }

    cout << "=== Daftar Barang ===\n";
    for (int i = 0; i < hargaBarang.size(); i++) {
        cout << i + 1 << ". " << namaBarang[i] << " - Rp" << hargaBarang[i] << endl;
    }
    cout << endl;
}

// ===== Fungsi Harga Tertinggi =====
void hargaTertinggi() {
    if (hargaBarang.empty()) {
        cout << "Belum ada data barang.\n\n";
        return;
    }
    double max = hargaBarang[0];
    int index = 0;
    for (int i = 1; i < hargaBarang.size(); i++) {
        if (hargaBarang[i] > max) {
            max = hargaBarang[i];
            index = i;
        }
    }
    cout << "Harga tertinggi: " << namaBarang[index] << " - Rp" << max << endl << endl;
}

// ===== Fungsi Harga Terendah =====
void hargaTerendah() {
    if (hargaBarang.empty()) {
        cout << "Belum ada data barang.\n\n";
        return;
    }
    double min = hargaBarang[0];
    int index = 0;
    for (int i = 1; i < hargaBarang.size(); i++) {
        if (hargaBarang[i] < min) {
            min = hargaBarang[i];
            index = i;
        }
    }
    cout << "Harga terendah: " << namaBarang[index] << " - Rp" << min << endl << endl;
}

// ===== Fungsi Rata-rata =====
void rataRata() {
    if (hargaBarang.empty()) {
        cout << "Belum ada data barang.\n\n";
        return;
    }
    double total = 0;
    for (double h : hargaBarang) total += h;
    cout << "Rata-rata harga barang: Rp" << total / hargaBarang.size() << endl << endl;
}

// ===== Fungsi Ubah Harga =====
void ubahHarga() {
    if (hargaBarang.empty()) {
        cout << "Belum ada data barang.\n\n";
        return;
    }
    tampilkanSemua();
    int index;
    double hargaBaru;
    cout << "Masukkan nomor barang yang ingin diubah: ";
    cin >> index;
    if (index < 1 || index > hargaBarang.size()) {
        cout << "Nomor tidak valid!\n\n";
        return;
    }
    cout << "Masukkan harga baru untuk " << namaBarang[index - 1] << ": ";
    cin >> hargaBaru;
    hargaBarang[index - 1] = hargaBaru;
    cout << "Harga berhasil diubah!\n\n";
}

// ===== Fungsi Menu =====
void menu() {
    int pilihan;
    do {
        cout << "=== MENU ===\n";
        cout << "1. Tambah barang\n";
        cout << "2. Tampilkan semua barang\n";
        cout << "3. Tampilkan harga tertinggi\n";
        cout << "4. Tampilkan harga terendah\n";
        cout << "5. Tampilkan rata-rata harga\n";
        cout << "6. Ubah harga barang\n";
        cout << "7. Selesai\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1: tambahBarang(); break;
            case 2: tampilkanSemua(); break;
            case 3: hargaTertinggi(); break;
            case 4: hargaTerendah(); break;
            case 5: rataRata(); break;
            case 6: ubahHarga(); break;
            case 7: cout << "Program selesai. Terima kasih!\n"; break;
            default: cout << "Pilihan tidak valid!\n\n"; break;
        }
    } while (pilihan != 7);
}

// ===== Fungsi Utama =====
int main() {
    while (!login()) {
        cout << "Silakan coba lagi.\n\n";
    }
    menu();
    return 0;
}
