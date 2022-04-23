#include <stdio.h>
#include <MsTimer2.h>

void setup() {
  Serial.begin(115200);
  pinMode(A0,INPUT);
  MsTimer2::set(1,flash); //1kHz
  MsTimer2::start();
}
void flash(){
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0/1023.0);

  Serial.println(voltage);
  }
void loop() {
  
  
}
