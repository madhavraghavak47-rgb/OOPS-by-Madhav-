#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(){ 
    vector<string> all_names ;
    vector<string> all_rollno ;
    int length ;
    string garbage;
    string text ;

    ifstream infile("Text.txt");
    getline(infile,garbage);

    while(getline(infile ,text )){
        int i= 0 ;
        int length = text.length();
        string name = "";
        string rollno = "";
        while(text[i]!=','){ 
           name += text[i];
           i++;
        };
        all_names.push_back(name);
        i++; 
        while(i<length){
            rollno+=text[i];
             i++;
        };
        all_rollno.push_back(rollno);
    };

for(int x=0;x<all_names.size();x++){
    cout<<"name"<<x+1<<":"<< all_names[x]<<endl;

};

for(int y=0; y<all_rollno.size();y++){
    cout<<"rollno of student : "<<y<<" is :"<<all_rollno[y]<<endl;
};

return 0;
}