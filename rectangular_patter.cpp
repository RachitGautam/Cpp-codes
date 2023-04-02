#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n; //number of rows
    cin>>m;//number of columns
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl; 
    }
    return 0;
}