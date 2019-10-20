const int Pin_Laser = 10;
const int Pin_Detector_Laser = 7;
boolean Stare_Laser = false;

void setup () {
    pinMode (Pin_Laser, OUTPUT);
    pinMode (Pin_Detector_Laser, INPUT);    
    Serial.begin(9600);
}

void loop () {
    digitalWrite (Pin_Laser, HIGH); 
    Stare_Laser = digitalRead(Pin_Detector_Laser);
    Serial.println("Laser: " + Stare_Laser);
    delay (500);
    
    digitalWrite (Pin_Laser, LOW); 
    Stare_Laser = digitalRead(Pin_Detector_Laser);
    Serial.println("Laser: " + Stare_Laser);
    delay (500);
}
