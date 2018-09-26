#include <iostream>
typedef unsigned short int ushort;

using namespace std;

int main()
{
  ushort edad1;
  ushort * pEdad = 0;
  
  edad1 = 66;
  
  cout << "Edad: " << edad1 << endl;
  pEdad = &edad1; //asignar la dirección de edad1 a pEdad
  
  cout << "Valor puntero " << pEdad << endl;
  
  system("pause");
  return 0;
}
