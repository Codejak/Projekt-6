// include Anweisungen
#include <cstdlib> 
#include <iostream>         // Ein- und Ausgabeoperatoren
#include <iomanip>          // Formatierungsoperationen fuer die Ausgabe

#include "Polynom2.h"        // Funktionsprototypen fuer dieses Programmmodul


// Standardnamensraum
using namespace std;



void schreibTabelle(){
  // gibt eine Wertetabelle fuer das Polynom aus
  cout << endl;
  cout.setf(ios::fixed);   // Zahlen in Dezimaldarstellung ausgeben
  cout.precision(5);       // und auf 5 Stellen hinter dem Komma genau

  // Tabellenueberschrift ausgeben 
  cout << setw(11) << "x" << " " << setw(11) << "p(x)" << endl;

  // Argumente und Polynomwerte ausgeben
  for (double x = -1; x < 1; x += 0.1) { 
    cout << setw(11) << x << "  " << setw(11) << p(x) << endl;
  }
  cout << "Die zugehörige Nullstelle:" << findeNullStelleIterativ(linkegrenze, rechtegrenze) << flush;

}


// Hauptprogramm
int main(){
  liesPolynom();

  schreibTabelle();
  
  return EXIT_SUCCESS;
}