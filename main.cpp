#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
    Car* car;
    car = new Car("Audi", "A6");

    Truck* truck;
    truck = new Truck("Ford", "F-150");


    //cout << car->getMake() << endl;
    //cout << truck->getModel() << endl;

    car->drive();
    truck->drive();

    return(0);
}


