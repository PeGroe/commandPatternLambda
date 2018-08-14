#pragma once

#include <functional>
#include <vector>

class RemoteControlLambda
{
public:
  RemoteControlLambda();

  void SetCommand(int slot, std::function<void()> onCommand, std::function<void()> offCommand);
  void OnButtonWasPushed(int slot) const;
  void OffButtonWasPushed(int slot) const;

private:
  std::vector<std::function<void()>> onCommands;
  std::vector<std::function<void()>> offCommands;
};
