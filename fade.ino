
int red = 10;
int yellow = 9;
int green = 6;
int blue = 5;
int white = 3;
int g = 30;
int pizza = 0;



void setup() {
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);
   pinMode(white, OUTPUT);
   Serial.begin(9600);
   
}

void loop() {
  
  delay(100);
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(red, fadeValue);
    tone(8,(analogRead(A4) + analogRead(A3) + analogRead(A2) + analogRead(A1) + analogRead(A0)),3);
    read(); 
    delay(g);
    
    
  }
  read(); 
  
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(yellow, fadeValue);
    tone(8,(analogRead(A4) + analogRead(A3) + analogRead(A2) + analogRead(A1) + analogRead(A0)),3);
    read(); 
    delay(g);
    
  }
  
  read(); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(green, fadeValue);
    tone(8,(analogRead(A4) + analogRead(A3) + analogRead(A2) + analogRead(A1) + analogRead(A0)),3);
    read(); 
    delay(g);
    
  }
  
  read(); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(blue, fadeValue);
    tone(8,(analogRead(A4) + analogRead(A3) + analogRead(A2) + analogRead(A1) + analogRead(A0)),3);
    read(); 
    delay(g);
    
  }
  read(); 
  
  tone(8,2400,7);
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(white, fadeValue);
     
      read(); 
    delay(g);
    
    
  }
  read();
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  
  
}

void read() {
  Serial.println(analogRead(A4) + analogRead(A3) + analogRead(A2) + analogRead(A1) + analogRead(A0));
 
}
