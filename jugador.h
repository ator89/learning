#include <iostream>
#include "person.h"

using namespace std;

class Jugador : public Persona
{
   protected:
             string _deporte;
      
   public:
   Jugador(string n, string a, string deporte) : Persona(n,a)
   {
      this->_deporte=deporte;              
   };
   
   string getDeporte()
   {
     return this->_deporte;
   }
   
   string cambiar_nombre(Jugador& d, string n)
   {
      if(&d == this) return _nombre = n;
      else return "Error";
   }
};

