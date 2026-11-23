int pirValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(14, OUTPUT); 
  pinMode(12, INPUT);
  digitalWrite(14, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  pirValue=digitalRead(12);
  Serial.println(pirValue);
  digitalWrite(14, pirValue);
  /*
  Serial.println("LED ON");
  digitalWrite(14, LOW);
  delay(500);

  Serial.println("LED OFF");
  digitalWrite(14, HIGH);
  delay(1000);
  */
}