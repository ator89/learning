#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void getValue(string valor){
     cout << valor << endl;
}

int main()
{
  vector<string> lista;
  lista.push_back("uno");
  lista.push_back("dos");
  lista.push_back("tres");
  
  for (int i = 0; i<lista.size();i++){
         cout << lista.at(i)<<endl; 
  }
  
  for_each(lista.begin(),lista.end(),getValue);
  
  
  int salto = 1;
  
  punto:
        cout << "Salto " << salto;
        cin.get();
        salto++;
        if(salto <=0) goto punto;
        
  
  
  system("pause");
  return 0;
}
