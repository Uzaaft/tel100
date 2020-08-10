void setup() {
  Serial.begin(9600);

  for (int teller = 0; teller <=10; teller++) {
    //++ er det samme som å plusse på én
    Serial.println(teller);
  }

  for (int teller = 10; teller >= 0; teller--) {
    //++ er det samme som å plusse på én
    Serial.println(teller);
  }

  for (int teller = 0; teller <= 10; teller= teller + 2) {
    Serial.println(teller);
  }

  Serial.println("While-løkke under");
  
  int arbeidsTimer = 0;

  while (arbeidsTimer <= 8) {
    // jobbeHardt();
    Serial.println(arbeidsTimer);
    // arbeidsTimer++;
    arbeidsTimer = arbeidsTimer + 1;
  }

  Serial.println("Arrays under");

  int verdier[] = {10, 100, 1000, 10000}; // Lengde på 4, 8 bytes
  Serial.println(verdier[0]);
  Serial.println(verdier[3]);

  float temperaturer[24];

  temperaturer[0] = 15.5;
  Serial.println(temperaturer[0]);

  temperaturer[10] = 21.5;
  Serial.println(temperaturer[10]);


  for (int teller = 0; teller <=3; teller++) {
    Serial.println(verdier[teller]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
