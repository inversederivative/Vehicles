//
// Created by snake on 5/11/2022.
//

#include "Truck.h"

/**
 * Truck Constructor:
 *
 * The Truck class extends from the Vehicle class, but for ease
 *  I have the constructor utilizing the setters.
 *
 * @param make Represents the make of this truck.
 * @param model Represents the model of this truck.
 */
Truck::Truck(string make, string model) : Vehicle(make, model)
{
    Truck::setMake(make);
    Truck::setModel(model);
}

/**
 * The Drive method currently outputs a string,
 *  for the truck, the string is "The <Make> <Model> goes so freaking slow!!!"
 */
void Truck::drive() {

    // TODO: Fix Bug... see main

    cout << "The ";
    Truck::getMake();
    cout << " " <<
    Truck::getModel();
    cout << " goes so freaking slow!!!" << endl;
}


