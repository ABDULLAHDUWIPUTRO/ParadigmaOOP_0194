#include <iostream>
using namespace std;

class Mahasiswa
{
    public: //akses modifier
        int NIM;
        string nama;
        float nilai;

    void printData()
    {
        cout << "NIM: " << NIM << endl;
        cout << "NAMA: " << nama << endl;
        cout << "NILAI: " << nilai << endl; 
    }
};

int main()
{
    Mahasiswa mhs; // deklarasi objek mhs dari class mahasiswa

    mhs.NIM = 2024;
    mhs.nama = "sule";
    mhs.nilai = 75.5;

    mhs.printData();
};