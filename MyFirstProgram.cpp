#include <iostream> // pustaka i/o untuk bahasa c++
#include <iomanip>  // pustaka untuk manipulasi input/output

using namespace std; //agar tidak perlu menulis std::

int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    system("CLS"); //membersihkan layar

    cout << "Hello World" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama); // membaca input string termasuk spasi

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    system("CLS");

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;

    cout << fixed << setprecision(2); // setprecision(2) untuk mengatur poisis angka desimal menjadi 2

    cout << "IP : " << ip << endl;

    return 0;
}