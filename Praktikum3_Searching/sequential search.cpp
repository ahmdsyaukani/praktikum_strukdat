#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
    int data[10] = {7,9,2,10,15,4,5,6,13,11};
    int caridata, i, flag = 0;

    cout<<"PENCARIAN DENGAN SEQUENTIAL SEARCH"<<endl;
    cout<<"----------------------------------"<<endl;
	cout<<"Data   : ";
    	for(int n=0; n<10; n++)
        	cout<<setw(4)<<data[n];
      	cout<<endl;
		cout<<"\nMasukkan data yang ingin Anda cari : ";
      	cin>>caridata;
    	for(i = 0; i<10; i++){
            if(data[i]==caridata){
                  flag = 1;
                  break;
            	}
      		}
      	if(flag==1)
        	cout<<"Data ditemukan pada indek ke-"<<i<<endl;
      	else
        	cout<<"Data tidak ditemukan"<<endl;
     
      	getch();
      	return 0;
}



