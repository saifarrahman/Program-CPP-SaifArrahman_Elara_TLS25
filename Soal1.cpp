#include <iostream>
using namespace std;

int sisa, bagi, bilangan,n;
int x=0;
int a = 0;

char y;

int balikkan(int bilangan){
    x = 0;
    bagi = 1;
    sisa = 0;
    if (bilangan > 0){
        while (bagi > 0){
            bagi = bilangan / 10;
            sisa = bilangan % 10;
            x = x*10 + sisa;
            bilangan = bagi;
        }
    }else if(bilangan == 0){
        x = 0;
    }else{
        bilangan = bilangan * -1;
        while (bagi > 0){
            bagi = bilangan /10;
            sisa = bilangan % 10;
            x = x*10 + sisa;
            bilangan = bagi;
        }
        x = x * -1;
    }
    return x;
}

int main(){
    cout<<"\nmasukkan banyak arraynya = ";
    cin>>n;
    cout<<endl;

    int arr[n];
    int isi,i;
    for (i=0 ; i<n ; i++){
        cout<<"masukkan data array ke "<< i + 1 <<endl;
        cin>>isi;
        arr[i] = isi;
    }

    for (i = 0 ; i < n ; i++){
        cout<<arr[i];
        if (i != n-1){
            cout<<",";
        }
    }

    cout<<"\nmembalikkan data pada array"<<endl;
    for (i = 0 ; i<n ; i++){
        if (i%2 == 0){
            balikkan(arr[i]);
            arr[i] = x;
        }
        cout<<arr[i];
        if (i != n-1){
            cout<<",";
        }
        
    }

    for (i = 0 ; i < n ; i++){
        a = a + arr[i];
    }
    cout<<endl<<"jumlah semua data pada array adalah = "<< a ;

    return 0;
}
