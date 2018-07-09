#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	system("cls");
	int n, i, arr[50], search, first, last, middle;
	cout<<"masukan jumlah elemen : ";
	cin>>n;
	cout<<"Enter "<<n<<" nomor : ";
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"cari angka :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last){
		if(arr[middle] < search){
			first = middle + 1;
		}
		else if(arr[middle] == search){
			cout<<search<<" berada di baris "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last){
		cout<<"tidak ditemukan! "<<search<<" didalam list.";
	}
	getch();
}



