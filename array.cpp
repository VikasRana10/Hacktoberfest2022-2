// Array Created in HEAP(Because when we create any type of data type it always store in a stack)
//  this program is mix of C/C++(we can use C in C++)
//  Dynamically allcoation of memory using C/C++
#include<iostream>
#include<stdio.h> // C language
#include<stdlib.h> // C language
using namespace std;
int main()
{
   int *p;
   //p=(int *)malloc(5*sizeof(int)); // malloc function is used in C to allocate the memory in HEAP
   p = new int[5]; // in C++ we use new function to allocate the memory in HEAP
   p[0]=10; p[1]=11; p[2]=12; p[3]=13; p[4]=14;

   for (int i = 0; i <5; i++)
   {
       cout<<p[i]<<endl;
   }

   free(p); // Deallocation of memory in HEAP using C language
   delete [] p; // Deallocation of memory in HEAP using C++
}
