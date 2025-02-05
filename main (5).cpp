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
    int arraysize=8;
    int array[arraysize]={1,2,4,4,5,4,7,8};
    int appear=4;
  int  occurrences=0;
  for(int i=0;i<arraysize;i++){
      if(array[i]==appear){
          occurrences=occurrences+1;
      }
      
  }
  cout<<"the number 4 appears  "<<occurrences;
  

    return 0;
}