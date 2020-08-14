int x; //number of cattle in the pen
int y; //number of cattle that should be in the pen
int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.print("Please insert the number of cattle in the pen and the number of cattle that should be in the pen");
}

void loop() {
  if (Serial.available()) {
    x = Serial.parseInt();
    y = Serial.parseInt();
    Serial.print("\nnumber of cattle in the pen: ");
    Serial.println(x);
       Serial.print("\nnumber of cattle that should be in the pen: ");
    Serial.println(y);
  }{    
    if (x==y)
digitalWrite(ledPin, LOW);
else
digitalWrite(ledPin, HIGH);
  }
}
