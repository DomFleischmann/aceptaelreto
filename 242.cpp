#include <iostream>

using namespace std;

int main(){
  int numPaises;

  cin >> numPaises;
  long long result = 0;
  long long sum = 0;
  while(numPaises != 0){
    long long personas[numPaises];
    for(int i = 0; i < numPaises;i++){
      cin >> personas[i];
    }

    sum +=personas[numPaises - 1];
    for(int j = numPaises - 2; j >= 0; j--){
      result += sum * personas[j];
      sum += personas[j];
    }

    cout << result << '\n';
    cin >> numPaises;
    result = 0;
    sum = 0;
  }
  return 0;
}
