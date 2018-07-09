#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
 main ()
{
 int value_1=5,value_2=10;
 int *mypointer;

 mypointer  = &value_1;
 *mypointer = 8;
 mypointer  = &value_2;
 *mypointer = 14;

 cout<<"Value 1 sekarang = "<<value_1<<endl;
 cout<<"Value 2 sekarang = "<<value_2<<endl;


 getche();

}
