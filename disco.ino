//CREATED BY Tanner Helms

int red = 10;
int yellow = 9;
int green = 6;
int blue = 5;
int white = 3;
int graph = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
  Serial.begin(9600);
}
void loop() {
    int dT = 200;
    //NONE
    int sensorValue = 0;
    
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    tone(13,500,50);
  
    delay(dT);
    //RED
    graph = 1;
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    tone(13,1000,50);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    delay(dT);
    //YELLOW
    graph = 2;
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    tone(13,1500,50);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    delay(dT);
    //GREEN
    graph = 3;
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
    tone(13,2000,50);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    delay(dT);
    //BLUE
    graph = 4;
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(white, LOW);
    tone(13,2500,50);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    delay(dT);
    //WHITE
    graph = 5;
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(white, HIGH);
    tone(13,5000,50);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    Serial.println(graph);
    delay(dT);
   
    
}
