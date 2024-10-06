#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string daduopsi2(int jumlahp1, int jumlahp2) {
    string player1, player2;
    int hasilp1 = 0, hasilp2 = 0;
    int i = 0;
    
    cout << "Masukan Nama Player 1: ";
    cin >> player1;
    cout << endl;
    
    cout << "Masukan Nama Player 2: ";
    cin >> player2;
    cin.ignore();
    cout << endl << endl;


    while (true) {
        if (i % 2 == 0) {
            cout << "Giliran " << player1 << endl;
            cin.ignore();
            int dadu1 = rand() % 6 + 1; // dadu pertama
            int dadu2 = rand() % 6 + 1; // dadu kedua
            jumlahp1 = dadu1 + dadu2; // jumlah dadu
            cout << "Hasil: " << dadu1 << " + " << dadu2 << " = " << jumlahp1 << endl;
            hasilp1 += jumlahp1;
            cout << "Total Skor " << player1 << ": " << hasilp1 << endl << endl;

            if (hasilp1 > 50) {
                cout << player1 << " Menang!" << endl;
                break;
            }
        } else {
            cout << "Giliran " << player2 << endl;
            cin.ignore();
            int dadu1 = rand() % 6 + 1; // dadu pertama
            int dadu2 = rand() % 6 + 1; // dadu kedua
            jumlahp2 = dadu1 + dadu2; // jumlah dadu
            cout << "Hasil: " << dadu1 << " + " << dadu2 << " = " << jumlahp2 << endl;
            hasilp2 += jumlahp2;
            cout << "Total Skor " << player2 << ": " << hasilp2 << endl << endl;

            if (hasilp2 > 50) {
                cout << player2 << " Menang!" << endl;
                break;
            }
        }
        i++;
    }
    return "Selamat anda Memenangkan Permainan!!";
}
