#include <iostream>

using namespace std;

class Persona{
      private:
              int _ojos;
              int _brazos;
              int _cabeza;
              string _nombre;
              string _apellido;
      public:
             Persona(string n, string a);
             int ojos(){return _ojos;
                 };
                 
             int brazos();
             int cabeza() { return _cabeza; };
             static string color_ojos;
             static string color_pelo;
             float altura(float a){return a;};
             float peso(float p);
             static int edad;
             string nombre(){return _nombre;};
             string apellido() {return _apellido;};
      };
      
      
Persona::Persona(string n, string a)
{
   _ojos = 2;
   _brazos = 2;
   _cabeza = 1;
   _nombre = n;
   _apellido = a;
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
