/*
Dette er eksempel kode for hvordan en implimenterer Ubidots inn i et prosjekt. 
Registrer en Ubidot bruker på følgende link: https://ubidots.com/stem/
Deretter klikker du inn på bilde av en person helt til høyre, og API Credentials.

Fra denne siden trenger du en Token. Som standard lager Ubidots en token for deg.
Det er denne tokenen som kommer til å bli brukt i koden. 

*/


//Først importerer vi Ubidots biblioteket inn i koden vår.
#include <Ubidots.h>

/* Deretter lager vi en instance(starter opp et program, på sett og vis) av ubidots
der vi tar også gir den tokenen vi fant tidligere. 
*/
Ubidots ubidots("Bytt ut teksten her med Ubidots tokenen");

/*
Deretter vil programmet for det meste bli det samme. 
*/


void setup(){
/*
Her skriver du void setup() {} koden din. 
*/
}

void loop(){
/*
Her skriver du koden din som skal kjøres i løkken. 
Den eneste forandringen i koden blir at mot slutten så skriver vi følgende kode.
*/

ubidots.add("Bytt ut teksten her med navnet på variabelen som du vil se i Ubidots","Bytt ut teksten her, inkludert ""tegnene, med navnet på variabelen i koden din");
ubidots.SendAll(); // Denne funksjonen sender alle tallene opp til ubidots sin sky, sånn at dette kan vises i dashboardet deres.
}
