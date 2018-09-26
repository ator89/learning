#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool estado=true;
    if(estado==true){
       cout<<"On"<<endl;
    }else{cout<<"off"<<endl;}
                     
    int nota;
    cout<< "Indique la nota del alumno de 0 a 10: ";
    cin>>nota;
    if(nota >=0 && nota <5)
    {
       cout << "El alumno ha sido suspendido"<<endl;
    }else{
       cout<<"Aprobado"<<endl;
    }
    
    
    system("pause");
    return 0;
}
