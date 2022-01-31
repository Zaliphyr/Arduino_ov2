const int button = 2;

int count[] = {0, 0, 0, 0, 0, 0};

void setup() {
  pinMode(button, INPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  Serial.println("Trykk for å generere tall.");
  while (digitalRead(button) == LOW){}
  for (int i = 0; i < 10000; i++){
    count[random(1, 7)-1] += 1;
  }
  Serial.println("tall generert, trykk for å printe");
  delay(1000);
  while (digitalRead(button) == LOW){}
  for (int i = 0; i < 6; i++){
    String text = "Tallet " + String(i+1) + " ble generert " + String(count[i]) + "-ganger og det tilsvarer "
    + String((float(count[i])/10000.0)*100) + " prosent";
     Serial.println(text);
     count[i] = 0;
  }
  delay(1000);
}
