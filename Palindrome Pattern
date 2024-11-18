#include <iostream>
using namespace std;

int main(){
    int i,j,n,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for(i=1;i<=n;i++){
        k=n;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
            k--;
        }
        for(j=n;j>0;j--){
            if(j>n-i)
                cout<<k<<" ";
            k--;
        }
        for(j=1;j<=i;j++){
            if(j==1)
                continue;
            else
                cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
