// C++ code
//
int relayPin=12,sensorPin=7;
void setup()
{
  Serial.begin(9600);
  pinMode(relayPin,OUTPUT);
  pinMode(sensorPin,INPUT);
}

void loop()
{
  if(digitalRead(sensorPin)){
    digitalWrite(relayPin,HIGH);
    Serial.println("Motion detected");
  }else{
    digitalWrite(relayPin,LOW);
    Serial.println("No motion");
  }
}