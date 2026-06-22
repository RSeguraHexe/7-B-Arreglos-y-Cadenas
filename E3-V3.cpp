#include<iostream>
int main(){
    int profesores[100];
    int P, n; /*P: Cantidad de profesores, n: Número de alumnos votantes*/
    std::cout<<"=====================================================\n";
    std::cout<<"Ingrese la cantidad de profesores: ";
    std::cin>>P;
    std::cout<<"Ingrese el número de alumnos votantes: ";
    std::cin>>n;
    std::cout<<"=====================================================\n";
    
    for(int i=0; i<P; i++){
        profesores[i]=0;
    }

    for(int i=0; i<n; i++){
        int voto=0;
        do{
            std::cout<<"("<<i+1<<") Ingrese el voto (1 a "<<P<<"): ";
            std::cin>>voto;
        }while(voto<1||voto>P); 
        profesores[voto-1]++;
    }
    std::cout<<"=====================================================\n";

    for(int i=0; i<P; i++){
        std::cout<<"Calificacion para el profesor "<<i+1<<": "<<profesores[i]<<"\n";
    }
    std::cout<<"=====================================================\n";

    return 0;  
}