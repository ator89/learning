#include <iostream>


using namespace std;

int main()
{
  bool m = true;
  char op;
  
  while(m){
  
     cout << "Menu\n" << "a - sumar\n" << "b - restar\n" << "x - salir\n" << endl;
     cin >> op;
     
     switch(op){
     
        case 'a':
             break;
        case 'b':
             break;
        default:
                cout << "Opcion invalida" << endl;
                m=false;
             break;
     
     }
  
  }    

  system("pause");
  return 0;
}
