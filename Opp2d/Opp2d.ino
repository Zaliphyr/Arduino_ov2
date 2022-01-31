const int potPin = A0; 

int value = 0;
int x = 0;

void setup() {
  // Starte serial med baud 9600
  Serial.begin(9600);
}

void loop() {
  // Leser analog pin
  value = analogRead(potPin);
  // Lagrer kalkulering fra funksjon i x 
  x = getVal(value);   
  // Sender verdier til Serial       
  Serial.print("range ");     
  Serial.println(x);
  delay(100);                 
}

int getVal(int val){
  // Kalkulerer å returnerer verdi
  return val * (3.0/1023.0);
}
