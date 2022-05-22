//
// Created by snake on 5/11/2022.
//
#include "Vehicle.h"
#ifndef VEHICLES_CAR_H
#define VEHICLES_CAR_H


class Car:public Vehicle
{
public:
    Car(string make, string model);
    ~Car();
    void drive();

};


#endif //VEHICLES_CAR_H
