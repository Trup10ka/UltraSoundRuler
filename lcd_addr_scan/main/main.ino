/*
* When using 'johnrickman' library (https://github.com/johnrickman/LiquidCrystal_I2C), you have to know your LCD I2C address
* 
* This file serves as a scanner for that address.
*
* This address is static for the device, so it is enough to run it once on your device
*/

#include <Wire.h>
 
void setup() 
{
    Wire.begin();
    Serial.begin(115200);
    Serial.println("\nI2C Scanner");
}
 
void loop() 
{
    byte error, address;
    int nDevices = 0;

    Serial.println("Scanning...");

    for (address = 1; address < 127; address++) 
    {
        Wire.beginTransmission(address);
        error = Wire.endTransmission();

        if (error == 0) 
        {
            Serial.print("I2C device found at address 0x");
            if (address < 16)
            {
                Serial.print("0");
            }
            Serial.println(address, HEX);
            nDevices++;
        }

        else if (error == 4) 
        {
            Serial.print("Unknow error at address 0x");
            if (address < 16) 
            {
                Serial.print("0");
            }
            Serial.println(address, HEX);
        }
    }   

    if (nDevices == 0) 
    {
        Serial.println("No I2C devices found\n");
    }
    else 
    {
        Serial.println("Done!\n");
    }

    delay(3000);          
}