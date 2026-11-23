void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(0, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("LED ON");
  digitalWrite(0, LOW);
  delay(500);

  Serial.println("LED OFF");
  digitalWrite(0, HIGH);
  delay(1000);
}