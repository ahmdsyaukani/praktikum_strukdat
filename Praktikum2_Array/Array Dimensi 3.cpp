#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int angka[2][5][2]={{{10,2},{8,20},{2,79},{4,67},{8,21}},{{10,27},{27,48},{83,28},{2,73},{4,98}}};
	for(int i = 0; i<=1; i++){
		cout<<"Nomor "<<i+1<<"\n";
		for(int j = 0; j<=4; j++){
   			for(int k = 0; k<=1; k++){
    			cout<<angka[i][j][k]<<"\t";
   			}
   			cout<<endl;
  		}
  		cout<<endl;
 	}
}


