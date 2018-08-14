#include "RemoteControlLambda.h"

#include "../Devices/light.h"
#include "../Devices/stereo.h"

int main(void)
{
  // Devices (Receiver)
  Light  light("Living Room");
  Stereo stereo("Living Room");

  // Remote Control (Invoker)
  RemoteControlLambda remoteControl;

  remoteControl.SetCommand(0, [light]() { light.On(); }, [light]() { light.Off(); });
  remoteControl.SetCommand(1, [stereo]() { stereo.On(); }, [stereo]() { stereo.Off(); });

  // Test
  remoteControl.OnButtonWasPushed(0);
  remoteControl.OffButtonWasPushed(0);
  remoteControl.OnButtonWasPushed(1);
  remoteControl.OffButtonWasPushed(1);

  return 0;
}
