#include <iostream>

using namespace std;

class Persona{
      private:
              int _ojos;
              int _brazos;
              int _cabeza;
              
      public:
             Persona();
             int ojos(){return _ojos;
                 };
                 
             int brazos();
             int cabeza() { return _cabeza; };
             static string color_ojos;
             static string color_pelo;
             float altura(float a){return a;};
             float peso(float p);
             static int edad;
      };
      
Persona::Persona()
{
   _ojos = 2;
   _brazos = 2;
   _cabeza = 1;
}
      
int Persona::brazos()
{
   return _brazos;
}

float Persona::peso(float p)
{
   return p;
}

string Persona::color_ojos = "negro";
string Persona::color_pelo = "white";
int Persona::edad = 0;
