#include<iostream>
#include<math.h>

using namespace std;
int main()
{
  int a,b,c;
  int jumlah;
  cout<<"Masukkan nilai awal : ";cin>>a;
  cout<<"Masukkan beda : ";cin>>b;
  cout<<"Masukkan nilai akhir : ";cin>>c;
  cout<<"\n";
  for(a=a;a<=c;a+=b){
    cout<<a<<" ";
    jumlah=jumlah+a;
  }
    
    
  
   cout<<"\n\n";
   cout<<"Jumlah deret bilangan = ";
   cout<<jumlah<<endl;
  
  
}
