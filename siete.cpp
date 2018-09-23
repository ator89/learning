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
    
    system("pause");
    return 0;
}
