#include <iostream>

using namespace std;

int main()
{
  //float 4 bytes, double 8 bytesm long double 12 bytes
  float decimal1=12.23;
  float decimal2, decimal3, decimal4;
  decimal2=1.1;
  decimal3=2.2;
  decimal4=43.3;
  const float pi = 3.14;
  
  cout << pi*decimal2;
  
  float array[] = {3.3,4.2,5.4,3.7};
  
  //sizeof() devuelve el num de bytes totales de un elemento
  int length = sizeof(array)/sizeof(float);
  
  for(int i=0;i<length;i++){
    cout<<array[i]<<endl;        
  }
  
  string s = "", lista[]={"uno","dos","tres","cuatro","5"};
  
  for (int i=0;i<sizeof(lista)/sizeof(string);i++){
      s+=lista[i]+"\n";
      }
      cout << s<<endl;
  
  int entero;
  float decimal;
  cout<<"Sumando...";
  
  cout<<"entero1: ";
  cin>> entero;
  cout<<"decimal: ";
  cin>> decimal;
  cout<< entero << "+"<<decimal<<"="<<entero+decimal<<endl;
  
  
  system("pause");
  return 0;
}
