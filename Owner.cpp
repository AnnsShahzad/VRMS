#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Vehicle; // Forward declaration to use Vehicle as a pointer

class Owner {
private:
    string name;
    string userID;
    string profession;
    vector<Vehicle*> vehicles; // A list of pointers to vehicles owned by this owner

public:
    Owner(const string& name, const string& userID, const string& profession)
        : name(name), userID(userID), profession(profession) {}

    // Getter for Owner's name
    string getName() const {
        return name;
    }

    // Function to add a vehicle to this owner
    void buyVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
        // Additional logic for changing ownership might be implemented here
    }

    // Function to remove a vehicle from this owner
    void sellVehicle(Vehicle* vehicle) {
        auto it = find(vehicles.begin(), vehicles.end(), vehicle);
        if (it != vehicles.end()) {
            vehicles.erase(it);
            // Additional logic for changing ownership might be implemented here
        }
    }

    // Function to print all vehicles owned by this owner
    void printVehicles() const {
        cout << "Vehicles owned by: " << name << ":" << endl;
        for (auto* vehicle : vehicles) {
            vehicle->printInformationBrief(); // Assuming Vehicle has a method to print brief info
        }
    }
};
