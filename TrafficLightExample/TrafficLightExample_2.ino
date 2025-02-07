// Define pin numbers
const int redLed = 8;    // Red LED connected to digital pin 8
const int yellowLed = 9; // Yellow LED connected to digital pin 9
const int greenLed = 10; // Green LED connected to digital pin 10
const int buttonPin = 2; // Push button for pedestrian crossing

volatile bool pedestrianRequest = false;

void buttonISR() {
  pedestrianRequest = true;
}

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up resistor
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonISR, FALLING);
}

void loop() {
  // Normal traffic light sequence
  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
  
  digitalWrite(greenLed, HIGH);
  delay(5000);
  
  if (pedestrianRequest) {
    pedestrianRequest = false; // Reset the flag
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(5000); // Pedestrian can cross
  } else {
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
  }
}
