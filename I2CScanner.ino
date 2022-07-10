#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  byte addr, output;
  
  for(addr = 1; addr < 127; addr++){ 
      Wire.beginTransmission(addr);
      output = Wire.endTransmission(); //
        if (output == 0){
          Serial.print("I2C encontrado en: 0x");
          Serial.print(addr,HEX);
         }
         
          else if (output == 4){
            Serial.print("Error desconocido");
      
           }
      }
}
   
void loop(){
}
