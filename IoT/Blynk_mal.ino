#include <blynk.h>



const char auth[]= "Her Legger du inn Tokenen din";

void setup(){
	Blynk.begin(auth); //Her starter vi et prosess med Blynk.

}

void loop(){
	Blynk.run();
	/*
	Her kan du skrive koden du vil kjøre.
	En viktig ting med Blynk er at Blynk har pins som er veldig like de du henter informasjon fra på particle eller arduinoen.  
	Den eneste forskjellen er at disse er virtuelle, altså i skyen.
	La oss si at du lagrer en variabel t med temperaturen du henter i koden din, og du har satt opp Blynk til å hente et tall 
	fra Virtual pin nr 1. Dermed vil koden din bli:
	Blynk.virtualWrite(V1, t); 
	*/
	Blynk.virtualWrite(V1, t);	
}
