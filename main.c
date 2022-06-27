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
    valor_atual=valor_atual--;
}


/*Tarefa JAMILLE*/
void reiniciar(){
    valor_atual = valor_inicial;
}

/*Tarefa Pedro*/
void setar_incremento(int inc){
    incremento=inc;
}

/*Tarefa JAMILLE*/
void setar_valor_inicial(int valor){

}

/*Tarefa Pedro*/
void setar_valor_atual(int valor){
    valor_atual=valor;
}


int main(int argc, char const *argv[])
{
    char opcao = '+';
    while(opcao != '0') {
        printf("Opcoes: [+] Incrementar, [-] Decrementar, [*] Reiniciar, [i] Novo incremento, [c] Novo valor atual, [v] Novo valor inicial,[0] Sair: ");
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
        }else if(opcao == 'i') {
            int valorIncremento;
            printf("Novo valor de Incremento: ");
            scanf("%d", &valorIncremento);
            setar_incremento(valorIncremento);
         }else if(opcao == 'c') {
            int valorAtual;
            printf("Novo valor atual: ");
            scanf("%d", &valorAtual);
            setar_valor_atual(valorAtual);
         }



        printf("valor atual: %d, valor inicial: %d, incremento: %d \n", valor_atual, valor_inicial, incremento);
    }

    return 0;
}
