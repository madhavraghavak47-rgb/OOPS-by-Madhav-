#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
int main(){ 
    ofstream outfile("Text.txt");
    outfile<<"this is line 1"<<endl;
    outfile<<"this is line 2"<<endl;
    outfile.close();

 string stri ;

ifstream infile("Text.txt");
    getline(infile,stri);
    cout<<stri<<endl;
    string x;
    getline(infile,x);
    cout<<x<<endl;
    infile.close();
    return 0;

}