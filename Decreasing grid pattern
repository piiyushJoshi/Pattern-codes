/* 3 3 3 3 3
   3 2 2 2 3
   3 2 1 2 3 
   3 2 2 2 3 
   3 3 3 3 3 */
   
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int edge = (2*n)-1;
    for(int i=0; i<edge; i++){
        for(int j=0; j<edge; j++)
            cout<<n - (min(min(j,edge-j-1), min(i, edge-i-1)))<<" ";
        
        cout<<endl;
    }

    return 0;
}
