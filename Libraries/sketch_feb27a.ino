#include <dht.h>
#define m A1
#define dht1 4
#define bt1 7
//int motorPin=3;
#define ledPin1 10
#define ledPin2 12
#define ledPin3 11
dht DHT;
int moisture_thresh=5000;
int humidity_thresh=50.0;
int temperature_thresh=25.0;
char state=0;
void setup()
{
Serial.begin(9600); 
(ledPin1, OUTPUT); (ledPin2, OUTPUT); (ledPin3, OUTPUT); 
pinMode(bt1,OUTPUT);
}
void loop()
{
  int chk = DHT.read11(dht1);
  float h=DHT.humidity;
  float t=DHT.temperature;
  float moisture= analogRead(m);
  delay(6000);
  Serial.print("Current Humidity= ");
  Serial.print(h);
  Serial.print(" % \n");
  Serial.print("Current Temperature= ");
  Serial.print(t);
  Serial.print(" C \n");
  Serial.print("Current Moisture= ");
  Serial.print(moisture);
  Serial.print("cc/m \n");
  if(h > humidity_thresh){
    Serial.println(" - Doesn't need watering");
    digitalWrite(ledPin1, LOW);
  }
  else {
    Serial.println(" - Time to water your plant");
    digitalWrite(ledPin1, HIGH);
  }
  
  if(t < temperature_thresh){
    Serial.println(" - Doesn't need watering");
    digitalWrite(ledPin2, LOW);
  }
  else {
    Serial.println(" - Time to water your plant");
    digitalWrite(ledPin2, HIGH);
  }
  
  if(moisture > moisture_thresh){
    Serial.println(" - Doesn't need watering");
    digitalWrite(ledPin3, LOW);
  }
  else {
    Serial.println(" - Time to water your plant");
    digitalWrite(ledPin3, HIGH);
  }
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
    Serial.println(state);
    
     if(state=='0')
     {
      digitalWrite(bt1,LOW);
     }
     else if(state=='1')
     {
      digitalWrite(bt1,HIGH);
     }
 }
  
}
