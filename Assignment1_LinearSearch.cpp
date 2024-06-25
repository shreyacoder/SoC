#include <iostream>
using namespace std;
int main(){
    int n, arr[100000], k;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;
    bool flag=0;
    for (int i=0; i<n; i++){
        if (arr[i]==k){
            cout<<i;
            flag=1;
            break;
        }
    }
    if (not flag ) cout<<-1;
}