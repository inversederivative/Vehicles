//
// Created by snake on 5/11/2022.
//
#include "Vehicle.h"
#ifndef VEHICLES_TRUCK_H
#define VEHICLES_TRUCK_H


class Truck:public Vehicle
{
public:
    Truck(string make, string model);

    void drive();

};


#endif //VEHICLES_TRUCK_H
