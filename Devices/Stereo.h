#pragma once

#include <string>

class Stereo
{
  public:
    Stereo(std::string location) : location(location) {}

    void On(void) const;
    void Off(void) const;
    void SetDvd(void) const;
    void UnSetDvd(void) const;

  private:
    std::string location;
};
