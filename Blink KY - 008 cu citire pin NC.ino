const int Pin_Laser = 10;

void setup () {
    pinMode (Pin_Laser, OUTPUT);
    digitalWrite (Pin_Laser, LOW);
    Serial.begin(9600);
}
void loop () {
    float volti = 0.0;

    digitalWrite (Pin_Laser, HIGH);
    volti =  analogRead(A0) * (5.0 / 1023.0);
    Serial.print("High = " + String (volti) + " V     ");
    delay (1000);
    
    digitalWrite (Pin_Laser, LOW);
    volti =  analogRead(A0) * (5.0 / 1023.0);
    Serial.println("Low = " + String (volti) + " V");
    delay (500);
}
