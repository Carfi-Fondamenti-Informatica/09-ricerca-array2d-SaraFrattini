#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char nomi [10][20] ;
    char proprio[20] ;
    int p=1;
    for(int i=0; i<10; i++){
        for(int k=0; k<20; k++){
            nomi[i][k]=' ';
            proprio[k]=' ';
        }
    }
    for(int i=0; i<10; i++){
        cin >> nomi[i];
    }
    cin>>proprio;
    if(trovNome(proprio, nomi, p)){
        cout << p << endl;
    }else{
        cout << "non presente" << endl;
    }
  return 0;
}
