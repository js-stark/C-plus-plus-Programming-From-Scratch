#include<iostream>
using namespace std;


void print(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        for(int j=n-i;j>=1;j--){
            cout<<" "<<"\t";
        }
        for(int j=n-i-1;j>=1;j--){
            cout<<" "<<"\t";
        }
        int count =i;
        if(i==n){
            count--;
        }
        for(int j=count;j>=1;j--){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}


int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}
