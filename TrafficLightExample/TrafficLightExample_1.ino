// Define pin numbers
const int redLed = 8;    // Red LED connected to digital pin 8
const int yellowLed = 9; // Yellow LED connected to digital pin 9
const int greenLed = 10; // Green LED connected to digital pin 10

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // Red light
  digitalWrite(redLed, HIGH);
  delay(5000); // Wait 5 seconds
  digitalWrite(redLed, LOW);
  
  // Green light
  digitalWrite(greenLed, HIGH);
  delay(5000); // Wait 5 seconds
  digitalWrite(greenLed, LOW);
  
  // Yellow light
  digitalWrite(yellowLed, HIGH);
  delay(2000); // Wait 2 seconds
  digitalWrite(yellowLed, LOW);
}
