#include <SoftwareSerial.h>
SoftwareSerial module_bluetooth(0, 1); 

char data = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}
void loop()
{
    if (Serial.available() > 0)
    {
        data = Serial.read();

        // Data yang masuk
        if (data == '0')
        {
            digitalWrite(8, LOW);
        }
        else if (data == '1')
        {
            digitalWrite(8, HIGH);
        }
        else if (data == '2')
        {
            digitalWrite(9, HIGH);
        }
        else if (data == '3')
        {
            digitalWrite(9, LOW);
        }
        else if (data == '4')
        {
            digitalWrite(10, HIGH);
        }
        else if (data == '5')
        {
            digitalWrite(10, LOW);
        }
    }
}
