#include <iostream>
#include <string>

using namespace std;

int main()
{
  string cadena1 = "Lorem ipsum suma laudate";  
  cout << cadena1<<endl;
  
  cout << "La nueva frase es: ";
  getline(cin,cadena1);
  //cin>> cadena1;
  cout << "ahora es " << cadena1<<endl;
  
  //length()
  cout << "longitud es "<<cadena1.length()<<endl;
  
  //substr() 
  string cadena2 = "valor";
  
  cout << "extrayendo primeros 3 valores de <valor>: "<< cadena2.substr(0,3)<<endl;
  cout << "extrayendo ultimos 2 valores de <valor>: "<< cadena2.substr(3,2)<<endl;
  cout << "extrayendo 2 valores de en medio <valor>: "<< cadena2.substr(3,4)<<endl;
  
  //find()
  string cadena3 = "soy un texto sin sentido";
  string buscar="";
  cout<<"buscar algo "<<cadena3 <<":";
  getline(cin,buscar);
  
  //size_t es un tipo capaz de representar el tamaño de cualquier objeto en bytes
  //npos: es un valor constante con el mayor valor posible para un elemento del tipo size_t
  size_t token = cadena3.find(buscar);
  
  if(token!=string::npos){
     cout<<buscar << "ha sido encontrado en la posicion "<<token<<endl;
  }else{
     cout<<buscar << "no ha sido encontrado"<<endl;
  }
  
  
  system("pause");
  return 0;
}
