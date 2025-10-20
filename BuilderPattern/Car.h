//
// Created by Jassvanthh Kunjeti on 20/10/25.
//

#ifndef BUILDERPATTERN_CAR_H
#define BUILDERPATTERN_CAR_H
#include <string>

class Car {
public:
    class CarBuilder {
        public:
            std::string name;
            int numSeats;
            std::string color;
            std::string engine;
            int maxSpeed;
            bool sunRoof;

            void Reset();
            CarBuilder();
            CarBuilder& setName(std::string name);
            CarBuilder& setSeats(int numSeats);
            CarBuilder& setColor(std::string color);
            CarBuilder& setEngine(std::string engine);
            CarBuilder& setMaxSpeed(int maxSpeed);
            CarBuilder& setSunRoof(bool sunRoof);
            Car build();
    };
private:
    std::string name;
    int numSeats;
    std::string color;
    std::string engine;
    int maxSpeed;
    bool sunRoof;

    Car(CarBuilder cr);
};
#endif //BUILDERPATTERN_CAR_H