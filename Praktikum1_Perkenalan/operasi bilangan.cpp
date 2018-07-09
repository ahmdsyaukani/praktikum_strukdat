#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float bil1,bil2, Htambah, Hkurang, Hkali, Hbagi;
	bil1 = 12;
	bil2 = 4;
	Htambah = bil1+bil2;
	Hkurang = bil1-bil2;
	Hkali = bil1*bil2;
	Hbagi = bil1/bil2;
	cout<<"Operasi Bilangan"<<endl;
	cout<<bil1<<"+"<<bil2<<"="<<Htambah<<endl;
	cout<<bil1<<"-"<<bil2<<"="<<Hkurang<<endl;
	cout<<bil1<<"*"<<bil2<<"="<<Hkali<<endl;
	cout<<bil1<<"/"<<bil2<<"="<<Hbagi<<endl;
}
