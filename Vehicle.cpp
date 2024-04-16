#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    string color;
    string manufactureDate;
    string numberPlate;
    bool ownedStatus;
    string type;

    vector<Owner> owners;
    vector<Registration> registrations;
    vector<Market> marketInfo;

public:
    Vehicle(const string& manufacturer, const string& color, 
            const string& manufactureDate, const string& numberPlate, 
            bool ownedStatus, const string& type)
        : manufacturer(manufacturer), color(color), manufactureDate(manufactureDate),
          numberPlate(numberPlate), ownedStatus(ownedStatus), type(type) {}

    virtual void printInformationBrief() const = 0;
    virtual void printInformationDetailed() const = 0;  

    string  getManufacturer()  
    { 
        return manufacturer; 
    }
    string  getColor() 
    { 
        return color; 
    }
    string  getManufactureDate() 
    { 
        return manufactureDate; 
    }
    string  getNumberPlate() 
    { 
        return numberPlate; 
    }
    bool  isOwned() 
    { 
        return ownedStatus; 
    }
    string  getType() 
    { 
        return type; 
    }
    void setManufacturer(const string& m) 
    {
        manufacturer = m;
    }
    void setColor(const string& c) 
    {
        color = c;
    }
    void setManufactureDate(string d)
    {
        manufactureDate = d;
    }
    void setNumberPlate(const string plate)
    {
        numberPlate = plate;
    }
    void setOwnedStatus(bool status) 
    {
        ownedStatus = status;
    }
    void setType(string t) 
    {
        type = t;
    }

    void printRegistrations() const {
        for (const auto& registration : registrations) {
            registration.printRegistrationDetails();
        }
    }

    void printOwners() const {
        for (const auto& owner : owners) {
            owner.printOwnerDetails();
        }
    }
};