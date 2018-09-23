#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    
    cout << num << endl;
    
    int num21(-20);
    cout << num21 << endl;
    
    int n1, n2, n3, total;
    n1 = 4;
    n2 = 2;
    n3 = 5;
    total = n1+n2+n3;
    cout << n1 << "+"<<n3<<"="<<total<<endl;

    int array[] = {4,5,6,8};
    cout << "Elemento 3 del array "<<array[2]<<endl;
    
    int num1, num2;
    cout<<"Suma de numeros..."<<endl;
    cout<<"Numero 1: ";
    cin>> num1;
    cout<<"Numero 2: ";
    cin>>num2;
    cout<< num1<<"+"<<num2<<"="<<num1+num2<<endl;
    
    system("pause");
  return 0;
}
