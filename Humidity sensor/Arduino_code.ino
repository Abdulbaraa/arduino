const int prob = A0;

int olcum_sonucu;

void setup() {
Serial.begin(9600);
}

void loop() {
  result = analogRead(prob);

  Serial.print("humidity ");
  Serial.println(result);
  delay(500);
