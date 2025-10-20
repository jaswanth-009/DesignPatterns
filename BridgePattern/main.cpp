#include <iostream>
#include  "include/Circle.h"
#include  "include/Rectangle.h"
#include "include/RasterRenderer.h"
#include "include/VectorRenderer.h"

int main() {

    std::cout << "---Bridge Pattern---\n";

    Shape* s1 =  new Circle(2.5);
    Shape* s2 = new Rectangle(2.5, 2.5);

    Renderer* r1 = new RasterRenderer();
    Renderer* r2 = new VectorRenderer();

    s1->setRenderer(r1);
    s2->setRenderer(r1);

    s1->draw();
    s2->draw();

    s1->setRenderer(r2);
    s2->setRenderer(r2);

    s1->draw();
    s2->draw();

    delete s1, s2, r1, r2;
    return 0;
}