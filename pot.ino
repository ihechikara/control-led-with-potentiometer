int potPin = A0;
int potValue = 0;
int brightness = 0;
int ledPin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  /* The analogRead() function reads the value of the potentiometer which is denoted by the potPin variable. The value read is then assigned to the potValue variable */
  potValue = analogRead(potPin);

  /* This calculation makes sure the value of the potentiometer falls within the range of 0 to 255. This is because the analogWrite() function writes values that fall within that range */
  brightness = (255.0/1023.0)*potValue;

  /* We use the analogWrite function to write values to the LED to control its brightness. The first parameter of the function is the pin, and the second parameter is the value to be written to the pin*/
  analogWrite(ledPin, brightness);
}
