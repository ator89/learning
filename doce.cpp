#include <iostream>
#include <string>


using namespace std;


int number(){
    return 10;
}

string nombre(string nombre){
    return nombre;       
}

int main()
{
  cout << "Valor de number:" << number () << endl;
  string nom;
  cout << "Wie heisst du?" <<endl;
  cin >> nom;
  
  cout << "Hola " << nombre(nom) << endl;
  
  system("pause");
  return 0;
}
