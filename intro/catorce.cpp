#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    vector<string> uniarray;
    uniarray.push_back("null");
    uniarray.push_back("eins");
    uniarray.push_back("zwei");
    uniarray.push_back("drei");
    for(int i =0; i < uniarray.size();i++){
        cout << i << " - " << uniarray[i] << endl;
    }
    
    int const uno = 2;
    int const dos = 2;
    int arr[uno][dos] = {{1,2},{3,4}};
    cout << arr [0][1]<<endl;
    cout << arr [1][0]<<endl;
    
    for(int x=0; x < uno;x++){
        cout <<  "a: " << x << " B: " << arr[x][0] << ":" << arr[x][1]<<endl;        
    }
    
    map<int, map<int, string> > bd;
    bd[0][0] = "eins";
    bd[0][1] = "zwei";
    bd[1][0] = "drei";
    bd[1][1] = "vier";
    
    map<int, map<int, string> >::iterator iter;
    for(iter = bd.begin(); iter !=bd.end();iter++){
        cout << "Primero: " << iter->first << " Segundo: " << iter ->second[0]<< ":"<< iter->second[1]<<endl;
    }
    
    system("pause");
  return 0;
}
