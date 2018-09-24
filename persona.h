#include <iostream>

using namespace std;

class Persona{
      private:
              int _ojos;
              int _brazos;
              int _cabeza;
              
      public:
             int ojos(){
                 _ojos = 2;
                 
                 return _ojos;
                 };
                 
             int brazos();
             int cabeza() { _cabeza=1; return _cabeza; };
             static string color_ojos;
      };
      
int Persona::brazos()
{
   _brazos = 2;
   return _brazos;
}

string Persona::color_ojos = "negro";

