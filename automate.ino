#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); 
String readcommand;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(8, OUTPUT);

}
void loop() {
  while (BT.available()){  
  delay(10); 
  char c = BT.read(); 
  readcommand += c; 
  } 
  if (readcommand.length() > 0) {
    Serial.println(readcommand);

  if(readcommand == "ON")
  {
    digitalWrite(8,HIGH);
    delay(100);
  }

  else if(readcommand == "OFF")
  {
    digitalWrite(8, LOW);
    delay(100);
  }

  


readcommand="";}} 
