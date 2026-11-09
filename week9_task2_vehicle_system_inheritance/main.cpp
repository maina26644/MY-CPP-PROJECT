#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter vehicle brand: ";
        cin>> brand;
        cout << "Enter year of manufacture: ";
        cin >> yearOfManufacture;
       // cin.ignore();
    }

    void displayVehicle() const {
        cout << "Brand: " << brand << '\n'
             << "Year of manufacture: " << yearOfManufacture << '\n';
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();
        cout << "Enter number of doors: ";
        cin >> numberOfDoors;
        cout << "Enter engine capacity (litres): ";
        cin >> engineCapacity;
    }

    void displayCar() const {
        cout << "\n--- CAR DETAILS ---\n";
        displayVehicle();
        cout << "Number of doors: " << numberOfDoors << '\n'
             << "Engine capacity: " << engineCapacity << " litres\n";
    }
};

int main() {
    Car car;
    car.inputCar();
    car.displayCar();
    return 0;
}
