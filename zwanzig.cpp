#include <iostream>
#include "jugador.h"

using namespace std;

int main(int argc, char *argv[])
{
  Jugador pl("Angel", "Calix Torres", "Atletismo");
  cout << "" << endl;
  cout << "Nombre: " << pl.nombre() << endl;
  cout << "Apellidos: " << pl.apellido() << endl;
  cout << "Deporte: " << pl.getDeporte() << endl;
  cout << "Ojos:" << pl.ojos() << endl;
  pl.color_ojos = "blue";
  cout << "" << pl.color_ojos <<endl;
  
  //Jugador nuevo("g","h","r");
  cout << pl.cambiar_nombre(pl, "Nuevo Nombre") << endl;
  cout << "Nombre: " << pl.nombre() << endl;
  
  Jugador * p;
  p = &pl;
  cout << p->nombre() << endl;
  
  
  system("pause");
  return 0;
}
