#include <iostream>
//Hello
using namespace std;

int main(){

  int numRep;

  cin >> numRep;

    for (int i = 0; i < numRep; i++){
      int fact;
      int result = 1;
      cin >> fact;

      if(fact > 4){
        cout << 0 << '\n';
      }else{
        for(int i = 0; i < fact; i++){
          result *= fact - i;
        }
        result %= 10;
        cout << result << '\n';
      } 
    }
  return 0;
}
