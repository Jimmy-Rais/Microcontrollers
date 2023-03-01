#include <DHTesp.h>

/*
The DHT 11 is an Arduino compatible humidity and temperature sensor,this sensor uses a capacitive humidity
sensor(The vapors of water present in the surrounding air will change the value of the relative permitivity 
of the capacitor,resulting in the change of capacitance and a Negative Temperature Coefficient thermistor 
(causes a decrease in its resistance value with increase in temperature)

author:JIMMY_RAIS 
*/

#define DHT11_PIN 4
#define USE_WROVER_BOARD

dht DHT;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read11(DHT11_PIN);
  int hum=DHT.humidity;
  float temp=DHT.temperature;
 Serial.print("Temperature: ");
 Serial.print(temp);
 Serial.println("°Celsius");
  Serial.print("Humidity: ");
 Serial.print(hum);
 Serial.println("%");
 delay(5000);
}
