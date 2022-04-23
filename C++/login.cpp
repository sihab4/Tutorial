#include<iostream>
using namespace std;

int main(){
    string username;
    int password;
    cout<<"login"<<endl;

    cout<<"Username : ";
    cin>>username;

    cout<<"Password : ";
    cin>>password;

    if(username == "sihab"){
        if(password == 123123){
            cout<<"Berhasil login"<<endl;
        }else{
            cout<<"Username atau password anda salah"<<endl;
        }
    }else{
        cout<<"Username atau password anda salah"<<endl;
    }

    system("pause");
    return 0;

}