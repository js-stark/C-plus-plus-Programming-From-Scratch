#include<iostream>
#include<string.h>

using namespace std;

int main(){

    cout<<"Enter the number of rows needed\n";
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
             cout<<" ";

        }
        for(int k=i; k<=2*i-1;k++){
            cout<<k;
        }
        for(int l=2*i-2; l>=i;l--){
            cout<<l;
        }
        cout<<endl;
    }


    return 0;
}
