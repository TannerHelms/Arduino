int red = 10;
int yellow = 9;
int green = 6;
int blue = 5;
int white = 3;



void setup() {
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);
   pinMode(white, OUTPUT);
   
}

void loop() {
 
  delay(100);
  int g = 10;
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(red, fadeValue);
    delay(g);
  }
  tone(8, 500, 50); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(yellow, fadeValue);
    delay(g);
  }
  tone(8, 1000, 50); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(green, fadeValue);
    delay(g);
  }
  tone(8, 1500, 50); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(blue, fadeValue);
    delay(g);
  }
  tone(8, 2000, 50); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(white, fadeValue);
    delay(g);
  }
  tone(8, 2500, 50); 
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone(8, 5000, 50); 
  
}
