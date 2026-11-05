#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama;
int nilai;
    cout<<"Masukkan Namamu: ";
    cin>>nama;
    cout<<"Masukkan Nilaimu: ";
    cin>>nilai;
    if (nilai>90){
    cout<<"Nilaimu: A";
    }
    else if (nilai>80){
    cout<<"Nilaimu: B";
    }
    else if (nilai>70){
        cout<<"Nilaimu: C";
    }
    else {
        cout<<"Nilaimu: D";
    }
    return 0;
}
