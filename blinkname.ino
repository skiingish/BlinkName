int led1 = D7; //set digital pin 7 to var "led1"
int dotTime = 200; // time for a dot
int dashTime = 1000; // time for a dash
int spaceTime = 1500; //time for a space
int stopTime = 3000; // time for end of message before repeat

void setup() {
    
    pinMode(led1, OUTPUT); //set the led pin to be an output pin
}

void loop() {
    
    //S
    dot(led1);
    dot(led1);
    dot(led1);
    space();
    //E
    dot(led1);
    space();
    //A
    dot(led1);
    dash(led1);
    space();
    //N
    dash(led1);
    dot(led1);
    space();
    // stop
    stop(); 
    
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

// function used for a space between letters

int space() { 
    delay(spaceTime); 
}

// function used to add time for a stop at the end of a message

int stop() { 
    delay(stopTime); 
}