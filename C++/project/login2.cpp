#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
void menu();


int main(){
    int pil;

    cout<<"WELCOME !!!"<<endl;
    cout<<endl;

    
    cout<<"1.Login"<<endl;
    cout<<"2.Sign Up"<<endl;
    cout<<"3.Forgot?"<<endl;

    cout<<"Pilih : ";
    cin>>pil;

    switch(pil){
        case 1:
        login();
        break;

        case 2:
        registr();
        break;

        case 3:
        cout<<"Terimakasih sudah menggunakan aplikasi kami, kami akan kembali dengan fitur ini"<<endl;
        break;

        case 4:
        default:
        cout<<"pilihan salah"<<endl;

    }
    

}

void login(){
    int count;
    string user,pass,u,p;
    system("cls");
    cout<<"Login"<<endl;
    cout<<endl;
    cout<<"Username : ";
    cin>>user;
    cout<<"Password : ";
    cin>>pass;
    
    ifstream input("database.txt");
    while(input>>u>>p){
            if(u==user && p==pass){
                    count=1;
                    system("cls");
            }
    }

    input.close();
    if(count==1){
            cout<<"Login Berhasil. Selamat datang !"<<endl;
            cin.get();
            main();
    }else{
            cout<<"Login Gagal, Cek Username dan Password kamu"<<endl;
    }
}

void registr(){
        string reguser, regpass, ru, rp;
        system("cls");
        cout<<"============REGISTER============"<<endl;
        cout<<"Username : ";
        cin>>reguser;
        cout<<"Password : ";
        cin>>regpass;

        ofstream reg("database.txt", ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"Registrasi Berhasil"<<endl;
        main();
}