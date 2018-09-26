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
          Rectangulo(int arriba, int izquierda, int abajo, int derecha);
          ~Rectangulo(){};//Destructor
          
          //accesores
          int getArriba() const { return _arriba; };
          int getIzquierda() const { return _izquierda; };
          int getAbajo() const { return _abajo; };
          int getDerecha() const { return _derecha; };
          
          void setArriba(int arriba){ _arriba = arriba; };
          void setIzquierda(int izquierda){ _izquierda = izquierda; };
          void setAbajo(int abajo){ _abajo = abajo; };
          void setDerecha(int derecha){ _derecha = derecha; };
          
          Punto getPtArribaI() const { return _ptArribaI; };
          Punto getPtAbajoI() const { return _ptAbajoI; };
          Punto getPtArribaD() const { return _ptArribaD; };
          Punto getPtAbajoD() const { return _ptAbajoD; };
          
          void setPtArribaI(Punto loc ){ _ptArribaI = loc; };
          void setPtAbajoI(Punto loc ){ _ptAbajoI = loc; };
          void setPtArribaD(Punto loc ){ _ptArribaD = loc; };
          void setPtAbajoD(Punto loc ){ _ptAbajoD = loc; };
          
          int getArea() const;
          
   private:
           int _arriba, _izquierda, _abajo, _derecha;
           Punto _ptArribaI, _ptAbajoI, _ptArribaD, _ptAbajoD;
};
