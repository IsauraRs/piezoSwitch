const int lampPin = 13;       
const int piezoSensor = A0;  
const int threshold = 500;  

int sensorReading = 0;  
int lampState = LOW;    

void setup() {
  
  Serial.begin(9600);
  pinMode(lampPin, OUTPUT);  
 
}

void loop() {
  sensorReading = analogRead(piezoSensor);
  Serial.println(sensorReading);
  digitalWrite(lampPin, LOW);


  if (sensorReading >=500) {

    digitalWrite(lampPin, LOW);
    Serial.println("Knock!");
  
  }
  else{
    digitalWrite(lampPin, HIGH);
  }
}
