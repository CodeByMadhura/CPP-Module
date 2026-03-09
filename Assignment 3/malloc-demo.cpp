#include<iostream>
#include<cstdlib>  
using namespace std;

int main(){

    int *arr = (int*) malloc(5 * sizeof(int));   

    cout << "Enter 5 integers: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Entered integers are: ";

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    free(arr);   

    return 0;
}


// malloc() is a C library function used only for allocating raw memory.
// It simply reserves a block of memory and returns its address. It does not know anything about C++ classes or constructors, so it cannot call them.

// new is preferred in C++ because:
// 1)It automatically calls constructors for objects.
// 2)It provides type safety (no type casting needed).

// Return Type: new returns a pointer of the correct data type, while malloc() returns a void* pointer which requires type casting.

// Initialization: new can initialize objects and calls constructors, whereas malloc() only allocates raw memory and does not initialize objects.

// Complex C++ objects require constructors to initialize their members properly. Since malloc() does not call constructors, it cannot correctly initialize complex types such as classes or objects.