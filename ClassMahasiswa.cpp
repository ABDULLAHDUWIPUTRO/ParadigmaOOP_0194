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