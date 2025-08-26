#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;
    int x;
    long long input_sum = 0;
    for(int i = 1; i< n; ++i){
        cin>>x;
        input_sum += x;
    }
    cout<<sum-input_sum<<"\n";
    return 0;
}