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
   int array[arraysize]={};
   int find;
   for(int i=0;i<arraysize;i++)
   {
       cout<<"Enter 5 number: ";
       cin>>array[i];
   }
   cout<<endl<<"Enter the number you would wish to find : ";
cin>>find;
for(int i=0;i<arraysize;i++){
 
    if (array[i]==find){
        cout<<"The number is found in the array"<<endl;
    }
        
    
}

    return 0;
}