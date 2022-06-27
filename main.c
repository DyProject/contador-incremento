#include <stdio.h>

int valor_inicial = 0;
int valor_atual = 0;
int incremento = 1;

/*Tarefa JAMILLE*/
void incrementar(){
    valor_atual = valor_atual + incremento;
}

/*Tarefa Pedro*/
void decrementar(){

}

/*Tarefa JAMILLE*/
void reiniciar(){
    valor_atual = valor_inicial;
}

/*Tarefa Pedro*/
void setar_incremento(int inc){

}

/*Tarefa JAMILLE*/
void setar_valor_inicial(int valor){
    valor_inicial=valor;
}

/*Tarefa Pedro*/
void setar_valor_atual(int valor){

}

int main(int argc, char const *argv[])
{
    char opcao = '+';
    while(opcao != '0') {
        printf("Opcoes: [+] Incrementar, [-] Decrementar, [*] Reiniciar, [i] Novo incremento, [n] Novo valor atual, [v] Novo valor inicial,[0] Sair: ");
        scanf("%c", &opcao);
        fflush(stdin);

        if(opcao == '+') {
            incrementar();
        } else if(opcao == '-') {
            decrementar();
        }else if(opcao == '*') {
            reiniciar();
        }else if(opcao == 'v') {
            int valor;
            printf("Novo valor: ");
            scanf("%d", &valor);
            setar_valor_inicial(valor);
        }

        printf("valor atual: %d, valor inicial: %d, incremento: %d \n", valor_atual, valor_inicial, incremento);
    }

    return 0;
}
