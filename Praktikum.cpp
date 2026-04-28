#include <iostream>
#include <string>

using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;


    void tampilkanSpesifikasi() {
        cout << "=== Spesifikasi Barang ===" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "--------------------------" << endl;
    }
};


int main() {
    

    Barang elektronik;
    elektronik.nama = "Laptop Gaming";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "15 April 2026";


    Barang nonElektronik;
    nonElektronik.nama = "Meja Belajar";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Furniture / Non-Elektronik";
    nonElektronik.tanggalProduksi = "01 Maret 2026";
