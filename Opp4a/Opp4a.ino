void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(random(1, 7));
}
