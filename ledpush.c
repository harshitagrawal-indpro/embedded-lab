#define lED 12 ;

voidsetup(){
    pinMode(lED , OUTPUT);
    pinMode(13, INPUT);
}

void loop(){
    if (digitalRead(13)==HIGH){
        digitalWrite(lED, HIGH);
    }else{
        digitalWrite(lED, LOW);
    }
    
}