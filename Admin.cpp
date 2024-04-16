#include <iostream>
#include <vector>
#include <string>
#include "Owner.cpp"
using namespace std;

class Admin : public Owner{
private:
    string accessID;
    string name;
    string email;
    static vector<Owner> ownersList; // Static vector to simulate global storage
    static vector<string> adminAccessIDs; // Static vector for admin access IDs

public:
    Admin(const string& accessID, const string& name, const string& email)
        : accessID(accessID), name(name), email(email) {}

    static bool authenticate(const string& providedAccessID) {
        return find(adminAccessIDs.begin(), adminAccessIDs.end(), providedAccessID) != adminAccessIDs.end();
    }

    void createOwner(const string& ownerName, const string& userID, const string& profession) {
        ownersList.emplace_back(ownerName, userID, profession);
        cout << "New owner created: " << ownerName << endl;
    }

    void deleteOwner(const string& userID) {
        auto it = find_if(ownersList.begin(), ownersList.end(), [&](const Owner& owner) {
            return owner.getUserID() == userID;
        });
        if (it != ownersList.end()) {
            cout << "Deleting owner: " << it->getName() << endl;
            ownersList.erase(it);
        } else {
            cout << "Owner not found with User ID: " << userID << endl;
        }
    }
};

vector<Owner> Admin::ownersList = {};
vector<string> Admin::adminAccessIDs = {"admin1", "admin2", "admin3"}; // Example access IDs
