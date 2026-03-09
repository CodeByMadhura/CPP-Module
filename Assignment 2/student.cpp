#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;
    char grade;

public:

    void setName(string n) {
        name = n;
    }

    void setRollNo(int r) {
        if(r > 0)
            rollNo = r;
    }

    void setMarks(float m) {
        if(m >= 0 && m <= 100)
            marks = m;
    }

    void setGrade(char g) {
        grade = g;
    }

   
    string getName() const {
        return name;
    }

    int getRollNo() const {
        return rollNo;
    }

    float getMarks() const {
        return marks;
    }

    char getGrade() const {
        return grade;
    }

    // -------- ACCEPT DATA --------
    void acceptData() {
        string n;
        int r;
        float m;

        cout << "Enter Name: ";
        getline(cin >> ws, n);
        setName(n);        

        cout << "Enter Roll No: ";
        cin >> r;
        setRollNo(r);      

        cout << "Enter Marks: ";
        cin >> m;
        setMarks(m);      
    }

    // -------- CALCULATE GRADE --------
    void calculateGrade() {
        float m = getMarks();  // using getter

        if(m >= 90)
            setGrade('A');
        else if(m >= 80)
            setGrade('B');
        else if(m >= 70)
            setGrade('C');
        else if(m >= 60)
            setGrade('D');
        else
            setGrade('E');
    }

    // -------- DISPLAY DATA --------
    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << getName() << endl;
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Marks: " << getMarks() << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Accept Data\n";
        cout << "2. Calculate Grade\n";
        cout << "3. Display Data\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s.acceptData();
                break;

            case 2:
                s.calculateGrade();
                cout << "Grade Calculated!\n";
                break;

            case 3:
                s.displayData();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}