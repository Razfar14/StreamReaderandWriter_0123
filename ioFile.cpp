#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    // membuka file dalam mode menulis
    ofstream outfile;
    //menunjukan ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << "Menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while(true){
        cout << "- ";
        //menamdapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan 'q'
        if(baris == "q")break;
        //menulis dan memasukkan nilai dar 'baris ke dalam file
        outfile << baris << endl;
    }
    //selasai dalam menulis sekarang tutup file
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    //menunjukan ke sebuah nama file
    infile.open("contohfile.txt");
    cout << "\n >= Membuka dan membaca file \n";
    //jika file ada maka
    if (infile.is_open()) {
        //memlakukan perulangan setiap baris
        while(getline(infile, baris)) {
            //dan tampilkan ke sini
            cout << baris << endl;
        }
        //tutup file setelah selesai
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout <<"Unable to open file";
    return 0;
 }
     