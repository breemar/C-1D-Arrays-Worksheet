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
   int arraysize=7;
   int array[arraysize]={1,2,3,4,5,6,7};
   int avarage;
    int sum =0;
   for(int i=0;i<arraysize;i++){
     sum=sum+array[i];
       
   }
avarage=sum/arraysize;
cout<<avarage;
    return 0;
}
