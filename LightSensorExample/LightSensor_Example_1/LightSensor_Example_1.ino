// Define pin numbers
const int redLed = 8;    // Red LED connected to digital pin 8
const int yellowLed = 9; // Yellow LED connected to digital pin 9
const int greenLed = 10; // Green LED connected to digital pin 10
const int ldrPin = A0;   // LDR sensor connected to analog pin A0

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightIntensity = analogRead(ldrPin); // Read LDR sensor value
  Serial.print("Light Intensity: ");
  Serial.println(lightIntensity);
  
  // Determine which LED to turn on based on light intensity
  if (lightIntensity > 800) { // High light -> Green LED
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  } else if (lightIntensity > 400) { // Medium light -> Yellow LED
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
  } else { // Low light -> Red LED
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
  }
  
  delay(500); // Small delay to stabilize readings
}
