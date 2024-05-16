#include <iostream>

using namespace std;

int faktorial(int N);

int main(void)

{
int n,r ;
int hasil;

cout<<"============================================"<<endl;
cout<<"Program Menghitung Permutasi dan Kombinasi"<<endl;
cout<<"============================================"<<endl;


cout<<"Masukkan nilai n : ";
scanf("%d",&n); //Fungsi untuk meminta/menerima nilai yang akan dikonversikan menjadi nilai integer
cout<<"Masukkan nilai r : ";//Menampilkan output pada layar
scanf("%d",&r); //Fungsi untuk meminta/menerima nilai yang akan dikonversikan menjadi nilai integer

if (n>r) { //jika nilai n lebih besari dari r
  hasil = faktorial(n)/faktorial(n-r);//Proses perhitungan permutasi akan dijalankan
  cout<<endl;
  printf("\t%dP%d = %ld",n,r,hasil);//Hasil output

    hasil = faktorial(n)/(faktorial(r) * faktorial(n-r));//Proses perhitungan kombinasi akan dijalankan
    cout<<endl;
    printf("\t%dC%d = %ld",n,r,hasil); //Hasil output
}

else  //Jika tidak
{
cout<<endl<<"Nilai n tidak boleh lebih kecil dari r"<<endl; //Pesan ini akan ditampikan di layar
}
}

int faktorial(int N) //Defenisi fungsi faktorial
{
int f;
if (N<=1)
{
return(1);
}
else
{
f = N * faktorial(N-1); //Fungsi rekursif (memanggil dirinya sendiri)
return(f);
}
}
