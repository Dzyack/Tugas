#include<iostream>
#include<math.h>

using namespace std;
int main()
{
  int a=1,b,n,p;
  int jumlah;
  
  cout<<"SELAMAT DATANG DI PROGRAM DERET GEOMETRI"<<endl;
  cout<<"<=======================================>"<<endl;
  cout<<"Masukkan indeks pangkat : ";cin>>p;
  cout<<"Masukkan banyak deret : ";cin>>b;
  cout<<"\n";
  for(a=1;a<=b;a++){
    cout<<pow(a,p)<<" ";
    jumlah=jumlah+pow(a,p);
    
  }
   cout<<"\n\n";
   cout<<"Jumlah "<<b<<" deret bilangan = ";
   cout<<jumlah<<endl;
   cout<<"\nTERIMA KASIH";
  
  
}
