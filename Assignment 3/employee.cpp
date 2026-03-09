#include<iostream>
using namespace std;

class Employee{
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor with initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {}

    // Function to display details
    void display(){
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Employee e1(101, "Rahul", 50000);

    e1.display();

    return 0;
}


// 1. Why must const members be initialized in initializer list?
// Because const variables must be initialized at the time of object creation and cannot be modified later.

// 2. What happens if you try to assign the value of a const member inside the constructor body?
// It will cause a compile-time error because a const variable cannot be assigned after initialization.

// 3. Why is initializer list faster than assignment?
// Initializer list initializes members directly, while assignment first creates the variable and then assigns a value, causing extra operations.