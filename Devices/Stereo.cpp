#include "stereo.h"
#include <iostream>

void Stereo::On(void) const
{
    std::cout << location << " stereo is on." << std::endl;
}

void Stereo::Off(void) const
{
    std::cout << location << " stereo is off." << std::endl;
}

void Stereo::SetDvd(void) const
{
    std::cout << location << " stereo DVD is set." << std::endl;
}

void Stereo::UnSetDvd(void) const
{
    std::cout << location << " stereo DVD is unset." << std::endl;
}
