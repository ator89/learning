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
    
    
    
    system("pause");
  return 0;
}
