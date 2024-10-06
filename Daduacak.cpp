#include <iostream>
#include "fungsi1.h"
#include "daduacak2.h"

using namespace std;

   
void TampilanMenu(){

    cout << "\n===============Menu===============\n";
    cout <<"\t"  "1. Lempar 1 Dadu\n";
    cout <<"\t"  "2. Lempar 2 Dadu\n";
    cout <<"\t"  "3. Keluar\n\n";
    cout <<"\t" "Pilih : ";
    }
    

int main(){

    char input;
    int jumlahp1, jumlahp2  , hasilp1, hasilp2;


    do{
    TampilanMenu();
    cin >> input ;
    cout << endl;
        
    switch (input){
        case '1':
        cout << daduopsi1(0,0) << endl;
        break;
        case '2':
        cout << daduopsi2(0,0) << endl;
        break;
        case '3':
        cout << "Terimakasih" << endl;
        break;
        }
        cin.ignore();
    }while (input != '3');

    return 0;
}
