

#ifndef POLYNOM2__H_
#define POLYNOM2__H_

// Funktionsprototypen
int liesPolynom();  
// Eingabe der Koeffizienten. Liefert den Grad des Polynoms als RÃ¼ckgabewert.


double findeNullStelleRekursiv(double, double);
double findeNullStelleIterativ(double, double);

double linkegrenze;
double rechtegrenze;

double p(double);             
/* 
 * Zum Auswerten der des Polynoms an einer Stelle. Wird von RegulaFalsi.C
 * benÃ¶tigt, da dort die Funktion double f(double) aufgerufen wird.
 */ 

#endif 
/* POLYNOM__H_ */