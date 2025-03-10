#define irsensorpin 2
#include<Chrono.h>
Chrono mychrono(Chrono::SECONDS);
void setup() {
  pinMode(irsensorpin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int Sensorvalue = digitalRead(irsensorpin);
  mychrono.resume();
  if(Sensorvalue = HIGH){
    int time=mychrono.elapsed();
    Serial.println(time,'\n');
  }
  else{
    mychrono.stop();
  }

  //display rpm delay 1000ms
  //else there will be false positive error
}
