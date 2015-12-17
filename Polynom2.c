

// include Anweisungen
#include <iostream>         // Ein- und Ausgabeoperatoren
#include <iomanip>          // Formatierungsoperationen fuer die Ausgabe
#include <cstdlib> 

#include "Polynom2.h"        // Funktionsprototypen fuer dieses Programmmodul


// Standardnamensraum verwenden
using namespace std;

int polynomGrad;                 // Grad des Polynoms f
  // Polynomkoeffizienten
// Funktionsimplementierungen
double* zeigerpolynomKoeff;

int liesPolynom() {
  // Das Programm stellt sich vor
  cout << "Programm zur Auswertung eines Polynoms mit dem Horner Schema";
  cout << endl; 

  /* 
   * Eingabeschleife fuer den Polynomgrad:
   * Fordere den Benutzer auf, den Polynomgrad n einzugeben. Wiederhole die 
   * Aufforderung und Eingabe, bis 0<=n<20 gilt.
   */

  do {
    cout << "Geben Sie den Polynomgrad ein (0 <= Polynomgrad < 20): " << flush;
    cin >> polynomGrad;
  } while ( 0>polynomGrad || polynomGrad>=20 );

  double* zeigerpolynomKoeff = new double [polynomGrad+1]; 

  for ( int i=polynomGrad; i>=0; --i ) {

    cout << "Geben Sie den " << i << ". Koeffizenten ein: " << flush;
    cin >> zeigerpolynomKoeff[i];
  }

  cout << "Geben sie ihre linke intervallgrenzen ein" << flush;
  cin >> linkegrenze;
  cout << "Geben sie ihre rechte intervallgrenzen ein" << flush;
  cin >> rechtegrenze;
  // uebergib den Polynomgrad als Rueckgabewert
  return polynomGrad;


}



double p(double x){ 
  // das Polynom p wird mit dem Horner-Schema an der Stelle x ausgewertet

  //TODO: Initialisierung des Algorithmus

  //TODO: Horner Schema wie im Vorlesungsskript (beachte Variablennamen)
  double p_von_x = zeigerpolynomKoeff[polynomGrad];
  for(int i= polynomGrad-1;i>=0;i--){
    p_von_x = p_von_x * x + zeigerpolynomKoeff[i]; 
  }
  //TODO: uebergib Ergebnis als Rueckgabewert 


  return p_von_x;
}