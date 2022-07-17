void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(13)==HIGH){
    Serial.println("1");
    digitalWrite(3, HIGH);
  }else if(digitalRead(13)==LOW){
    Serial.println("0");
    digitalWrite(3, LOW);
  }
}
