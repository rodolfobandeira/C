#include <stdio.h>
#include <pthread.h>
/* Incluindo a biblioteca POSIX THREAD */


void *imprime_mensagem(void *ptr);
/* Declarando a function imprime_mensagem
conforme o manual da function pthread_create 
nos diz */


int main()
{
    pthread_t t1, t2;
/* t1 e t2 serao threads */


    char *msg1 = "primeiro";
    char *msg2 = "segundo";
/* Define os ponteiros msg1 e msg2
com os seus valores "primeiro" e "segundo"
*/


/* Ao criar o thread para imprimir a mensagem 1,
logo em seguida ja é criado outro thread. Ele nao espera
o primeiro thread terminar. O resultado é a saida
do programa com a mensagem "Segundo" antecedendo a palavra
"Primeiro".

Isto foi corrigido adicionando a function pthread_join.
Ela foi colocada para aguardar até que o pthread t1 termine.

pthread_join é semelhante ao wait conhecido para aguardar a 
finalizacao de processos.

Com o pthread_join, antes é mostrado a mensagem "primeiro"
e depois é mostrado a mensagem "segundo".
*/
    pthread_create(&t1, NULL, imprime_mensagem, (void*)msg1);
    pthread_join(t1, 0);
    pthread_create(&t2, NULL, imprime_mensagem, (void*)msg2);
    pthread_join(t2, 0);
/* com a function pthread_join(t2,0); o programa aguarda
até que o thread t2 finalize para assim finalizar o programa.
Isto evita que o thread fique rodando em background
*/
    
    return 0;
    /* Finaliza o Programa */
}

/* Aqui esta a function imprime_mensagem */
void *imprime_mensagem(void *ptr)
{
    char *mensagem = (char *)ptr;
    printf("%s ", mensagem);
    return NULL;
/* Recebe o conteudo do parametro ptr e coloca em 
um ponteiro mensagem. Esta mensagem é impressa pelo printf
na tela. Como é uma function do tipo void, seu 
retorno é nulo.
*/

}

