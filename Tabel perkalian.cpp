#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  cout<<"TABEL PERKALIAN\n";
  cout<<"<===================================================>";
  for(int i=1;i<=10;i++){
    cout<<"\n|";
   
    cout<<i;
    
    for(int j=1;j<=10;j++){

      cout<<setw(5)<<j*i<<setw(5);
    }
    cout<<endl;
  }
  
} }
   cout<<endl;
     
    }