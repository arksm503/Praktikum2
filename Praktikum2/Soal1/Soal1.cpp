#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
        cout<< "Mencari Bilangan Terbesar dari 3 Angka yang Diinputkan"<< endl;
        cout<< "Input Bilangan A : ";
        cin>>a;
        cout<< "Input Bilangan B : ";
        cin>>b;
        cout<< "Input Bilangan C : ";
        cin>>c;

        cout<< "Hasilnya Adalah : ";
            if(a>b) {
                if(a>c) {
                    cout<< "A Terbesar";
                }else if(a<c){
                    cout<< "C Terbesar";
                }else
                    cout<< "#NULL";

            }else if(a<b) {
                if(b>c) {
                    cout<< "B Terbesar";
                }else if(b<c) {
                    cout<< "C Terbesar";
                }else
                    cout<< "#NULL";
            }else
                    cout<< "#NULL";

return 0;
}
