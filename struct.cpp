#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;

};

int main()
{
    //deklarasi variabel struct
    Orang mhs;
    //mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "alamat : " << mhs.alamat << endl;
    cout << "umur : " << mhs.umur << endl;

}