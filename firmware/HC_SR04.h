#ifndef _HC_SR04
#define _HC_SR04
 
#include "application.h"
 
class HC_SR04
{
public: 
  HC_SR04(int trigPin, int echoPin);
  HC_SR04(int trigPin, int echoPin, double minCM, double maxCM); 
  HC_SR04(int trigPin, int echoPin, double minCM, double maxCM, long timeout);
  double getDistanceCM();  
  double getDistanceInch();
  
private:
  int _echoPin;
  int _trigPin;
  double _minCM;
  double _maxCM;
  long _timeout;
  
  void sendTriggerPulse(int pin);
  void waitForEcho(int pin, int value, long timeout);
};
 
#endif  
