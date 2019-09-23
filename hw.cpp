#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

char lerMensagem(){
    char s[10];
    cin >> s;
    return(s);
}

void mostrarMensagem(){
    cout << lerMensagem() << endl;
}

int main(void){
    mostrarMensagem();
    return(0);
}
