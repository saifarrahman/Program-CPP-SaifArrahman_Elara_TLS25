#include <iostream>
using namespace std;

int detik,lampu;

int main(){

    cout<<"detik ke = ";
    cin>> detik;

    lampu = detik % 103;

    if (lampu - 44 > 0 and lampu - 44 <= 3){
        cout<<"lampu kuning";
    }else if(lampu - 44 > 3 and lampu - 44 < 83){
        cout<<"lampu merah";
    }else{
        cout<<"lampu hijau";
    }

    return 0;
}
