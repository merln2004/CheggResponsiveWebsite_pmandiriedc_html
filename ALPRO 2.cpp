#include<iostream>
#include<iomanip>

using namespace std;

void Sequential(int matriks[5][5],int i, int j, int n){
int e=0;for (i=0; i<5;i++){
    for(j=0;j<5;j++){
    if(matriks[i][j]==n){


        cout<<"Data berada pada elemen ke "<<i+1<<","<<j+1<<endl;e++;
    }

    if (e==0){
        cout<<"data tidak ditemukan"<<endl;

    }
}
}


cout<<"jumlah data yang ditemukan: "<<e<<endl;}

int main()
{
    cout<<"============================================"<<endl;
    cout<<"PROGRAM MENCARI ELEMEN TERTENTU PADA MATRIKS"<<endl;
    cout<<"============================================"<<endl;

    int matriks[5][5]={{4,2,5,6,5},{1,3,8,3,6},{8,9,0,7,0},{5,9,3,3,2},{2,1,2,1,3}},i,j,n;

    cout<<"Matriks ordo 5x5: "<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<setw(3)<<matriks[i][j];}
            cout<<endl;
        }
        cout<<"masukan data yang dicari";
        cin>>n;

        Sequential(matriks,i,j,n);
        return 0;
    }

