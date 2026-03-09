#include<iostream>
using namespace std;

int main(){

    int num = 10;
    int* ptr = &num;
    int &ref = num;

    cout << "Initial value of num is " << num << endl;

    *ptr = 20;
   cout << "After modifying using pointer: " << num << endl;

   ref = 30;
   cout << "After modifying using reference "  << num << endl;




    return 0;
}


// A pointer stores the address of a variable. A reference is an alias (another name) for a variable.
// Pointer can be reassigned to another address. Reference cannot be changed to refer to another variable.
// Pointer can be NULL. Reference cannot be NULL


// A reference must be initialized when it is declared and it becomes permanently bound to that variable.


// A reference must always refer to a valid variable. It is simply another name (alias) for an existing variable. Because it directly refers to a variable, it must be initialized at the time of declaration. If references were allowed to be NULL, they would not refer to any valid object, which contradicts the concept of a reference being an alias of an existing variable.