/***************************/
/* project: robi v1_0 */
/* authors: alexandra, steven   */
/* date:    02.10.2014     */
/***************************/
//Standard Inlcude Dateien
#include <regc515c.h>

//Aksen-Bibliothek
#include <stub.h>

//Eigene Inludes
#include "actions.h"
#include "breitenSuche.h"

#define GREIFER_OFFEN 0
#define GREIFER_GESCHLOSSEN 1


void AksenMain(void)
{

/****************************** Startpunkt abfragen ******************************/
    int startPunkt = 68; //Startpunkt B oder 64 == A ueber Dip-Schalter regeln
/****************************** Startpunkt abfragen ******************************/

/****************************** Nur fuer Konsolenanzeige ******************************/
	printf("Fahrplanmatrix\n\n");
	display('c');
/****************************** Nur fuer Konsolenanzeige ******************************/

/****************************** Initialisierung Suchverfahren ******************************/
	breitensuche(startPunkt);
/****************************** Initialisierung Suchverfahren ******************************/

/****************************** Nur fuer Konsolenanzeige ******************************/
	printf("Kostenmatrix\n\n");
	display('n');               //Alle erreichbaren '.' wurde konvertiert mit Hilfe der BFS in Zahlen(Kosten)
                                //jedes 'F' ist immer die Zahl 70, jedes 'x' die Zahl 120 und alle nichterreichbaren
                                //'.' sind die Zahl 46. D.h. jede Zahl die < als 'F' und != 46 ist neben ein 'F' ist ein
                                //erlaubter Pfad
/****************************** Nur fuer Konsolenanzeige ******************************/


while(1)
{

/****************************** Fahrplan pruefen ******************************/
//Fahrgast vorhanden?
// Codeanzeige auf Display, ob Fahrgast vorhanden, Route passierbar ist -> lcd_puts("0, -1 oder -2")
// check = read_plan(current_startpoint);
// transportierte Fahrgaeste auf Karte mit x etc. markieren aber nicht mit 'F'
/****************************** Fahrplan pruefen ******************************/

//Start wenn Licht aus ist -> drive();

/****************************** Fahrplan abarbeiten ******************************/
// Fahrplan auslesen -> iterativer Prozess abhängig von der Anzahl der Fahrgaeste
/****************************** Fahrplan abarbeiten ******************************/





}
