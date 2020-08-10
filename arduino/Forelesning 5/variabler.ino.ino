void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  int alder = 26; // Lager variabelen alder og setter den til 26
  Serial.println(alder);

  float temperatur = 21.5; // Lager en flyttalsvariabel som holder på verdien 21.5
  Serial.println(temperatur);

  int alderOmFemAar = alder + 5; // Lager en ny variabel som tar utgangspunkt i alder og plusser på 5
  Serial.println(alderOmFemAar);

  if (alder <= 25) {
    // Linjen under utføres bare hvis alderen er mindre eller lik 25
    Serial.println("Alder er mindre eller lik 25");
  }
  else {
    // Linjen under utføres bare hvis alderen IKKE er mindre eller lik 25
    Serial.println("Alder er større 25");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
