#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  vector<string> lista;
  lista.push_back("uno");
  lista.push_back("dos");
  lista.push_back("tres");
  
  for (int i = 0; i<lista.size();i++){
         cout << lista.at(i)<<endl; 
  }
  
  system("pause");
  return 0;
}
