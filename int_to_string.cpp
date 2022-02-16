#include <iostream>

using namespace std;

string intToString(int number) {
    bool stop = false;
    string convert = "";
    int n = 0;

    while(stop != true) {
        n = number % 10;
        convert += (char)(n+48);
        number = (number - n) / 10;
        if(number == 0) {stop = true;}
    }

    return convert;
}

string reversingString(string s) {
    string newString = "";
    for(int i=s.length()-1; i>=0; i--) {
        newString += s[i];
    }
    return newString;
}

int main() {
    int number = 12345;
    cout << reversingString(intToString(number)) << endl;
    return 0;
}
