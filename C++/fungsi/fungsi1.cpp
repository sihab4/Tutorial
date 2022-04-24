#include<iostream>          //tanpa argumen - tanpa kembalian
using namespace std;

void keliling();
void luas();

int main(){
    keliling();
    luas();

}

void keliling(){
    int panjang = 4;
    int lebar = 5;
    int keliling;

    keliling = (2*panjang) + (2*lebar);
    cout<<"keliling : "<<keliling<<endl;
    
}

void luas(){
    int panjang = 4;
    int lebar = 5;
    int luas;

    luas = panjang * lebar;
    cout<<"luas  : "<<luas << endl;
}