void setup() {
  pinMode(13, OUTPUT);   // 13 pin LED ge output
}

void loop() {
  digitalWrite(13, HIGH); // LED ON
  delay(500);             // 0.5 second wait
  digitalWrite(13, LOW);  // LED OFF
  delay(500);             // 0.5 second wait
}

