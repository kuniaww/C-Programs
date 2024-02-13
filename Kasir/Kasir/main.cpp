#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int pilihan;
    int harga = 0;
    int jumlah;
    int total;
    string nomor_handphone;
    string nama_konter;

    // Menampilkan menu
    cout << "Pilihan Pulsa:" << endl;
    cout << "1. Pulsa 10.000" << endl;
    cout << "2. Pulsa 20.000" << endl;
    cout << "3. Pulsa 50.000" << endl;
    cout << "4. Pulsa 100.000" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    // Menentukan harga berdasarkan pilihan
    switch (pilihan) {
        case 1:
            harga = 10000;
            break;
        case 2:
            harga = 20000;
            break;
        case 3:
            harga = 50000;
            break;
        case 4:
            harga = 100000;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    // Memasukkan jumlah pulsa yang dibeli
    cout << "Masukkan jumlah pulsa yang dibeli: ";
    cin >> jumlah;

    // Memasukkan nomor handphone
    cout << "Masukkan nomor handphone: ";
    cin >> nomor_handphone;

    // Memasukkan nama konter
    cout << "Masukkan nama konter: ";
    cin.ignore();
    getline(cin, nama_konter);

    // Menghitung total harga
    total = harga * jumlah;

    // Menampilkan struk pembelian ke konsol
    cout << "======================================" << endl;
    cout << "Struk Pembelian Pulsa" << endl;
    cout << "Nama Konter: " << nama_konter << endl;
    cout << "Nomor Handphone: " << nomor_handphone << endl;
    cout << "Pilihan Pulsa: ";
    switch (pilihan) {
        case 1:
            cout << "Pulsa 10.000" << endl;
            break;
        case 2:
            cout << "Pulsa 20.000" << endl;
            break;
        case 3:
            cout << "Pulsa 50.000" << endl;
            break;
        case 4:
            cout << "Pulsa 100.000" << endl;
            break;
    }
    cout << "Jumlah Pulsa: " << jumlah << endl;
    cout << "Total Harga: Rp " << total << endl;
    cout << "======================================" << endl;

    // Menyimpan struk pembelian ke dalam file
    string file_path = "Insert Your Path like a C:\Users\Kuniaww\Downloads\projectku\C++\C-Programs\Kasir";
    ofstream outputFile(file_path);
    if (outputFile.is_open()) {
        outputFile << "Struk Pembelian Pulsa" << endl;
        outputFile << "Nama Konter: " << nama_konter << endl;
        outputFile << "Nomor Handphone: " << nomor_handphone << endl;
        outputFile << "Pilihan Pulsa: ";
        switch (pilihan) {
            case 1:
                outputFile << "Pulsa 10.000" << endl;
                break;
            case 2:
                outputFile << "Pulsa 20.000" << endl;
                break;
            case 3:
                outputFile << "Pulsa 50.000" << endl;
                break;
            case 4:
                outputFile << "Pulsa 100.000" << endl;
                break;
        }
        outputFile << "Jumlah Pulsa: " << jumlah << endl;
        outputFile << "Total Harga: Rp " << total << endl;
        outputFile.close();
        cout << "Struk pembelian telah disimpan dalam file 'struk_pembelian.txt' di lokasi: " << file_path << endl;
    } else {
        cout << "Gagal menyimpan file." << endl;
    }

    return 0;
}
