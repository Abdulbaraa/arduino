#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);

int trigPin = 13;
int echoPin = 12;
long zaman;
long mesafe;

void setup(){
pinMode(trigPin, OUTPUT);
pinMode(echoPin,INPUT);
lcd.begin();
lcd.backlight();

}
void loop(){
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
zaman = pulseIn(echoPin, HIGH);
mesafe= (zaman /29.1)/2;
if(mesafe<4){mesafe=4;}
else if(mesafe>100){mesafe=100;}

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Distance");
lcd.setCursor(0,1);
lcd.print(mesafe);
lcd.setCursor(3,1);
lcd.print("cm");
delay(500);
}

