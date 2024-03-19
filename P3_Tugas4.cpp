#include <iostream>
using namespace std;

int telur, mie, air;
int hTelur = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukkan Nama= ";
    cin >> nama;
    cout << "Masukkan Jumlah Telor= ";
    cin >> telur;
    cout << "Masukkan Jumlah Mie= ";
    cin >> mie;
    cout << "Masukkan Jumlah Air= ";
    cin >> air;
}

int hitung()
{
    return (telur*hTelur) + (mie*hMie) + (air*hAir);
}

void display()
{
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telur = " << telur << endl;
    cout << "Jumlah Mie = " << mie << endl;
    cout << "Jumlah Air = " << air << endl;
    cout << "Total Harga = " << hitung() << endl;
}

int main()
{
    char pil;
    do
    {
        input();
        display();
        cout << "Apakah anda ingin Mengulangi (y/n)? ";
        cin >> pil;
    } while (pil == 'y' || pil == 'Y');
    
}