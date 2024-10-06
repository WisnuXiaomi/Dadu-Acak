#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string dadu(int jumlahp1,int jumlahp2){
    string player1, player2;
    int hasilp1 = 0, hasilp2 = 0;
    int i = 0;
    cout << "Masukan Nama Player 1 : " << endl;
    cin >> player1;
    cout << endl;
    cout << "Masukan Nama Player 2 :" << endl;
    cin >> player2;
    cin.ignore();
    cout << endl << endl;

            while(true){
                if(i % 2 == 0){
                cout << "Giliran " << player1;
                cin.ignore();
                srand(time(0));
                jumlahp1 = rand() % 6 + 1 ;
                cout << jumlahp1 << endl;
                hasilp1+= jumlahp1;
                cout << endl;
                
                if(hasilp1>20){
                    cout << player1 <<" Menang" << endl;
                    break;
                }
            }else if(i % 2 == 1){
                cout << "Giliran " << player2;
                cin.ignore();
                srand(time(0));
                jumlahp2 = rand() % 6 + 1 ;
                cout << jumlahp2 << endl;
                hasilp2+= jumlahp2;
                cout << endl;
                
                
            }
            if(hasilp1>20){
                    cout << player1 <<" Menang" << endl;
                    break;
                }else if(hasilp2>20){
                    cout << player2<<" Menang" << endl;
                    break;
                }
            i++;
        }
    return "Selamat anda Memenangkan Permainan!! "  ;
}
