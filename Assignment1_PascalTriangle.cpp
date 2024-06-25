#include <iostream>
using namespace std;
int ncr(int n, int r){
    int ans = 1;
    if (r > n - r)
        r = n - r;
    for (int i = 0; i < r; ++i) {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}
int main(){
    int N;
    cin>>N;
    for (int i=0; i<N; i++){
        for (int j=0;j<=i;j++){
            cout<<ncr(i,j);
        }
        cout<<endl;
    }
}