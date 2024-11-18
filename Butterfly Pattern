#include <iostream>

using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n*2;j++){
            if(j<=i+1 || j>=(n*2)-i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++){
        for(j=1;j<=n*2;j++){
            if(j<=n-i || j>=n+i+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
