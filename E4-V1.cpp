#include <iostream>
int main(){
    int N, C;                          /*N: cantidad de vasitos, C: cantidad de canicas lanzadaxc*/
    int vasos[50];
    std::cout<<"Cantidad de vasitos: "; std::cin>>N;
    std::cout<<"Cantidad de canicas lanzadas: "; std::cin>>C;
    for(int i=0; i<N; i++){
        vasos[i]=0;
    }
    for(int i=0; i<C; i++){
        int canica;
        std::cout<<"Canica numero "<<i+1<<" cayo en el vaso numero: "; std::cin>>canica;
        vasos[canica-1]=vasos[canica-1]+1;
    }
    for(int i=0; i<N; i++){
        std::cout<<"El vaso numero "<<i+1<<" tiene un total de "<<vasos[i]<<" canicas."<<std::endl;
    }
}