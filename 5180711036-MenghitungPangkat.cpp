#include <iostream>

using namespace std;

int b_pangkat(int b, int p);

int main(){
    int bilangan,pangkat,hasil;
    cout<<"Input Bilangan   : ";cin>>bilangan;
    cout<<"Input Pangkat    : ";cin>>pangkat;
    hasil = b_pangkat(bilangan, pangkat);
    cout<<"Hasil            : "<<hasil;

return 0;
}

int b_pangkat(int b, int p){
    int hasil=1;
    for(int i=1;i<=p;i++){
        hasil=hasil*b;
    }
    return hasil;
}




