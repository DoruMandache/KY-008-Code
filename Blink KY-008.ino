/* Sketch testare KY-008 cu Arduino IDE 1.8.3
   by - Mandache Doru
   
   Materiale necesare testarii:
     - placa de dezvoltare Arduino : UNO, Mega2560, NANO, Pro Mini
     - KY-008 
     - cabluri de lagatura
     
   Conexiuni:
     Pini KY-008          Pini Arduino
       S  ------------------ 10 (sau orice pin digital)
       NC ------------------ neconectat
       -  ------------------ GND
       
   Detalii modul KY-008: https://htecdb.blogspot.com/2019/10/ky-008.html    
*/

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
