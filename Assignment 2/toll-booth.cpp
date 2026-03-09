#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // 1. Reset function
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Booth statistics reset successfully!\n";
    }

    // 2. Vehicle Paying Toll function
    void vehiclePayingToll(int vehicleType, double tollAmount) {

        if(vehicleType == 1 || vehicleType == 2 || vehicleType == 3) {
            totalVehicles++;
            totalRevenue += tollAmount;
        }
        else {
            cout << "Invalid vehicle type!\n";
        }
    }

    // 3. Getter for total vehicles
    int getTotalVehicles() {
        return totalVehicles;
    }

    // 4. Getter for total revenue
    double getTotalRevenue() {
        return totalRevenue;
    }
};

int main() {

    TollBooth T;
    int choice, count;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add a standard car and collect toll\n";
        cout << "2. Add a truck and collect toll\n";
        cout << "3. Add a bus and collect toll\n";
        cout << "4. Display total vehicles passed\n";
        cout << "5. Display total revenue collected\n";
        cout << "6. Reset booth statistics\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter number of cars: ";
                cin >> count;
                for(int i = 0; i < count; i++) {
                    T.vehiclePayingToll(1, 180);
                }
                cout << count << " car(s) added successfully!\n";
                break;

            case 2:
                cout << "Enter number of trucks: ";
                cin >> count;
                for(int i = 0; i < count; i++) {
                    T.vehiclePayingToll(2, 300);
                }
                cout << count << " truck(s) added successfully!\n";
                break;

            case 3:
                cout << "Enter number of buses: ";
                cin >> count;
                for(int i = 0; i < count; i++) {
                    T.vehiclePayingToll(3, 350);
                }
                cout << count << " bus(es) added successfully!\n";
                break;

            case 4:
                cout << "Total Vehicles Passed: "
                     << T.getTotalVehicles() << endl;
                break;

            case 5:
                cout << "Total Revenue Collected: ₹"
                     << T.getTotalRevenue() << endl;
                break;

            case 6:
                T.reset();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}