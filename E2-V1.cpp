#include<iostream>
int main(){
    char cadena[20]; std::string c="P";
    int n=0;
    std::cin>>cadena;
    for(int i=0; i<20; i++){
        if(cadena[i]=='\0'){
            n=i;    
            break;
        }
    }
    for(int i=0; i<=(n/2); i++){
        if(cadena[i]!=cadena[n-(i+1)]){
            c="NP";
            break;
        }
    }
    std::cout<<c;
}