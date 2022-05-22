#include "Vehicle.h"


/**
 * Vehicle Constructor:
 *
 * The Default Vehicle Constructor takes two Strings as input
 *  and sets them to the member variables.
 * @param make Represents the make of the vehicle.
 * @param model Represents the model of the vehicle.
 */
Vehicle::Vehicle(string make, string model) {
    Vehicle::setMake(make);
    Vehicle::setModel(model);
}

/**
 * The Output Make and Model method takes no parameters, and returns nothing.
 * It simply displays the make and model of a particular vehicle.
 */
void Vehicle::outputMakeAndModel() {
    cout << Vehicle::getMake() << " " << Vehicle::getModel();
}


/**
 * TODO: Implement functionality...
 *
 */
void Vehicle::makeCar() {
    numOfCylinders = 6;
    vehicleNames.push_back(Model);
}


/**
 * The Drive method currently outputs a string,
 * the default is "Vroom!"
 */
void Vehicle::drive() {
    cout << "Vroom!" << endl;
}


/**
 * The getMake method takes no parameters,
 *  and returns a string, the make of the vehicle.
 *
 * @return Returns the make of the vehicle, a string.
 */
string Vehicle::getMake() {
    return Vehicle::Make;
}

/**
 * The getModel method takes no parameters,
 *  and returns a string, the model of the vehicle.
 *
 * @return Returns the model of the vehicle, a string.
 */
string Vehicle::getModel() {
    return Vehicle::Model;
}

/**
 * The setMake method takes a string as input, and
 *  sets the member variable to that string.
 *
 * @param s A string which represents the make of this vehicle.
 */
void Vehicle::setMake(string s) {
    Vehicle::Make = s;
}

/**
 * The setModel method takes a string as input, and
 *  sets the member variable to that string.
 *
 * @param s A string which represents the model of this vehicle.
 */
void Vehicle::setModel(string s) {
    Vehicle::Model = s;
}





