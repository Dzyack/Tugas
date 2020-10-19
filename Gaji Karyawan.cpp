// Mohammad Dzakiyyul Ashfiya' El Arif
  
// 20051397031

#include <iostream>
using namespace std;

int main()
{
    string nama;
    int gaji,jam;
    char gol;
    cout<<"Masukkan Nama Karyawan : ";
    cin>>nama;
    cout<<"Pilih Golongan [A/B/C/D] :";
    cin>>gol;
    cout<<"Masukkan jumlah jam kerja :";
    cin>>jam;

    if (gol == 'A') {
        gaji = 5000;
    }
    else if (gol == 'B') {
        gaji = 7000;
    }
    else if (gol == 'C') {
        gaji = 8000;
    }
    else if (gol == 'D') {
        gaji = 10000;
    }

    gaji = gaji * 48;

    if (jam > 48) {
        int temp = jam - 48;
        gaji = gaji + (4000 * temp);
    }

    cout <<nama<<"\nGaji anda sebesar : "<< gaji;
    cout<<"\n\n";
    cout<<"TERIMA KASIH"<<endl;

}



