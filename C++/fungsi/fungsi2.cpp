#include<iostream>              //dengan argumen tanpa return
using namespace std;

void sisi(int pj, int lb);

int main(){
    int p, l;

    cout<<"mauskkan panjangnya : ";
    cin>>p;
    cout<<"mauskkan lebarnya : ";
    cin>>l;

    sisi(p,l);

}

void sisi(int pj, int lb){
    int keliling, luas;

    keliling = (2*pj) + (2*lb);
    luas = pj * lb;
    cout<<"keliling : "<< keliling <<endl;
    cout<<"luas : "<< luas <<endl;
}