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
  
  cout << "Direccion en memoria del puntero " << pEdad << endl;
  cout << "*pEdad: " << *pEdad << endl;
  
  cout << "Set *pEdad = 7 " << endl;
  *pEdad = 7;
  
  cout << "*pEdad: " << *pEdad <<endl;
  cout << "edad: " << edad1 << endl;
  
  cout << "set edad1 = 9 " << endl;
  edad1=9;
  cout <<"*pEdad " << *pEdad << endl;
  
  system("pause");
  return 0;
}
