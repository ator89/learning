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
             static string color_pelo;
             float altura(float a){return a;};
             float peso(float p);
             static int edad;
      };
      
int Persona::brazos()
{
   _brazos = 2;
   return _brazos;
}

float Persona::peso(float p)
{
   return p;
}

string Persona::color_ojos = "negro";
string Persona::color_pelo = "white";
int Persona::edad = 0;
