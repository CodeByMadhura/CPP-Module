#include<iostream>
using namespace std;


class Student{
    private:
    int rollNo;
    string name;
    float marks;

public:
    Student(){
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
    }

    // Student(int n, string s, float m){
    //     rollNo = n;
    //     name = s;
    //     marks = m;
    // }

    Student(int rollNo, string name, float marks){
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display(){
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }


};

int main(){

    Student s1;                       // Default constructor
    Student s2(1, "Rahul", 85);       // Parameterized constructor
    Student s3(2, "Priya", 90);       // Constructor using this->

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "Student 2 Details:" << endl;
    s2.display();

    cout << "Student 3 Details:" << endl;
    s3.display();

    return 0;
}


// The compiler automatically generates a default constructor when no constructor is defined in the class.

// The compiler does not generate a default constructor if any constructor is already defined by the programmer.

// Yes, constructors can be overloaded by defining multiple constructors with different parameter lists.