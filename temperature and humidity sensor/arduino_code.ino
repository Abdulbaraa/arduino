#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {

  lcd.begin();
  lcd.print("Hello");
  delay(1000);
  dht.begin();

}

void loop() {

  int temp = dht.readTemperature();
  int hum = dht.readHumidity();

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temperature: ");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0,1);
  lcd.print("Humidity: %");
  lcd.print(hum);

  delay(2000);

 

 

}
