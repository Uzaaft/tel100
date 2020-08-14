// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

// This #include statement was automatically added by the Particle IDE.
#include <Ubidots.h>


#define PIN 2
#define DHTTYPE DHT11


DHT dht(PIN, DHTTYPE);
Ubidots ubidots("BBFF-dWLEOae8cBLGgHKuSHOR7TgGsbAKmf",UBI_EDUCATIONAL , UBI_TCP);


void setup() {
    Particle.publish("Particlen er nå koblet til internett!");
    dht.begin();
    Particle.publish("Particlen er nå ferdig med setup");
}

void loop() {
    float temperature = dht.getTempCelcius();
    float fuktighet = dht.getHumidity();
    Particle.publish("Temperature", String(temperature));
    delay(1000);
    Particle.publish("Fuktighet", String(fuktighet));
    ubidots.add("Temperatur",temperature);
    ubidots.add("Fuktighet", fuktighet);
    bool bufferSent = false;
    bufferSent = ubidots.send();  // Will send data to a device label that matches the device Id

    
    delay(5000);
}
