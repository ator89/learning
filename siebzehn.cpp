#include <iostream>
#include "persona.h"

using namespace std;

int main(int argc, char *argv[]){

   Persona p;
   cout << "Una persona: " << p.ojos()<<endl;
   cout << p.brazos()<<endl;
   cout << p.cabeza() << endl;
   cout << p.color_ojos << endl;
    
   system("pause");
   return 0;
}
