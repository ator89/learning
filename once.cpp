#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct grupo{
   int num;
   string n;
   vector<string> arr;
} cualquiera, otro;


int main()
{
  grupo obj1;
  
  obj1.num = 4;
  obj1.n = "Holaaa";
  obj1.arr.push_back("null");
  obj1.arr.push_back("eins");
  obj1.arr.push_back("zwei");
  obj1.arr.push_back("drei");
  
  cout << "Entero: " << obj1.num << "\n" << "Texto: " << obj1.n << endl;
  
  for(int i=0; i< obj1.arr.size();i++){
          cout<< i << " - " << obj1.arr[i] <<endl;       
  }  
  
  cualquiera.num = 5;
  cualquiera.n = "otro string";
  cualquiera.arr.push_back("uno");
  cualquiera.arr.push_back("dos");
  
  for(int i=0; i< cualquiera.arr.size();i++){
          cout<< i << " - " << cualquiera.arr[i] <<endl;       
  } 
  
  system("pause");
  return 0;
}
