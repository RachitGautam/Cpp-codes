#include <iostream>
using namespace std; //our series is 1-2 + 3-4 +5...
int main(){
    int n;
    cin>>n;

    int result=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
    cout<<result<<endl;

    return 0;
}