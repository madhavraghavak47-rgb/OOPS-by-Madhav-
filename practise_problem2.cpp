#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main() { string names ;
cout<<"Enter the names";
    getline(cin,names);
    int n = names.length() ;
    vector<string> all_names ;
    string garbage = "";

for( int i=0;i<names.length();i++){ if(names[i]==','){
        all_names.push_back(garbage);
        garbage = "";}
    else{
        garbage += names[i];
    };
    if(i==(n-1)){
        all_names.push_back(garbage);
    break;    }
};
for (int i = 0; i < all_names.size(); i++) {
        cout << i + 1 << ": " << all_names[i] << "\n";}
return 0 ;
    }      