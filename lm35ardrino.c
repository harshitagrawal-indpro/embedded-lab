// ardrino in lm35 

#define LMPIN A0

void setup(){
    Serial.begin(9600);
}

void loop(){
    int temp = analogRead(LMPIN);
    float voltage= temp *(5.0/1024.0);
    float celsius = (voltage)*100;

    Serial.print("Temperature: ");
    Serial.print(celsius);
    Serial.println(" C");
    delay(1000);

    Serial.print("Temperature: ");
    Serial.print(celsius+273);
    Serial.println(" K");
    delay(1000);

    Serial.print("Temperature: ");
    Serial.print(celsius*(9/5)+32);
    Serial.println(" F");
    delay(1000);
}
