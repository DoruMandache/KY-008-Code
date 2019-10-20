const int Pin_Laser = 10;

void setup () {
    pinMode (Pin_Laser, OUTPUT);
    digitalWrite (Pin_Laser, LOW);
}
void loop () {
    digitalWrite (Pin_Laser, HIGH); 
    delay (1000);
    digitalWrite (Pin_Laser, LOW);
    delay (500);
}
