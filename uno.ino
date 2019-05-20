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
  int light = 100;
  int speaker = 50;
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 500, speaker);
  delay(light);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 1000, speaker);
  
  delay(light);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 1500, speaker);
  delay(light);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, LOW);
  tone (8, 1700, speaker);
  
  delay(light);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, HIGH);
  tone (8, 2000, speaker);
  delay(light);
    digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, HIGH);
  tone (8, 2000, speaker);
  delay(light);
    digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(white, LOW);
  tone (8, 1700, speaker);
  
  delay(light);

    digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 1500, speaker);
  delay(light);
    digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 1000, speaker);
  
  delay(light);
   digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  tone (8, 500, speaker);
  delay(light);
  
  
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  
  delay(light);

}
