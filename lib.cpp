#include "lib.h"

bool trovNome (char proprio[20] , char nomi[10][20] , int &p){
    for(int i=0; i<10; i++){
        for(int k=0; k<20; k++){
            if(proprio[k] != nomi[i][k]){
                k=20;
            }else if(k==19){
                p=i;
                return true;
            }
        }
    }return false;
}
