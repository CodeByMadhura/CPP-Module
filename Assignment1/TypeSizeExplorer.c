#include<stdio.h>

int main(){


   short int  a;
   int b;
   long int c;
   long long int d;
   unsigned int e;
   float f;
   double g;
   long double h;
   char i;


   
   printf("Ths size of short int is %d \n", sizeof(a));
   printf("Ths size of int is %d \n", sizeof(b));
   printf("Ths size of long int is %d \n", sizeof(c));
   printf("Ths size of long long int is %d \n", sizeof(d));
   printf("Ths size of unsigned int is %d \n", sizeof(e));
   printf("Ths size of float is %d \n", sizeof(f));
   printf("Ths size of double is %d \n", sizeof(g));
   printf("Ths size of long double is %d \n", sizeof(h));
   printf("Ths size of char is %d \n", sizeof(i));





    return 0;
}


// Which two types have the same size on your machine? Does unsigned int have a dierent size than int?

// int, long int, unsigned int, float all have 4 bytes
// long int and double have same size 8 bytes
// Unsigned int have the same size as int