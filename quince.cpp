#include <iostream>

using namespace std;

//argc obtner el número de argumentos totales pasados en la línea de comandos.
//es un array con los argumentos pasados en la línea de comando.
int main(int argc, char *argv[])
{
  cout<< "Numero de argumentos pasados: " << argc << endl;
  cout << "listas de argumentos: " << endl;
  for(int i=0; i<argc; i++){
     cout<< i << "argumento: " << argv[i] << endl;
  }
  
  if(argc>=3){
     int n1 = atoi(argv[1]);
     int n2 = atoi(argv[2]);
      cout << "La suma total de " << n1 << "+" << n2 << "=" << n1+n2<< endl;
  }

  
  system("pause");
  return 0;
}
