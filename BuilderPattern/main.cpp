#include <iostream>
#include "Car.h"

int main() {
    Car::CarBuilder obj;

    obj.setSunRoof(false);
    obj.setColor("black");
    obj.setColor("red");
    obj.setEngine("v8");
    obj.setMaxSpeed(300);
    obj.setName("Creta");

    Car c = obj.build();

    return 0;
}