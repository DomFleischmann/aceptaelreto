#include <iostream>
#include <string>
using namespace std;

int main(){
  int num ;
  cin >> num;
  while(num != 0){
    if(num % 2 == 0)
      cout << "DERECHA";
    else
      cout << "IZQUIERDA";

    cin >> num;
  }
  return 0;
}
