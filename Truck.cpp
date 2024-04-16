#include <iostream>
#include "Vehicle.cpp"
using namespace std;

class Truck : public Vehicle {
private:
    double cargoCapacity; // Cargo capacity in tons
    int numberOfAxles;

public:
    Truck(const string& manufacturer, const string& color,
          const string& manufactureDate, const string& numberPlate,
          bool ownedStatus, const string& type, double cargoCapacity, 
          int numberOfAxles)
        : Vehicle(manufacturer, color, manufactureDate, numberPlate, ownedStatus, type),
          cargoCapacity(cargoCapacity), numberOfAxles(numberOfAxles) {}

    // Implementation of abstract method from Vehicle class
    void printInformationBrief() const override {
        cout << "Brief Truck Info: " << manufacturer << ", " << color << ", " << type << endl;
    }

    void setCargoCapacity(double capacity){
        cargoCapacity = capacity;
    }

    void setNumberOfAxles(int axles){
        numberOfAxles = axles;
    }

    double getCargoCapacity(){
        return cargoCapacity;
    }

    int getNumberOfAxles(){
        return numberOfAxles;
    }

    // Implementation of abstract method from Vehicle class
    void printInformationDetailed() const override {
        cout << "Detailed Truck Info:\n"
                  << "Manufacturer: " << manufacturer << "\n"
                  << "Color: " << color << "\n"
                  << "Manufacture Date: " << manufactureDate << "\n"
                  << "Number Plate: " << numberPlate << "\n"
                  << "Owned Status: " << (ownedStatus ? "Yes" : "No");
    }
};