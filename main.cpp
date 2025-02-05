/*********https://www.onlinegdb.com/#editor_1*********************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

***************************************************{****************************/
#include <iostream>
using namespace std;
int main()
{
    
 
  int arraysize=5;
  int reverse=0;
  int array[arraysize]={0};
  int sum=0;
  int highestnum=array[0];

   //for loop that change the value in the array.
   
  for(int i=0;i<arraysize;i++){
         cout<<"Enter 5 numbers:";
         cin>>array[i];
         
        
  }
  //array printed normal
  
  for(int i=0;i<arraysize;i++){
      cout<<array[i]<<" ";
  }
  
  //array printed in reverse
  cout<<endl<<"This the array in reverse."<<endl;
  
    for(int i=arraysize-1;i>=reverse;i--){
         cout<<array[i]<<" ";
  }
        
  // the sum for the array
  for(int i=0;i<arraysize;i++){
      sum=sum+array[i];
  }
  cout<<endl<<"The sum of he array is "<<sum<<endl;
  
  // the highest number in the array
   for(int i=0;i<=arraysize;i++){
       if (array[i]<array[i+1])
       {
           highestnum=array[i];
       }
   }
   
   cout<<"the highest number in the array is "<<highestnum;
    
    

    return 0;
}