Mencari Bilangan Terbesar dari 4 Angka yang Diinputkan

1.) int a,b,c,d;
 ======================================================================================
 tipe data a,b,c,d adalah integer


2.) cout<< "Mencari Bilangan Terbesar dari 4 Angka yang Diinputkan"<< endl;
 ======================================================================================
        cout<<                                                    : sebagai output
        "Mencari Bilangan Terbesar dari 4 Angka yang Diinputkan"  : print dari cout<<
        endl                                                      : ganti baris/enter


3.)   cout<< "Input Bilangan A : ";
      cin>>a;
      cout<< "Input Bilangan B : ";
      cin>>b;
      cout<< "Input Bilangan C : ";
      cin>>c;
      cout<< "Input Bilangan D : ";
      cin>>d;
 =======================================================================================
     cin>>a                          : sebagai input a
     cin>>b                          : sebagai input b
     cin>>c                          : sebagai input c
     cin>>d                          : sebagai input d
     cout<< "Input Bilangan A : "    : outputnya "Input Bilangan A : "
     cout<< "Input Bilangan B : "    : outputnya "Input Bilangan B : "
     cout<< "Input Bilangan C : "    : outputnya "Input Bilangan C : "
     cout<< "Input Bilangan D : "    : outputnya "Input Bilangan D : "


4.) cout<< "Hasilnya Adalah : ";
            if(a>b) {                           //- Jika a lebih besar dari b :
                if(a>c) {                       //- Jika a lebih besar dari c :
                    if(a>d) {
                        cout<< "A Terbesar";    //- Jika a lebih besar dari d, maka A Terbesar
                    }else
                        cout<< "D Terbesar";    //- Jika tidak, maka D Terbesar

                }else if(a<c){                  //- Tetapi jika a lebih kecil dari c :
                    if(c>d) {
                        cout<< "C Terbesar";    //- Jika c lebih besar dari d, maka C Terbesar
                    }else
                        cout<< "D Terbesar";    //- Jika tidak, maka D Terbesar

                }else
                    cout<< "#NULL";             //- Selain pernyataan di atas, maka hasilnya #NULL

            }else if(a<b) {                     //- Tetapi jika a lebih kecil dari b :
                if(b>c) {                       //- Jika b lebih besar dari c :
                    if(b>d) {
                        cout<< "B Terbesar";    //- Jika b lebih besar dari d, maka B Terbesar
                    }else
                        cout<< "D Terbesar";    //- Jika tidak, maka D Terbesar

                }else if(b<c) {                 //- Tetapi jika b lebih kecil dari c :
                    if(c>d) {
                        cout<< "C Terbesar";    //- Jika c lebih besar dari d, maka C Terbesar
                    }else
                        cout<< "D Terbesar";    //- Jika tidak, maka D Terbesar

                }else
                    cout<< "#NULL";             //- Selain pernyataaan di atas, maka hasilnya #NULL

            }else
                cout<< "#NULL";                //- Selain pernyataan di atas, maka hasilnya #NULL



 ============================================================================
  Hasilnya adalah :

      - Jika a lebih besar dari b :

          - Jika a lebih besar dari c :
              - Jika a lebih besar dari d, maka A Terbesar
              - Jika tidak, maka D Terbesar

          - Tetapi jika a lebih kecil dari c :
              - Jika c lebih besar dari d, maka C Terbesar
              - Jika tidak, maka D Terbesar

          - Selain pernyataan di atas, maka hasilnya #NULL

      -  Tetapi jika a lebih kecil dari b :

          - Jika b lebih besar dari c :
              - Jika b lebih besar dari d, maka B Terbesar
              - Jika tidak, maka D Terbesar

          - Tetapi jika b lebih kecil dari c :
              - Jika c lebih besar dari d, maka C Terbesar
              - Jika tidak, maka D Terbesar

          - Selain pernyataaan di atas, maka hasilnya #NULL

      - Selain pernyataan di atas, maka hasilnya #NULL


Screenshot :

![Alt text](https://raw.githubusercontent.com/arkyana/Praktikum2/master/Praktikum2/Soal2/2.png)


