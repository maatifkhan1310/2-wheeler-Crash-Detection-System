#include <SoftwareSerial.h>
SoftwareSerial Dta(4,3);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Dta.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Dta.available()>0){
  byte gpsData=Dta.read();
  Serial.write(gpsData);
}

}
