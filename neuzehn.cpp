#include <iostream>
#include "player.h"

using namespace std;

int main(int argc, char *argv[])
{
  Player pl("Angel", "Calix Torres", "Atletismo");
  cout << "" << endl;
  cout << "Nombre: " << pl.nombre() << endl;
  cout << "Apellidos: " << pl.apellido() << endl;
  cout << "Deporte: " << pl.getDeporte() << endl;
  cout << "Ojos:" << pl.ojos() << endl;
  pl.color_ojos = "blue";
  cout << "" << pl.color_ojos <<endl;
  
  
  system("pause");
  return 0;
}
