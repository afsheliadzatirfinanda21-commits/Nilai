// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout<<"Masukkan Nilai ";
    cin>>nilai;
    if(nilai>90)
    {
        cout<<"Nilai kamu A";
    }
    else if(nilai>80)
    {
        cout<<"Nilai kamu B";
    }
    else if(nilai>70)
    {
        cout<<"Nilai kamu C";
    }
    else 
    {
        cout<<"Nilai kamu D";
    }
    return 0;
}
