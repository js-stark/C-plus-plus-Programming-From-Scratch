#include<iostream>
using namespace std;


void print(int n){

    for(int i=1; i<=n;i++){

        for(int j=n-i;j>0;j--){
            cout<<" "<<"\t";
        }

        for(int j=i;j<=2*i-1;j++){
            cout<<j<<"\t";
        }

        for(int j=2*i-2;j>=i;j--){
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
