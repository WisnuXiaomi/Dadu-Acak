include <iostream>
using namespace std;

void menu() {
  cout << "\n=====Menu=====\n";
  cout << "1. Lempar 1 Dadu\n";
  cout << "2. Lempar 2 Dadu\n";
  cout << "3. Keluar\n";
  cout << "Pilih : ";
}

void inputPemain(char nama1[], char nama2[]) {
  cout << "Masukkan Nama Pemain 1 : \n";
  gets(nama1);
  cout << "Masukkan Nama Pemain 2 : \n";
  gets(nama2);
}

void pilihan(int pilihanPemain){
  if(pilihanPemain == 1) {
    cout << "Lempar 1 Dadu\n";
  }else if(pilihanPemain == 2) {
    cout << "Lempar 2 Dadu\n";
  }else if(pilihanPemain == 3) {
    cout << "Terima kasih telah bermain!\n";
  }else{
    cout << "Pilihan tidak valid!\n";
  }
}

int main() {
  char nama1[50], nama2[50];
  int pilihanPemain;

  inputPemain(nama1, nama2);

  do{
    menu();
    cin >> pilihanPemain;
    pilihan(pilihanPemain, nama1, nama2);
  }while(pilihanPemain !=3);

  return 0;
}
