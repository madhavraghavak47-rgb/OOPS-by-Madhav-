#include <iostream>
using namespace std;
#include <string>

int main(){
    string word = " nigger abhay ";
    int length = word.length();
    int v=0;
    int c= 0;
   for (int i = 0; i < length; i++) { 
        char ch = word[i]; // Added missing semicolon
        
        // Fixed the mismatched bracket on 'O'
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') { 
            v++;
        } 
        else if (ch == ' ') {
            continue;
        } 
        else {
            c++;
        } 
    } // Removed extra semicolons

    if (v >= c) {
        cout << "vowels";
    } else {
        cout << "consonants"; // Fixed spelling
    }
return 0;
}