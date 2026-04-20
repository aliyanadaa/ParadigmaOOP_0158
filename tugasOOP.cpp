#include <iostream>
using namespace std;

class Barang{
    public :
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

        void printData(){
            cout << "Nama : " << nama << endl;
            cout << "Jumlah : " << jumlah << endl;
            cout << "Kategori : " << kategori << endl;
            cout << "Tanggal Produksi : " << tanggalProduksi << endl;
            cout << endl;
        }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Kulkas";
    elektronik.jumlah = 45;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2026-12-11";


}
