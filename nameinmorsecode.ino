// Declaring D7 LED as a constant variable.
const pin_t MY_LED = D7;

void setup() 
{
    // Setting the LED as the output of the program.
    pinMode(MY_LED, OUTPUT);
}

void loop() 
{
    // R
    dit();
    dah();
    dit();
    delay(700);
    
    // A
    dit();
    dah();
    delay(700);
    
    // L
    dit();
    dah();
    dit();
    dah();
    delay(700);
    
    // I
    dit();
    dit();
    delay(700);
    
    // Indication of end of Morse Code.
    digitalWrite(MY_LED, HIGH);
    delay(1000);
    
    digitalWrite(MY_LED, LOW);
    delay(1000);
    
}

    // The delay times will differ depending on whether or not the morse code
    //  message shows a di(t) (short delay) or a dah (longer delay).
void dit()
{
    // Turns on LED
    digitalWrite(MY_LED, HIGH);
    
    // LED stays on for 1 second
    delay(150);
    
    // Turns off LED
    digitalWrite(MY_LED, LOW);
    
    // LED stays off for 2 milli-seconds
    delay(200);
}

void dah()
{
    // Turns on LED
    digitalWrite(MY_LED, HIGH);
    
    // LED stays on for 1 second
    delay(450);
    
    // Turns off LED
    digitalWrite(MY_LED, LOW);
    
    // LED stays off for 2 milli-seconds
    delay(200);
}