void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(A0);
  analogWrite(3, lightValue/4);
  
  Serial.println(lightValue);
  delay(100);
}
