#include "light.h"
#include <iostream>

void Light::On(void) const
{
    std::cout << location << " light is on." << std::endl;
}

void Light::Off(void) const
{
    std::cout << location << " light is off." << std::endl;
}
