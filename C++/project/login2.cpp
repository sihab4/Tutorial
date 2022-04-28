#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
void forgot();


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
        forgot();
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
                    
            }
    }

    input.close();
    if(count==1){
            
            cout<<"Login Berhasil. Selamat datang !"<<endl;
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

void forgot()
{
        int ch;
        system("cls");
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;
                        
                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}