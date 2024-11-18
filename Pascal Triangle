#include <iostream>

using namespace std;

int fact(int a){
    int fact = 1;
    while(a){
        fact = fact*a;
        a--;
    }
    return fact;
}

int combination(int n,int r){
    double sum = 1;
    for(int i = 1; i <= r; i++)
        sum = sum * (n-r+i) / i;
    return (int)sum;
}

int main(){
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
            cout<<combination(i,j)<<" ";
        cout<<endl;
    }
    return 0;
}
