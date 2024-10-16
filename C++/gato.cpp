#include <iostream>
void printTablero(char tablero[9]){
    std::cout<<tablero[0]<<" | "<<tablero[1]<<" | "<<tablero[2]<<std::endl;
    std::cout<<"---------"<<std::endl;
    std::cout<<tablero[3]<<" | "<<tablero[4]<<" | "<<tablero[5]<<std::endl;
    std::cout<<"---------"<<std::endl;
    std::cout<<tablero[6]<<" | "<<tablero[7]<<" | "<<tablero[8]<<std::endl;

}
bool checarGanador(char tablero [9]){
    bool resultado;
for (int i = 0; i < 9; i = i+3){
    if(tablero[i] == tablero[i+1] && tablero[i+1] == tablero[i+2]  ){
        return resultado = true;
    }

    
}
for (int i = 0; i < 9; i = i+1){
    if(tablero[i] == tablero[i+3] && tablero[i+3] == tablero[i+6] ){
        return resultado =  true;
    }
    
    
}

    if(tablero[0] == tablero[4] && tablero[4] == tablero[8] ){
        return resultado =  true;}

    if(tablero[2] == tablero[4] && tablero[4] == tablero[6] ){
        return resultado =  true;}

return resultado = false;
}
int main(){
    char elementos_tablero[]={'1','2','3','4','5','6','7','8','9'};
    char jugador = 'X';
    int opcion;
    int turnos=0;
    do{
        std::cout<<"Turno del jugador "<<jugador<<std::endl;
        printTablero(elementos_tablero);
        std::cout<<"Elige una posicion (1-9): ";
        std::cin>>opcion;
        if(opcion>9 || opcion<1 || elementos_tablero[opcion-1] == 'O' || elementos_tablero[opcion-1] == 'X'){
            std::cout<<"Opcion invalida, vuelve a intentarlo"<<std::endl;
            continue;
        }
        elementos_tablero[opcion-1]=jugador;
        if(checarGanador(elementos_tablero)){
            std::cout<<"Felicidades!! el ganador ha sido el jugador "<<jugador<<std::endl;
            break;
        }
        jugador= jugador=='X'? 'O' : 'X';
        turnos++;
    }while(turnos<9);
    std::cout<<"Juego finalizado."<<std::endl;
    printTablero(elementos_tablero);
    return 0;
    }
