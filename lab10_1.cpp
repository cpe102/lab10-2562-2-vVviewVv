// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    string a,b,c;
    string g;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

        int r = rand()%9 + 1;

        if (r == 1) g = "A";
        else if (r == 2) g = "B+";
        else if (r == 3) g = "B";
        else if (r == 4) g = "C+";
        else if (r == 5) g = "C";
        else if (r == 6) g = "D+";
        else if (r == 7) g = "D";
        else if (r == 8) g = "F";
        else if(r == 9) g = "W";

        cout << "You will get " << g << " in this 261102.";
    

    return 0;
    
}
