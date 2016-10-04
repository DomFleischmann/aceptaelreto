#include <iostream>

using namespace std;

int main(){
  int numtoros , vmax = 0;
  long long toros;
  
  bool salir = false;

  while (!salir){
    cin >> numtoros;
    if(!cin){
      salir = true;
    }else{
      for (int i = 0; i < numtoros;i++){
        cin >> toros;
        if (toros > vmax)
          vmax = toros;
      }
     
      cout << vmax << '\n';
      vmax = 0; 
    }
  }
  return 0;
}
