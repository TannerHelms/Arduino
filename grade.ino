int red = 13;
int yellow = 12;
int green = 11;
int blue = 10;
int white = 9;



void setup() {
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);
   pinMode(white, OUTPUT);
   
}

void loop() {
  int g = 300;
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  delay(g);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  delay(g);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  delay(g);
digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, LOW);
  delay(g);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, HIGH);
  delay(g);
    digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  delay(g);
  


}
