// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

#define PIN 2
#define DHTTYPE DHT11

DHT dht(PIN, DHTTYPE);

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
}
