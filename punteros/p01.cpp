#include <iostream>

using namespace std;

int main()
{
  unsigned short n1 = 4;
  unsigned long n2 = 54465;
  long varNeg = -65535;
  
  cout << "Número 1: \t" << n1<<endl;
  cout << "Direccion de n1: \t";
  cout << &n1<< endl;
  
  
  //Inicializar puntero
  unsigned short int edad = 50;
  int *pValor = 0;
  pValor = &edad; //Poner la dirección de "edad" en "pValor"
  
  //Obtener el valor de un variable a través de su puntero
  unsigned short int _edad;
  _edad = *pValor; //indirection
  
  
  
  system("pause");
  return 0;
}
