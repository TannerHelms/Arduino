int red = 13;
int green = 12;
int blue = 11;
int big = 8;
int warn = 9;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(big, OUTPUT);
  pinMode(warn, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue < 150
  ) {
    
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(big, LOW);
    digitalWrite(warn, LOW);
    delay(500);
    digitalWrite(big, HIGH);
    digitalWrite(warn, HIGH);
    delay(500);
  }
  else if (sensorValue >= 150 && sensorValue <= 250) {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(big, LOW);
    digitalWrite(warn, LOW);
  }
  else {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(big, LOW);
    digitalWrite(warn, LOW);
    delay(500);
    digitalWrite(big, HIGH);
    digitalWrite(warn, HIGH);
    delay(500);
  }
};
