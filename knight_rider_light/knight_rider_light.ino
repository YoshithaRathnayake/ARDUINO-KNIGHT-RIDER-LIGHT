void setup() {
  // put your setup code here, to run once:
  for(int pin=2; pin<12; pin++){
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int t = 23;
  
  for(int i=2; i<12; i++){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i+2, HIGH);
    delay(t);
    digitalWrite(i+3, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i+1, LOW);
  }

  for(int i=11; i>1; i--){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i-2, HIGH);
    delay(t);
    digitalWrite(i-3, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i-1, LOW);
  }
}
