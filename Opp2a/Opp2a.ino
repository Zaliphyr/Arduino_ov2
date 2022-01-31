// Lagre hvilken pin som er input fra pot meter
const int potPin = A0; 

// Lage en verdi som vi kan lagre input fra analog read
int value = 0;

void setup() {
  // Starte serial med baud 9600
  Serial.begin(9600); 
}

void loop() {
  // lagre input til value
  value = analogRead(potPin);

  // sende verdien til serial, med linjeskift
  Serial.println(value);

  // en liten delay, alltid kjekt å ha
  delay(10);
}
