// ARDUINO DEMO FOR GROVE-ATH20
//
#include <Wire.h>
#include "ATH20.h"

ATH20 ATH;

void setup()
{
    Serial.begin(115200);
    Serial.println("ATH20 DEMO");
    ATH.begin();
}

void loop()
{
    float humi, temp;
    
    int ret = ATH.getSensor(&humi, &temp);
    
    if(ret)     // GET DATA OK
    {
        Serial.print("humidity: ");
        Serial.print(humi*100);
        Serial.print("%\t temerature: ");
        Serial.println(temp);
    }
    else        // GET DATA FAIL
    {
        Serial.println("GET DATA FROM ATH20 FAIL");
    }
    
    delay(100);
}

// END FILE