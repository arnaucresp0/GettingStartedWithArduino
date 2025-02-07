
//Different ways to define a PIN:
#define LED 13 
const int ledPin = 13;
//Define also variables here:
const int wait_time = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello world");

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Truning ON  the LED");
  digitalWrite(LED, HIGH);
  delay(wait_time);
  Serial.println("Turning OFF the LED");
  digitalWrite(LED, LOW);
  delay(wait_time);

}
