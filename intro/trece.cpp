#include <iostream>
#include <string>
#include <map>


using namespace std;

typedef pair<int, string> par;
typedef map<int,string> nombres;

int main()
{
  map<string, string> asociativo;
  asociativo["uno"] = "manzana";
  asociativo["dos"] = "pera";
  asociativo["tre"] = "naranja";
  
  cout << asociativo["dos"]<<endl;
  
  map<string,string>::iterator iter;
  
  for(iter = asociativo.begin();iter != asociativo.end(); iter++){
     cout << "Clave: " << iter->first << " Valor: " << iter->second <<endl;
  }
  
  nombres n;
  n.insert(par(1,"Nombre"));
  n.insert(par(2,"Otro"));
  
  map<int, string>::iterator ii;
  
  for(ii = n.begin();ii!=n.end();ii++){
     cout << "clave: " << ii->first << " valor: " << ii->second << endl;       
  }
  
  system("pause");
  return 0;
}
