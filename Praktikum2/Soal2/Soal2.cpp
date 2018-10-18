#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
        cout<< "Mencari Bilangan Terbesar dari 4 Angka yang Diinputkan"<< endl;
        cout<< "Input Bilangan A : ";
        cin>>a;
        cout<< "Input Bilangan B : ";
        cin>>b;
        cout<< "Input Bilangan C : ";
        cin>>c;
        cout<< "Input Bilangan D : ";
        cin>>d;

        cout<< "Hasilnya Adalah : ";
            if(a>b) {
                if(a>c) {
                    if(a>d) {
                        cout<< "A Terbesar";
                    }else
                        cout<< "D Terbesar";

                }else if(a<c){
                    if(c>d) {
                        cout<< "C Terbesar";
                    }else
                        cout<< "D Terbesar";

                }else
                    cout<< "#NULL";

            }else if(a<b) {
                if(b>c) {
                    if(b>d) {
                        cout<< "B Terbesar";
                    }else
                        cout<< "D Terbesar";

                }else if(b<c) {
                    if(c>d) {
                        cout<< "C Terbesar";
                    }else
                        cout<< "D Terbesar";

                }else
                    cout<< "#NULL";

            }else
                cout<< "#NULL";



return 0;
}
