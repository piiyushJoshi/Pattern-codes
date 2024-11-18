#include <iostream>

using namespace std;

int main(){
    string s;
    cout<<"Enter a string(value of digit should be > 0 and < 100): ";
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        char alphabet = s[i];
        ++i;
        int digit = s[i]-48;
        if(i < (s.length()-1) && s[i+1] < 59){
            digit = ((s[i]-48)*10) + (s[i+1]-48);
            i++;
        }
        else
            digit = s[i]-48;
        
        for(int j=0; j<digit; j++){
            cout<<alphabet;
        }
    }

    return 0;
}
