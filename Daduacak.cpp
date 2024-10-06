#include <iostream>
#include "fungsi1.h"
using namespace std;

int main(){

    char input , confirm;
    int jumlahp1, jumlahp2  , hasilp1, hasilp2;
    string p1, p2;

    cout << "==================================================" << endl;
    cout << "\t" "\t" "     Dadu Acak " << endl;
    cout << "==================================================" << endl;

    cout << "\n" "1. 1 Dice" << endl;
    cout << "2. 2 Dice" << endl;
    cout << "3. Stop Playing" << endl << endl;
    cout << "Pilih salah satu" << endl;
    cin >> input;
    cout << endl;

    switch (input){
        case '1':
        cout << dadu(0,0) << endl;
        case '2':

        case '3':
        break;
    }

    return 0;
}