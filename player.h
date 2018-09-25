#include <iostream>
#include "person.h"

using namespace std;

class Player : public Persona
{
   protected:
             string _deporte;
      
   public:
   Player(string n, string a, string deporte) : Persona(n,a)
   {
      _deporte=deporte;              
   };
   
   string getDeporte()
   {
     return _deporte;
   }
   

};

