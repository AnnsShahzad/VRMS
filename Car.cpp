#include <iostream>
#include "Vehicle.cpp"
using namespace std;

class Car : public Vehicle {
private:
    int numberOfDoors;
    string typeOfFuel;

public:
    Car(const string& manufacturer, const string& color,
        const string& manufactureDate, const string& numberPlate,
        bool ownedStatus, const string& type, int numberOfDoors, 
        const string& typeOfFuel)
        : Vehicle(manufacturer, color, manufactureDate, numberPlate, ownedStatus, type),
          numberOfDoors(numberOfDoors), typeOfFuel(typeOfFuel) {}

    // Implementation of abstract method from Vehicle class
    void printInformationBrief() const override {
        cout << "Brief Car Info: " <<"Manufacturer: "<< manufacturer << ", " << "Color: " << color << ", " << "Type: " << type << endl;
    }

    void setNumberOfDoors (int doors){
        numberOfDoors = doors;
    }

    void setTypeOfFuel(string fuel){
        typeOfFuel = fuel;
    }

    int getNumberOfDoors(){
        return numberOfDoors;
    }

    string getTypeOfFuel(){
        return typeOfFuel;
    }

    // Implementation of abstract method from Vehicle class
    void printInformationDetailed() const override {
        cout << "Detailed Car Info:\n"
                  << "Manufacturer: " << manufacturer << "\n"
                  << "Color: " << color << "\n"
                  << "Manufacture Date: " << manufactureDate << "\n"
                  << "Number Plate: " << numberPlate << "\n"
                  << "Owned Status: " << (ownedStatus ? "Yes" : "No") << "\n"
                  << "Type: " << type << "\n"
                  << "Number of Doors: " << numberOfDoors << "\n"
                  << "Type of Fuel: " << typeOfFuel << endl;
    }
};
