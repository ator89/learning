#include <iostream>

using namespace std;

int main()
{
    
    int numero;
    cout<< "Buscar un numero: ";
    cin>> numero;
    
    switch(numero){
       case 1:
            cout << "si "<< numero<<endl;
            break;
       case 2:
            cout << "si"<<endl;
            break;
       case 3:
            cout << "si"<<endl;
            break;
       case 4:
            cout << "si"<<endl;
            break;
       default:
               cout << "No existe"<<endl;
            break;     
    
    }
    
    char opcion;
    
    cout<< "Menu\n";
    cout<< "a - opcion 1"<<endl;
    cout<< "b - opcion 2"<<endl;
    cout<< "c - opcion 3"<<endl;
    cout<< "d - opcion 4"<<endl;
    cin>>opcion;
    
    switch(opcion){
       case 'a':
            cout << "si "<< opcion<<endl;
            break;
       case 'b':
            cout << "si"<<endl;
            break;
       case 'c':
            cout << "si"<<endl;
            break;
       case 'd':
            cout << "si"<<endl;
            break;
       default:
               cout << "No existe"<<endl;
            break;     
    
    }
    
    
    system("pause");
    return 0;
}
