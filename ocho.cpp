#include <iostream>

using namespace std;

int main()
{
  int array[10]={1,2,3,4,5,6,7,8,9,10};
  int lengthA = sizeof(array)/sizeof(int);
  
  for(int i=0;i<lengthA;i++){
     cout << i <<" - "<< array[i]<<endl;
  }
  
  
  char arraychar[5] = "hola";
  
  for (int t=0;t<strlen(arraychar);t++){
      if(t==2)continue;
      cout << t << " - " << arraychar[t]<<endl;
     }
  
  
  int x;
  int y;
  for( x=0,y=10; x!=y; x++, y--){
     cout << "x:" << x << ", y:" << y << endl;
  }
  
  
  system("pause");
  return 0;
}
