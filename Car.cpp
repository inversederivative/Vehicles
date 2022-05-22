//
// Created by snake on 5/11/2022.
//
#include "Car.h"

/**
 * Car Constructor:
 *
 * The Car class extends from the Vehicle class, but for ease
 *  I have the constructor utilizing the setters.
 *
 * @param make Represents the make of this car.
 * @param model Represents the model of this car.
 */
Car::Car(string make, string model) :Vehicle(make, model)
{
    Car::setMake(make);
    Car::setModel(model);
}


/**
 * Car Destructor:
 *
 */
Car::~Car() {

}


/**
 * The Drive method currently outputs a string,
 *  for the car, the string is "The <Make> <Model> goes fast!!!"
 */
void Car::drive() {


    // TODO: Fix Bug... see main

    cout << "The ";
    Car::getMake();
    cout << " ";
    Car::getModel();
    cout << " goes fast!!!" << endl;
}


