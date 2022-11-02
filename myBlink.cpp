/** File name: myBlink.cpp
 * *  This app is capable of performing LED operations on the four beaglebone LED's
 * * 	Commands include on, off, flash, blink, status. This is used in combination with an LED number
 * *	This App takes a maximum of 4 input arguments but a minimum of 3 input arguments
 * *
 * *    Example invocations
 * *        debinan@beaglebone:~ $ ./myBlink blink 2 5 (Blink userLED2, 5 times (on followed by off) for approx. 1 sec)
 * *        debinan@beaglebone:~ $ ./myBlink on 2  (Turn userLED2 on)
 * *	    debinan@beaglebone:~ $ ./myBlink off 2  (Turn userLED2 on)   	
 * *
 * *   Written by Mike Stepanik October 31, 2022.
 * */

#include <iostream>
#include <string>
#include "derek_LED.h"
#include <sstream>
#include <fstream>

using namespace std;


int main(int argc, char* argv[]){
   if(argc<3){
        cout << "Usage is makeLEDs <command>" << endl;
        cout << "   command is one of: on, off, blink, flash or status followed by LED number"<< endl;
        cout << " e.g. makeLEDs flash" << endl;
	return 3;
   }
   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   if (cmd=="blink" && argc!=4){cout<<endl;
	cout << "Incorrect usage of blink command (need a 3nd parameter, # of blink cycles)" << endl;
	cout << " Example: ./makeLED-hw7 blink [LED number] 5 " << endl; cout<<endl;
	return 3;
   }
   int numofBlinks;
   int LEDnumber;
   
   LEDnumber = stoi(argv[2]);
if (argc==4){
numofBlinks = stoi(argv[3]);
}
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   
      if(cmd=="on")leds[LEDnumber].turnOn();
      else if(cmd=="off")leds[LEDnumber].turnOff();
      else if(cmd=="flash")leds[LEDnumber].flash("100"); //default is "50"
      else if(cmd=="status")leds[LEDnumber].outputState();
      else if(cmd=="blink") leds[LEDnumber].blink(numofBlinks);
      else{ cout << "Invalid command!" << endl; }
   
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
  
