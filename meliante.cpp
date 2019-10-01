#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int Meliante(int number){
    int meli, aux = 0;
    
    while(number != 0){
        aux = (aux * 10) + (number % 10);
        
        if(aux % 1000 == 171){
            meli = aux % 1000;
            break;
        }
        number = number / 10;
    }
   /* if(meli == 171){
        cout << "Meliante";
    }else{
        cout << "Not a Meliante";
    }*/
    return meli;
}

int main(){
    int num, meli, nBackup;
    char op;
    
    while(op != 'e'){
        cout << "Meliante to verify:";
        cin >> num;
        nBackup = num;

        meli = Meliante(num);

        if(meli == 171){
            cout << nBackup << " is meliante" << endl;
        }else{
            cout << nBackup << " is not meliante" << endl;
        }
     printf("Type E to Exit or something else to continue: \n");
     scanf(" %c", &op);
     system("clear");
    }
    return 0;
}