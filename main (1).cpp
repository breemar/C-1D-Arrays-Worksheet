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
    int arraysize=10;
    int array[arraysize]={1,2,3,4,5,6,7,8,9,10};
    int amounteven=0;
    for (int i=0;i<arraysize;i++){
        if (array[i]%2==0){
            amounteven=amounteven+1;
        }
    }
    std::cout << "the amount of even number in the array is "
    <<amounteven << std::endl;
  
   
   
    return 0;
}