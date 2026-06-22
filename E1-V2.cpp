#include<iostream>
int main(){
    int n, arreglo[1000];
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>arreglo[i];
    }
    for(int i=n-1; i>=0; i--){
        std::cout<<arreglo[i]<<"\n";
    }
}