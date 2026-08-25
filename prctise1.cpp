#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){int i = 0;

    string data = "Madhav Verma,2512004" ;
    int length = data.length();
    string name = "";
    string roll_no = "";

while(data[i]!=','){ name += data[i];
    i++;

};
cout<<name<<endl;
i++;
while(i<length){roll_no+=data[i];
    i++;

};
cout<<roll_no<<endl;
return 0;
}

