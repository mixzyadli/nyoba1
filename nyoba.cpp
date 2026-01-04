#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    string nama[MAX], jabatan[MAX];
    int id[MAX];
    double gaji[MAX];

    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n===== MENU MANAJEMEN DATA KARYAWAN =====\n";
        cout << "1. Tambah Data Karyawan\n";
        cout << "2. Tampilkan Data Karyawan (Filter ID)\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            if (jumlah < MAX) {
                cout << "\n--- Input Data Karyawan ---\n";
                cout << "ID Karyawan   : ";
                cin >> id[jumlah];
                cin.ignore();

                cout << "Nama Karyawan : ";
                getline(cin, nama[jumlah]);

                cout << "Jabatan       : ";
                getline(cin, jabatan[jumlah]);

                cout << "Gaji          : ";
                cin >> gaji[jumlah];

                jumlah++;
                cout << "Data berhasil ditambahkan!\n";
            } else {
                cout << "Data karyawan sudah penuh!\n";
            }
            break;

        case 2: {
            if (jumlah == 0) {
                cout << "\nBelum ada data karyawan.\n";
            } else {
                int cariID;
                bool ditemukan = false;

                cout << "\nMasukkan ID Karyawan yang ingin ditampilkan: ";
                cin >> cariID;

                for (int i = 0; i < jumlah; i++) {
                    if (id[i] == cariID) {
                        cout << "\n===== DATA KARYAWAN =====\n";
                        cout << "ID      : " << id[i] << endl;
                        cout << "Nama    : " << nama[i] << endl;
                        cout << "Jabatan : " << jabatan[i] << endl;
                        cout << "Gaji    : Rp " << gaji[i] << endl;
                        ditemukan = true;
                        break;
                    }
                }

                if (!ditemukan) {
                    cout << "\nData karyawan dengan ID tersebut tidak ditemukan.\n";
                }
            }
            break;
        }

        case 3:
            cout << "\nTerima kasih telah menggunakan program.\n";
            break;

        default:
            cout << "\nPilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}