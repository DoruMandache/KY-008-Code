/* Sketch testare KY-008 cu Arduino IDE 1.8.3
   by - Mandache Doru
   
   Materiale necesare testarii:
     - placa de dezvoltare Arduino : UNO, Mega2560, NANO, Pro Mini
     - KY-008 
     - cabluri de lagatura
     
   Conexiuni:
     Pini KY-008          Pini Arduino
       S  ------------------ 10 (sau orice pin digital PWM 3, 5, 6, 9, 10, 11)
       NC ------------------ neconectat
       -  ------------------ GND
       
   Detalii modul KY-008: https://htecdb.blogspot.com/2019/10/ky-008.html    
*/

const int Pin_Laser = 10; 
 
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
