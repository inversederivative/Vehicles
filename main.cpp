#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
    Car* audi;
    audi = new Car("Audi", "A6");

    Truck* f150;
    f150 = new Truck("Ford", "F-150");

    Vehicle* van;
    van = new Vehicle("Ford", "Econoline");

    //cout << car->getMake() << endl;
    //cout << truck->getModel() << endl;

    audi->drive();
    f150->drive();

    van->drive();

    return(0);
}


