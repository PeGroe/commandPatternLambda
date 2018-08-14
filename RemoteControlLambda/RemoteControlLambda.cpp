#include "RemoteControlLambda.h"
#include <iostream>

RemoteControlLambda::RemoteControlLambda()
{
    for (int i = 0; i < 7; i++)
    {
        onCommands.push_back( []() { return; } );
        offCommands.push_back( []() { return; } );
    }
}

void RemoteControlLambda::SetCommand(int slot, std::function<void()> onCommand, std::function<void()> offCommand)
{
    onCommands.at(slot) = onCommand;
    offCommands.at(slot) = offCommand;
}

void RemoteControlLambda::OnButtonWasPushed(int slot) const
{
    onCommands.at(slot)();
}

void RemoteControlLambda::OffButtonWasPushed(int slot) const
{
    offCommands.at(slot)();
}
