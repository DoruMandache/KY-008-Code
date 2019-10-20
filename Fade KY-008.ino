const int Pin_Laser = 9; 
 
void setup() {
    pinMode (Pin_Laser, OUTPUT);
}
 
void loop() {
    for (int Valoare_Fade = 0; Valoare_Fade <= 255; Valoare_Fade += 5) { 
        analogWrite(Pin_Laser, Valoare_Fade); 
        delay(30); 
    } 
    for (int Valoare_Fade = 255; Valoare_Fade >= 0; Valoare_Fade -= 5) {
        analogWrite(Pin_Laser, Valoare_Fade);
        delay(30);
    }
}
