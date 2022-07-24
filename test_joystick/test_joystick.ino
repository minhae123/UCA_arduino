void setup(){
  pinMode(7, OUTPUT);
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);

}

void loop(){
  Serial.print(analogRead(A1)/4);
  analogWrite(6, analogRead(A1)/4);
  Serial.print("/");
  Serial.print(analogRead(A0)/4);
  analogWrite(11, analogRead(A0)/4);
  Serial.print("/");
  if(digitalRead(8)==0){
    digitalWrite(7, HIGH);
    Serial.println("활성화");
  }else{
    digitalWrite(7, LOW);
    Serial.println("비활성화");
  }
  delay(1);             
}
