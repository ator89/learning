#include <iostream>
#include "rectangulo.h"

Rectangulo::Rectangulo(int arriba, int izquierda, int abajo, int derecha)
{
   _arriba = arriba;
   _izquierda = izquierda;
   _abajo = abajo;
   _derecha = derecha;
   
   _ptArribaI.setX(izquierda);
   _ptArribaI.setY(arriba);
   
   _ptArribaD.setX(derecha);
   _ptArribaD.setY(arriba);
   
   _ptAbajoI.setX(izquierda);
   _ptAbajoI.setY(abajo);
   
   _ptAbajoD.setX(derecha);
   _ptAbajoD.setY(abajo);
   
}

int Rectangulo::getArea() const
{
   int ancho = _derecha-_izquierda;
   int alto = _arriba-_abajo;
   return (ancho * alto);
}

using namespace std;

int main()
{
  return 0;
}
