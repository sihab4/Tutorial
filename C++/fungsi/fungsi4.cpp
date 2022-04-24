#include<iostream>          //dengan argumen dnegan return
using namespace std;

int keliling(int pj, int lb);
int luas(int pj, int lb);

int main(){

    int lb, pj, k, l;
    cout<<"masukkan panjang : ";
    cin>>pj;
    cout<<"masukkan lebar : ";
    cin>>lb;

    k = keliling(pj, lb);
    l = luas(pj, lb);

    cout<<"keliling : "<< k <<endl;
    cout<<"luas : "<< l <<endl;
}

int keliling(int pj, int lb){
    int keliling;
    keliling = (2*pj) + (2*lb);
    return keliling;
}

int luas(int pj, int lb){
    int luas;
    luas = pj * lb;

    return luas;

}