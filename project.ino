#define irsensorpin 2
#include<Chrono.h>
Chrono mychrono(Chrono::SECONDS);
int rpm[2]={0,rpm};
float d=1.0;
void setup() {
  pinMode(irsensorpin, INPUT);
  Serial.begin(9600);
  run=false;
}
void update_rpm(){
  if(run==true){
    rpm[1]=rpm[0];
    rpm[0]=60/time;
    if(rpm[0]=rpm[1]){
      Serial.println("rpm :",rpm,'\n');
    }
  }
}
void loop() {
  int Sensorvalue = digitalRead(irsensorpin);
  mychrono.restart();
  if(Sensorvalue = LOW){
    while(Sensorvalue=HIGH){
    int time=mychrono.elapsed();
    Serial.println(time,'\n');
    }
  }
  mychrono.stop();
  update_rpm();
}

//you should probably revert back to millis
//LED_indicators(){case(rpm):}
