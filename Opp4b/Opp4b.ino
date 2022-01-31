const int buzzer = 3;

int num = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  num = random(1, 7);
  if (num == 6){
    tone(buzzer, 1000);
    delay(200);
    noTone(buzzer);
  }
}
