#include<iostream>
using namespace std;

// Pass By Value
void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Pass By Address
void swapByAddress(int *a, int *b){
    int temp = *a;   // ✅ Correct
    *a = *b;
    *b = temp;
}

// Pass By Reference
void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int x = 10, y = 20;

    cout << "Before swapByValue: " << x << " " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: " << x << " " << y << endl;

    cout << "\nBefore swapByAddress: " << x << " " << y << endl;
    swapByAddress(&x, &y);
    cout << "After swapByAddress: " << x << " " << y << endl;

    cout << "\nBefore swapByReference: " << x << " " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: " << x << " " << y << endl;

    return 0;
}


// A reference variable in C++ acts as an alias (another name) for an existing variable.

// Example:

// int x = 10;
// int &ref = x;

// Here, ref is another name for x. Any change made to ref directly affects x.

// Reference variables act as aliases for existing variables, meaning they refer to the same memory location. In swapByReference(), parameters a and b refer directly to the original variables, so swapping them changes the actual values in main().