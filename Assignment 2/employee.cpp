#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    void setEmpID(int id) { empID = id; }
    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    int getEmpID() const { return empID; }
    string getEmpName() const { return empName; }
    double getEmpSalary() const { return empSalary; }

    double calculateGrossSalary() const {
        double bonus = 0;

        if (empSalary <= 5000)
            bonus = empSalary * 0.10;
        else if (empSalary <= 10000)
            bonus = empSalary * 0.15;
        else
            bonus = empSalary * 0.20;

        return empSalary + bonus;
    }

    void displayEmployeeDetails() const {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nEmployee Salary: " << empSalary;
        cout << "\nGross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    Employee employees[100];   // Fixed size array
    int empCount = 0;          // To track number of employees
    int choice;

    do {
        cout << "\n===== Employee Payroll Management System =====";
        cout << "\n1. Add New Employee";
        cout << "\n2. Calculate Gross Salary";
        cout << "\n3. Display Employee Details";
        cout << "\n4. Update Employee Information";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (empCount >= 100) {
                cout << "Employee limit reached!\n";
                continue;
            }

            int id;
            string name;
            double salary;
            bool isUnique = true;

            cout << "Enter Employee ID: ";
            cin >> id;

            // Check uniqueness
            for (int i = 0; i < empCount; i++) {
                if (employees[i].getEmpID() == id) {
                    isUnique = false;
                    break;
                }
            }

            if (!isUnique) {
                cout << "Employee ID already exists!\n";
                continue;
            }

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Employee Salary: ";
            cin >> salary;

            employees[empCount].setEmpID(id);
            employees[empCount].setEmpName(name);
            employees[empCount].setEmpSalary(salary);

            empCount++;
            cout << "Employee added successfully!\n";
        }

        else if (choice == 2) {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < empCount; i++) {
                if (employees[i].getEmpID() == id) {
                    cout << "Gross Salary: "
                         << employees[i].calculateGrossSalary() << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < empCount; i++) {
                if (employees[i].getEmpID() == id) {
                    employees[i].displayEmployeeDetails();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
        }

        else if (choice == 4) {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < empCount; i++) {
                if (employees[i].getEmpID() == id) {
                    string name;
                    double salary;

                    cout << "Enter New Name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "Enter New Salary: ";
                    cin >> salary;

                    employees[i].setEmpName(name);
                    employees[i].setEmpSalary(salary);

                    cout << "Employee updated successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}