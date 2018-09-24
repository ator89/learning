#include <iostream>
#include <string>


using namespace std;


int number(){
    return 10;
}

string nombre(string nombre){
    return nombre;       
}

int numeros(int n){
    return n;
}

//funcion con argumento opcional
int otro(int n, int opt = 10){
   return n+opt;
}

void imprimirl(string palabras=""){
     cout<<palabras<<endl;
}

bool estado(string s){
   if(s=="ok") return true;
   else return false;     
}

int main()
{
  cout << "Valor de number:" << number () << endl;
  string nom;
  cout << "Wie heisst du?" <<endl;
  cin >> nom;
  
  cout << "Hola " << nombre(nom) << endl;
  
  cout << "Funcion nueva " << otro(3)<<endl;
  
  imprimirl("hola");
  
  if(estado("ok")==true) cout << "Activado" << endl;
  else cout << "Desactivado" << endl;
  
  system("pause");
  return 0;
}
