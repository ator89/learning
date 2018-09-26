#include <iostream>

using namespace std;

class Punto
{
  public:
       void setX(int x){_x=x;};
       void setY(int y){_y=y;}; 
      
  private: 
     int _x;
     int _y;       
};

class Rectangulo
{
   public:
          Rectangulo(int a, int b, int c, int d);
          ~Rectangulo(){};
          
          //accesores
          int getA() const { return _a; };
          int getB() const { return _b; };
          int getC() const { return _c; };
          int getD() const { return _d; };
          
          void setA(int a){ _a = a; };
          void setB(int b){ _b = b; };
          void setC(int c){ _c = c; };
          void setD(int d){ _d = d; };
          
          Punto getPtA() const { return _ptA; };
          Punto getPtB() const { return _ptB; };
          Punto getPtC() const { return _ptC; };
          Punto getPtD() const { return _ptD; };
          
          void setPtA(Punto loc ){ _ptA = loc; };
          void setPtB(Punto loc ){ _ptB = loc; };
          void setPtC(Punto loc ){ _ptC = loc; };
          void setPtD(Punto loc ){ _ptD = loc; };
          
          int getArea() const;
   
   private:
           int _a, _b, _c, _d;
           Punto _ptA, _ptB, _ptC, _ptD;
};
