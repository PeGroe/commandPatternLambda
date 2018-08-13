#pragma once

#include <string>

class Light
{
  public:
    Light(std::string location) : location(location) {}
    void On(void) const;
    void Off(void) const;

  private:
    std::string location;
};
