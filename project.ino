#define irpin 2
void setup() {
  // put your setup code here, to run once:
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(irpin,INPUT);
   Serial.begin(9600);
}

void loop(){
 int SensorValue=digitalRead(irpin);
 Serial.println(SensorValue);
 if(SensorValue=HIGH){
  digitalWrite(LED_BUILTIN, HIGH);
 }
}
