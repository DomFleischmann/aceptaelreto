#include <iostream>
#include <string>
using namespace std;

int main(){
  int ncasos;
  cin  >> ncasos;
  for (int i = 0; i < ncasos;i++){
    string soy, nombre;
    cin >> soy >> nombre;
    cout << "Hola, " << nombre <<"." <<endl;
  }
  return 0;
}
