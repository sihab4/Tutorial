#include<iostream>          //tanpa argumen dengan return
using namespace std;

int sisipj();
int sisilb();

int main(){
    int keliling, luas, lb, pj;

    pj = sisipj();
    lb = sisilb();

    keliling = (2*pj) + (2*lb);
    luas = pj * lb;

    cout<<"keliling "<< keliling <<endl;
    cout<<"luas "<< luas <<endl; 
}

int sisipj(){

    int panjang;
    cout<<"mauskkan panjangnya : ";
    cin>>panjang;

    return panjang;
}

int sisilb(){

    int lebar;
    cout<<"mauskkan lebarnya : ";
    cin>>lebar;

    return lebar;
}