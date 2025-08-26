#include <iostream>
#include <string>
using namespace std;

int main(){
  string input;
  cin>>input;
  int count = 1;
  int maxlen = 1;
  char prev = input[0];

  for(size_t i = 1; i<input.size(); ++i){

    if(input[i] != prev){
      prev = input[i];
      count = 1;
    }
    else count++;

    if(maxlen < count) maxlen = count;
  }
  cout<<maxlen<<"\n";
  return 0;
}
