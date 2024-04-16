#include <iostream>
#include "Vehicle.cpp"
using namespace std;

class Bike : public Vehicle {
private:
    string typeOfBike; // e.g., Sport, Cruiser, Touring
    int engineDisplacement; // in cc

public:
    Bike(const string& manufacturer, const string& color,
         const string& manufactureDate, const string& numberPlate,
         bool ownedStatus, const string& type, const string& typeOfBike, 
         int engineDisplacement)
        : Vehicle(manufacturer, color, manufactureDate, numberPlate, ownedStatus, type),
          typeOfBike(typeOfBike), engineDisplacement(engineDisplacement) {}

    // Implementation of abstract method from Vehicle class
    void printInformationBrief() const override {
        cout << "Brief Bike Info: " << manufacturer << ", " << color << ", " << typeOfBike << endl;
    }

    void setTypeOfBike(string type){
        typeOfBike = type;
    }

    void setEngineDisplacement(int engineDispl){
        engineDisplacement = engineDispl;
    }

    string getTypeOfBike(){
        return typeOfBike;
    }

    int getEngineDisplacement()
    {
        return engineDisplacement;
    }



    // Implementation of abstract method from Vehicle class
    void printInformationDetailed() const override {
        cout << "Detailed Bike Info:\n"
                  << "Manufacturer: " << manufacturer << "\n"
                  << "Color: " << color << "\n"
                  << "Manufacture Date: " << manufactureDate << "\n"
                  << "Number Plate: " << numberPlate << "\n"
                  << "Owned Status: " << (ownedStatus ? "Yes" : "No") << "\n"
                  << "Type of Vehicle: " << type << "\n"
                  << "Type of Bike: " << typeOfBike << "\n"
                  << "Engine Displacement: " << engineDisplacement << " cc" << endl;
    }
};
