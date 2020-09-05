const int ledPin = D0;
const int lm_pin = A0;

void setup() {

  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  delay(2000);

  // For LM35
  int analogValue = analogRead(lm_pin);
  float millivolts = (analogValue/1024.0) * 3300; //3300 is the voltage provided by the NodeMCU
  float celsius = millivolts/10;
  float fahrenhiet = ((celsius * 9)/5 +32);

  Serial.print("in DegreeCelsius: ");
  Serial.print(celsius);
  Serial.println();
  Serial.print("in Fahrenhiet :");
  Serial.print(fahrenhiet);
  Serial.println();
  Serial.println();

  delay(1000);
}
