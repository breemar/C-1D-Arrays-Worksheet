/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int arraysize=5;
  int array1[arraysize]={1,2,3,4,5};
  int array2[arraysize]={};
   for(int i=0;i<arraysize;i++){
       array2[i]=array1[i];
       
   }
   
   cout<<"This is array 1:";
 for(int i=0;i<arraysize;i++){
     cout<<array1[i]<<" ";
    
 }
 cout<<endl;
 cout<<"This is array 2:";
  for(int i=0;i<arraysize;i++){
     cout<<array2[i]<<" ";
}
    return 0;
}