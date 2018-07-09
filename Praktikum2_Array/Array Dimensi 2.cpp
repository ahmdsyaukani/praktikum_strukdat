#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int matriks [5][2]={{1,9},{2,8},{3,7},{4,6},{5,5}};
	int i,j;
	cout<<"----===Tampil Matrik 5x2===----"<<endl;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			cout<<matriks[i][j]<<" ";
		}
		cout<<endl;
	}
}


