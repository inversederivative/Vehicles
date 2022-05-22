/**
 *
 *
 *
 */
#ifndef VEHICLES_VEHICLE_H
#define VEHICLES_VEHICLE_H
#include <iostream>
#include <list>
using namespace std;


/**
 *
 *
 */
class Vehicle {

private:

    //
    string Make;
    string Model;
    int numOfCylinders;
    list<string> vehicleNames;

protected:

    //
    string locationOfManufacture;


public:


    //Constructor
    Vehicle(string make, string model);


    string getMake();
    string getModel();
    void setMake(string s);
    void setModel(string s);
    void outputMakeAndModel();
    void makeCar();
    void drive();


};



#endif //VEHICLES_VEHICLE_H
