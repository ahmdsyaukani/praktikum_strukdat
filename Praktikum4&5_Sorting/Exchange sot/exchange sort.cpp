#include <iostream>
#include <conio.h>
using namespace std;
int data[10],data2[10];
int n;
void tukar(int a,int b){
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void Input(){
	cout<<"Masukkan jumlah data = ";cin>>n;
	cout<<"--------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Masukkan data ke-"<<(i+1)<<" = ";cin>>data[i];
		data2[i] = data[i];
	}
	cout<<endl;
}

void Tampil(){
	for(int i=0;i<n;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
}

void exchange_sort(){
	for (int i=0; i<n-1; i++){
		for(int j = (i+1); j<n; j++){
			if (data [i] > data[j]) tukar(i,j);
		}
		Tampil();
	}
	cout<<endl;
}

int main(){
	cout<<"*-------------------------------------*"<<endl;
	cout<<"*           Exchange Sort             *"<<endl;
	cout<<"*-------------------------------------*"<<endl;
	Input();
	cout<<"Proses Exchange Sort,,,,,,,"<<endl;
	cout<<"-------------------------------------"<<endl;
	Tampil();
	exchange_sort();
	getch();
}
