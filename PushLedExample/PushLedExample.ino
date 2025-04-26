// Define pin numbers
const int buttonPin = 7;  // Push button connected to digital pin 2
const int ledPin = 8;    // LED connected to digital pin 13

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up resistor
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);
  
  // If the button is pressed, turn on the LED
  if (buttonState == HIGH) { // Active LOW due to pull-up resistor
    digitalWrite(ledPin, HIGH);
    Serial.println("Turning ON the LED.");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Turning OFF the LED.");
  }
}