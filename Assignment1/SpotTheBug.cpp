// #include <stdio.h>
// void doubleIt(int n) {
//  n = n * 2;
//  printf("Inside doubleIt: %d\n", n);
// }


// int main() {
//  int num = 7;
//  doubleIt(num);
//  printf("In main after call: %d\n", num);
//  return 0;
// }

// Initial Output
// Inside doubleIt: 14
// In main after call: 7


#include <stdio.h>
void doubleIt(int *n) {
 *n = (*n) * 2;
 printf("Inside doubleIt: %d\n", *n);
}


int main() {
 int num = 7;
 doubleIt(&num);
 printf("In main after call: %d\n", num);
 return 0;
}

// Final Output
// Inside doubleIt: 14
// In main after call: 14