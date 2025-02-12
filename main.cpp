// escriba su nombre, username en github y numero de estudiante en el header
/*
Ryan Rolón Rosa
ryanrolon0
801-24-1373
*/
// incluya cualquier colaboración que haga
/*
Lillian Gonzalez
https://github.com/CCOM3033-002/hw2-ryanrolon0
*/
#include<iostream>
using namespace std;

int main(){
  // Se declara variables para el programa
  int numerador1, numerador2, denominador1, denominador2;

  // Despliega su propósito
  cout << "Este programa suma dos fracciones." << endl;

  // Toma los inputs del usuario
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> numerador1;

  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> denominador1;

  cout << "Entre el numerador de la 2da fracción: ";
  cin >> numerador2;

  cout << "Entre el denominador de la 2da fracción: ";
  cin >> denominador2;

  // Se calcula la suma de las fracciones
  int numerador_final = (numerador1 * denominador2) + (numerador2 * denominador1);
  int denominador_final = denominador1 * denominador2;

  // Despliega su resultado final
  cout << "La suma es " << numerador_final << "/" << denominador_final << endl;

  return 0;
}
