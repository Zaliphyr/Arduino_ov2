int count[] = {0, 0, 0, 0, 0, 0};

void setup() {
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 10000; i++){
    count[random(1, 7)-1] += 1;
  }
  
  for (int i = 0; i < 6; i++){
    String text = "Tallet " + String(i+1) + " ble generert " + String(count[i]) + "-ganger og det tilsvarer "
    + String((float(count[i])/10000.0)*100) + " prosent";
     Serial.println(text);
     count[i] = 0;
  }
  delay(2000);
}
