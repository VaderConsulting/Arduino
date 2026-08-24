#include <math.h>
void setup() 
{
    Serial.begin(115200);
}

void loop()
{
    int AnalogValue = analogRead(0);
    
    Serial.print(AnalogValue);
    Serial.print(" = ");
    Serial.println(Thermistor(AnalogValue));
    delay(200); 
}

double Thermistor(int RawADC)
{
    double Temp;
    Temp = log(((10240000/RawADC) - 10000));  
    Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
    Temp = Temp - 273.15; // Convert Kelvin to Celcius
    return Temp;
}
