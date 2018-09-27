#include <iostream>

using namespace std;

int main()
{
  unsigned short int v1 = 5, v2 =10;
  
  unsigned short int * pV = &v1;
  
  cout << "Valor 1: " << v1 << "\t\tValor 2: "<< v2 << endl;
  cout << "&Valor 1: " << &v1 << "\t\t&Valor 2: "<< &v2 << endl;
  
  cout << "pValor 1: " << pV << endl;//direccion a la que apunta
  cout << "*pValor 1: " << *pV << endl;//el valor que contiene la direccion a la que apunta
  cout << "&pValor 1: " << &pV << endl;//la direccion en memoria 
  
  cout << "\nReasignar..." << endl << endl;
  pV = &v2;
  
  cout << "Valor 1: " << v1 << "\t\tValor 2: "<< v2 << endl;
  cout << "&Valor 1: " << &v1 << "\t\t&Valor 2: "<< &v2 << endl;
  
  cout << "pValor 1: " << pV << endl;
  cout << "*pValor 1: " << *pV << endl;
  cout << "&pValor 1: " << &pV << endl;
  
  system("pause");
  return 0;
}
