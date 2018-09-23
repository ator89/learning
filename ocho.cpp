#include <iostream>

using namespace std;

int main()
{
  int array[10]={1,2,3,4,5,6,7,8,9,10};
  int lengthA = sizeof(array)/sizeof(int);
  
  for(int i=0;i<lengthA;i++){
     cout << i <<" - "<< array[i]<<endl;
  }
  
  system("pause");
  return 0;
}
