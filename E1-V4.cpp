#include<iostream>
#include<cstdlib>
int main(){
    int n=0, arreglo[200];
    while(n<=0){
        system("cls");
        std::cin>>n;
    }
    for(int i=0; i<n; i++){
        std::cin>>arreglo[i];
    }
    for(int i=n-1; i>=0; i--){
        std::cout<<arreglo[i]<<"\n";
    }
}