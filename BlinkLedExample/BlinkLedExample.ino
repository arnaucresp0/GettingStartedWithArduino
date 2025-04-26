
const int pin_vermell = 6;
const int pin_groc = 7;
const int pin_verd = 8;
const int pin_LDR = A0;

void setup() {
  pinMode(pin_vermell, OUTPUT);
  pinMode (pin_groc, OUTPUT);
  pinMode(pin_verd,OUTPUT);
  pinMode(pin_LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int intensitat_llum = analogRead(pin_LDR);
  Serial.println(intensitat_llum);

  if(intensitat_llum >= 300){
    digitalWrite(pin_verd, HIGH);
    digitalWrite(pin_groc, LOW);
    digitalWrite(pin_vermell, LOW);
    Serial.println("Molta llum detectada");
  }
  else if (intensitat_llum >= 150){
    digitalWrite(pin_verd, LOW);
    digitalWrite(pin_groc, HIGH);
    digitalWrite(pin_vermell, LOW);
    Serial.println("Poca llum detectada");
  }
  else{
    digitalWrite(pin_verd, LOW);
    digitalWrite(pin_groc, LOW);
    digitalWrite(pin_vermell, HIGH);
    Serial.println("No es detecta llum.");
  }
  delay(500);

}
