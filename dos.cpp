#include <iostream>

using namespace std;

int main()
{
    char hola[5] = "hola";//char añade al final del array un caracter nul \0
    string hola1 = "sdf";
    
    cout<<hola1<<"\n";
    
    cout<<"Valores del arreglo en char "<<hola[0]<<endl;
    
    //contar caracteres de un array char
    
    cout << hola << " contiene el siguiente numero de caracteres... "<<strlen(hola)<<"\n";
    
    //caracteres sin longitud definida
    char *cadena = "cualquier longitud";
    cout<< cadena<< "\n";
    
    char *variable1 = "hola ", *otra="nu";
    
    cout << variable1 << otra<<endl;
    
    char otraCosa[256];
    cout << "Cual es tu nombre: ";
    cin.getline(otraCosa, sizeof(otraCosa));
    cout << "Hola " << otraCosa << endl;
    
    
    system("pause");
  return 0;
}
