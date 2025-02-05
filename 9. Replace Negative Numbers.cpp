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
int arraysize=6;
float array[arraysize]={1,2,-4,-8,5,6};
for(int i=0;i<arraysize;i++)
{
    if(array[i]<0){
        array[i]=0;}
}
for(int i=0;i<arraysize;i++){
    cout<<array[i];
}
    return 0;
}
