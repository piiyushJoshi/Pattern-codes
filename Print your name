#include <bits/stdc++.h>

using namespace std;

int main(){
    string output;
    cout<<"Enter the string you want to be printed: \n";
    getline(cin, output);
    string alphabet = " AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQRrSsTtUuVvWwXxYyZz";
    for(int i=0;i<output.size();i++){
        int j=0;
        while(alphabet[j] != output[i]){
            int k=0;
            while(k<i){
                cout<<output[k];
                k++;
            }
            usleep(50000);
            cout<<alphabet[j]<<endl;
            j++;
        }
        usleep(65000);
    }
    cout<<endl<<output;

    return 0;
}
