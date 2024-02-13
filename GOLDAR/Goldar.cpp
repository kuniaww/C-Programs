#include <iostream>
#include <string>
using namespace std;

int main() {
    char golongan_darah;
    string ciri_ciri;

    // Menampilkan pesan dan meminta input dari pengguna
    cout << "Masukkan golongan darah Anda (A, B, AB, atau O): ";
    cin >> golongan_darah;
    cout << "Masukkan ciri-ciri golongan darah Anda: ";
    cin.ignore();
    getline(cin, ciri_ciri);

    // Menentukan golongan darah
    switch (golongan_darah) {
        case 'A':
            cout << "Anda memiliki golongan darah A" << endl;
            break;
        case 'B':
            cout << "Anda memiliki golongan darah B" << endl;
            break;
        case 'AB':
            cout << "Anda memiliki golongan darah AB" << endl;
            break;
        case 'O':
            cout << "Anda memiliki golongan darah O" << endl;
            break;
        default:
            cout << "Golongan darah yang dimasukkan tidak valid" << endl;
    }

    // Menampilkan ciri-ciri golongan darah
    cout << "Ciri-ciri golongan darah Anda: " << ciri_ciri << endl;

    return 0;
}
