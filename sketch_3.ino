int x;
int y;
int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    x = Serial.parseInt();
    y = Serial.parseInt();
    Serial.print("\nxreceived: ");
    Serial.println(x);
       Serial.print("\nyreceived: ");
    Serial.println(y);
  }{    
    if (x==y)
digitalWrite(ledPin, LOW);
else
digitalWrite(ledPin, HIGH);
  }
}
