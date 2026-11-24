void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(14, OUTPUT); 
  pinMode(12, INPUT_PULLUP);
  digitalWrite(14, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int connection=digitalRead(12);

  //digitalWrite(14, connection);
  if(connection<1){
    digitalWrite(14, 1);
  }else{
    digitalWrite(14, 0);
  }

  
}