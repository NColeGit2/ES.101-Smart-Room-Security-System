int pirValue;
bool flag=false;

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
  digitalWrite(14, pirValue);
  if(pirValue==1 && !flag){
    //flag=true;
    Serial.println("Motion detected");
    //delay(1000);
    //flag=false;
  }
}