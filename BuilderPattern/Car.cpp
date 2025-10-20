//
// Created by Jassvanthh Kunjeti on 20/10/25.
//
#include "Car.h"
#include <iostream>

Car::Car(CarBuilder cr) {
    this->color = cr.color;
    this->maxSpeed = cr.maxSpeed;
    this->sunRoof = cr.sunRoof;
    this->name = cr.name;
    this->numSeats = cr.numSeats;
    this->engine = cr.engine;

    std::cout << "Created an instance of Car using CarBuilder\n";
}

Car::CarBuilder::CarBuilder() {
    Reset();
}

void Car::CarBuilder::Reset() {
    this->color = "white";
    this->engine = "v4";
    this->maxSpeed = 150;
    this->sunRoof = false;
}

Car::CarBuilder &Car::CarBuilder::setColor(std::string color) {
    this->color = color;
    return *this;
}

Car::CarBuilder &Car::CarBuilder::setEngine(std::string engine) {
    this->engine = engine;
    return *this;
}

Car::CarBuilder &Car::CarBuilder::setMaxSpeed(int maxSpeed) {
    this->maxSpeed = maxSpeed;
    return *this;
}

Car::CarBuilder &Car::CarBuilder::setSunRoof(bool sunRoof) {
    this->sunRoof = sunRoof;
    return *this;
}

Car::CarBuilder &Car::CarBuilder::setName(std::string name) {
    this->name = name;
    return *this;
}

Car::CarBuilder &Car::CarBuilder::setSeats(int numSeats) {
    this->numSeats = numSeats;
    return *this;
}

Car Car::CarBuilder::build() {
    Car obj(*this);
    Reset();
    return obj;
}



