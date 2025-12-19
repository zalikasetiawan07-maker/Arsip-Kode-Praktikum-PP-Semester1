#include <iostream>
using namespace std;

int main(){
    
    cout<<"======== Ini Decrement======="<< endl;
    for(int i = 10; i >= 1; i--){
        cout << i << "selamat" << endl;
    }
    
    cout<<"======= Ini Increment========"<< endl;
    for(int i = 1; i < 10; i++){
        cout << "halooo" << endl;
    }
    
    cout <<"======= While ========"<< endl;
    int i = 5;
    while(i <= 10){
        cout << 2 << "" << endl;
        i++;
    }
    
    cout <<"====== Do-While======"<< endl;
    int kalimat = 1;
    
    do{
        cout << "Saya Cinta ayam geprek" << endl;
        kalimat++;
        
    } while(kalimat <= 5);
    
    cout << "====== Nested-Loop(untuk tabel)======"<< endl;
    int baris = 4;
    int kolom = 5;
    
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << "*" << "haihai";
        }
        cout << endl;
    }
    
    cout << "========coba break====="<< endl;
    for(int i = 1; i <= 10; i++) {
        if(i==5){
            break; //hentikan loop jika i sama dengan 5
        }
        cout<< i << "";
    }
    
    cout << "\nloopingselesai" << endl;
    
    //output
    //1234
    //looping selesai
    
    cout << "========coba continue====="<< endl;
    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0){
            continue; //lewati iterasi jika i genap
        }
        cout<< i << "";
    }
    
    cout << "\nloopingselesai";
    return 0;
    }