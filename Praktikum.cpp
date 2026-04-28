#include <iostream>
#include <string>

using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Commit 5: Implementasi method untuk menampilkan data
    void tampilkanSpesifikasi() {
        cout << "=== Spesifikasi Barang ===" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "--------------------------" << endl;
    }
};
