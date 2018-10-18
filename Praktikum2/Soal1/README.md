Mencari Bilangan Terbesar dari 3 Angka yang Diinputkan

1.) int a,b,c;
 ======================================================================================
 tipe data a,b,c adalah integer


2.) cout<< "Mencari Bilangan Terbesar dari 3 Angka yang Diinputkan"<< endl;
 ======================================================================================
        cout<<                                                    : sebagai output
        "Mencari Bilangan Terbesar dari 3 Angka yang Diinputkan"  : print dari cout<<
        endl                                                      : ganti baris/enter


3.)  cout<< "Input Bilangan A : ";
     cin>>a;
     cout<< "Input Bilangan B : ";
     cin>>b;
     cout<< "Input Bilangan C : ";
     cin>>c;
 =======================================================================================
     cin>>a                          : sebagai input a
     cin>>b                          : sebagai input b
     cin>>c                          : sebagai input c
     cout<< "Input Bilangan A : "    : outputnya "Input Bilangan A : "
     cout<< "Input Bilangan B : "    : outputnya "Input Bilangan B : "
     cout<< "Input Bilangan C : "    : outputnya "Input Bilangan C : "


4.) cout<< "Hasilnya Adalah : ";
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

 ============================================================================
  Hasilnya adalah :
     - Jika A lebih besar dari B, A lebih besar dari C, maka A Terbesar
     - JIka A lebih besar dari B, tetapi jika A lebih kecil dari C, maka C Terbesar
     - Jika A lebih besar dari B, tetapi tidak lebih kecil maupun besar, maka #NULL

     - Tetapi jika A lebih kecil dari B, jika B lebih besar  dari C, maka B Terbesar
     - Tetapi jika A lebih kecil dari B, B lebih kecil dari C, maka C Terbesar
     - Tetapi jika A lebih kecil dari B, tetapi tidak lebih kecil maupun besar, maka #NULL

     - Selain itu #NULL

Screenshot :

![Alt text](https://raw.githubusercontent.com/arkyana/Praktikum2/master/Praktikum2/Soal1/1.png)