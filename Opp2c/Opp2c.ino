// Lagre hvilken pin som er input fra pot meter
const int potPin = A0; 

// Lage en verdi som vi kan lagre input fra analog read
int value = 0;
// Lage verdi som kan være spenning
float voltage = 0;
// Lage verdi som kan være motstand
float resistance = 0;

void setup() {
  // Starte serial med baud 9600
  Serial.begin(9600); 
}

void loop() {
  // lagre input til value
  value = analogRead(potPin);
  // Kalkulerer spenningen
  voltage = value * (5.0/1023.0);
  // Kalkulerer Motstanden
  resistance = value * (10.0/1023.0);

  // sende verdier til serial, med linjeskift på slutten
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print("v, Resistance: ");
  Serial.print(resistance);
  Serial.println(" kOhm");

  // ha en liten delay, altid kjekt å ha
  delay(10);
}
