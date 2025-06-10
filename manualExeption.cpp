#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selamat Belajar di Prodi TI UMY\n";
        throw 0,5; //melemparkan sebuah integer maka
        cout << "Pernyataan ini tidak akan dieksekusi\n";
    }
    catch(int a){
        //blok ini akan dieksekusi
        cout << "Pengeculian akan dieksekusi\n";
    }
    catch(...){
        //*jika selesai interger maka blok ini akan dieksekusi*/
        cout << "Defaault Pengecualian lainnya akan dieksekusi\n";
    }
    return 0;
}