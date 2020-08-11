
const int sensor_pin = A1; // Her forteller vi koden om at sensoren vil alltid være koblet til A1 pinnen på Particlen.
float temperatur;          // Vi lager en variabel for å lagre temperaturen i celcius for.
float vout;                // Vi lagrer en variabel for å lagre tallet vi får fra sensoren vi bruker.

void setup()
{
    // Koden her vil kun kjøres en gang, for å sette opp og gjøre klar Particlen.
    pinMode(sensor_pin, INPUT); // Her forteller vi Particle at den vil motta signaler og data gjennom denne pinnen.

    Particle.publish("Jeg er ferdig med setup-en!", PRIVATE);
}

void loop()
{

    vout = analogRead(sensor_pin); //Henter inn verdien fra sensoren

    temperatur = ((vout * 500) / 1023); // En formel for å gjøre om tallet fra sensoren til celcius. Denne kan finnes ved å lese databladet, eller ved å google seg frem til formelen for sensoren.

    Particle.publish("Temperaturen i Celcius", String(temperatur));
}
