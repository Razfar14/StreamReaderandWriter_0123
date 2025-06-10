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
        //tutup file setelah selesai
    }
    
 }
     