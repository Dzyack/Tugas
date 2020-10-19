// Mohammad Dzakiyyul Ashfiya' El Arif
  
// 20051397031
#include<iostream>  
#include<math.h>
using namespace std;  
int main() 
{ 
    float alas,tinggi;
    int pil;
    char ket(30),a;
    cout<<"Masukkan alas segitiga : "; cin>>alas;
    cout<<"Masukkan tinggi segitiga : "; cin>>tinggi;
    cout<<"\n";
    cout<<"Menu segitiga\n";
    cout<<"1. Hitung sisi miring\n2. Hitung keliling segitiga\n3. Hitung luas segitiga\n4. Keluar program\n\n";
    cout<<"Silahkan pilih (1/2/3/4)\n";
    cin>>pil;
    
    switch (pil){
      case 1:
        cout<<"Sisi miring segitiga = ";
        cout<<sqrt(pow(alas,2)+pow(tinggi,2));
      case 2:
        cout<<"\nKeliling segitiga = ";
        cout<<sqrt(pow(alas,2)+pow(tinggi,2))+alas+tinggi;
      case 3:
        cout<<"\nLuas segitiga = ";
        cout<<alas*tinggi;
      case 4:
        cout<<"\n\nTERIMA KASIH"<<endl;
       
    }
    return 0; 
} 
