// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

// This #include statement was automatically added by the Particle IDE.
#include <blynk.h>

#define PIN 2
#define DHTTYPE DHT11

DHT dht(PIN, DHTTYPE);
BlynkTimer timer;
char auth[] = "OamUYjp4JCSHnqsyL4i_WXk9BV5VGsrD";


void setup() {
    Blynk.begin(auth);
    Particle.publish("Particlen er nå koblet til internett!");
    dht.begin();
    Particle.publish("Particlen er nå ferdig med setup");
    timer.setInterval(1000L, SendData);
}

void loop(){
    Blynk.run();
    timer.run();
}

void SendData() {
    float fuktighet = dht.getHumidity();
    float temperatur = dht.getTempCelcius();
    Blynk.virtualWrite(V1, temperatur);
    Blynk.virtualWrite(V2, fuktighet);
}
