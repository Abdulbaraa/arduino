#include <Servo.h>
Servo myservo;

int ldrPin = A0;
int servoPin = 8;
int ldrlight = 450;

void setup()
{
  myservo.attach(servoPin);
}

void loop()
{
  myservo.write(30);

  if(analogRead(ldrPin) < ldrlight)
  {
    myservo.write(10);
    delay(100);
  }
}
