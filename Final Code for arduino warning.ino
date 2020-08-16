#include <Keypad.h>

char keys [4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


byte rowPins[4] = {11, 10, 9, 8};
byte colPins[4] = {7, 6, 5, 4};

Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

int ledPin = 13;
int x;       //current number of cows in pen
int y;       //amount of cows


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
  Serial.print("Please insert the number of cattle in the pen and the number of cattle that should be in the pen\n");
} 

void loop() {
  char keyPressed = myKeypad.getKey();
  if (keyPressed) {
    Serial.println(keyPressed);
  }
  if (Serial.available()) {
    x = Serial.parseInt();
    y = Serial.parseInt();
    Serial.print("\nnumber of cattle in the pen: ");
    Serial.println(x);
       Serial.print("number of cattle that should be in the pen: ");
    Serial.println(y);
  
  {    
    if (x==y)
digitalWrite(ledPin, LOW);     //LED turns off or stays off
else
digitalWrite(ledPin, HIGH);   //LED to notify farmer becomes active
  }
  
//  char keyPressed = myKeypad.getKey();
//if (keyPressed) {
//Serial.println(keyPressed);
//digitalWrite(ledPin, HIGH);
}
//else
//digitalWrite(ledPin, LOW);
}
