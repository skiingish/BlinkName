int led1 = D7; //set digital pin 7 to var "led1"
int dotTime = 200; // time for a dot
int dashTime = 1000;// time for a dash

void setup() {
    
    pinMode(led1, OUTPUT); //set the led pin to be an output pin
}

void loop() {
    
    dot(led1);
    dash(led1);
    dot(led1);
    
}

//function used to produce a dot in morse code

int dot(int LED) { 
    
    digitalWrite(LED, HIGH);
    delay(dotTime);
    digitalWrite(LED, LOW);
    delay(dotTime);
}

//function used to produce a dash in morse code

int dash(int LED) {
    
    digitalWrite(LED, HIGH);
    delay(dashTime);
    digitalWrite(LED, LOW);
    delay(dotTime);
}