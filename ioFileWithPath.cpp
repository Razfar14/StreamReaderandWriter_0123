#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;
    cout << "Masukkan nama file : ";
    cin >> NamaFile;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjukan ke sebuah nama file
    outfile.open(NamaFile +".txt", ios::out);
    cout << "Menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while(true){
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan 'q'
        if(baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selasai dalam menulis sekarnag tutup file
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
   //menunjukkan ke sebuah file
   infile.open(NamaFile, ios::in);
    cout << "\n >= Membuka dan membaca file \n";
    //jika file ada maka
    if (infile.is_open()) {
        //melakukan perulangan setiap baris
        while(getline(infile, baris)) {
            //dan tampilkan ke sini
            cout << baris << endl;
        }
        //tutup file setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout <<"Unable to open file";
    return 0;
}