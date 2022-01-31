const int ledPin = 3;
const int lightPin = A0;

int readValue = 0;
int out = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  readValue = analogRead(lightPin);
  out = map(readValue, 260, 880, 255, 0);
  analogWrite(ledPin, out);
}
