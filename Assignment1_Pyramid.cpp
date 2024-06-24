#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //number of lines
    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++){
            cout<<" ";
        }
        for (int j=n-i; j<n+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}