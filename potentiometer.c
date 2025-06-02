#define LED 12 ;
# define POTENTIOMETER_PIN A0;

void setup(){
    pinMode(LED , OUTPUT);
    pinMode(POTENTIOMETER_PIN,INPUT)
}

void loop(){
    int potValue = analogRead(POTENTIOMETER_PIN);
    analogWrite(LED,potValue/4);
}

