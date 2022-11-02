/** File name: derek_LED.h
*   Class for performing simple beaglebone LED operations.
*   Written by Mike Stepanik, Oct 31, 2022.
*/
#ifndef DEREK_LED_H
#define DEREK_LED_H
#include <string>
using namespace std;


class LED{
   private:
      string path;
      int number;
      virtual void writeLED(string filename, string value);
      virtual void removeTrigger();
   public:
      LED(int number);
      virtual void turnOn();
      virtual void turnOff();
      virtual void flash(string delayms);
      virtual void blink(int num);
      virtual void outputState();
      virtual ~LED();
};

#endif
