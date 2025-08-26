#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> input(n);

  for(int i = 0; i<n; ++i){
    cin>>input[i];
  }
  
  long long moves = 0;

  if(n>1){
    for(int i = 1; i<n; ++i){
      if(input[i] < input[i-1]){
        moves += (long long)input[i-1]-input[i];
        input[i] = input[i-1];
      }
    }
  }

  cout<<moves<<"\n";
  return 0;
}
