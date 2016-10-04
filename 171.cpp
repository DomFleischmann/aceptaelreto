#include <iostream>

using namespace std;

int main(){
  int montanas[100000];

  int numMont;

  int highestMont = 0;
  cin >> numMont;
  while(numMont != 0){
    for (int i = 0; i < numMont;i++){
      cin >> montanas[i];
    }

    int cont = 0;

    for(int j = numMont - 1 ; j >= 0; j--){
      if(highestMont < montanas[j]){
        highestMont = montanas[j];
        cont++;
      }
    }
    cout <<cont<<'\n';

    cont = 0;
    highestMont = 0;
    cin >> numMont;
  }
}
