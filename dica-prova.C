/* 
Resumo pra prova em codigo 
Primeira coisa a se lembrar é que a linguagem C é case sensitive ou seja pra ela maiusculo e minusco sao diferentes
*/

// comentário de um linha
/* comentário de um bloco de linhas*/

#include <stdio.h>//aqui incluimos uma biblioteca , que e nada mais um local onde ja possui funcoes prontas como printf() e scanf()
#include <math.h> //biblioteca matemática
#define CONSTANTE 2; //definir constantes - boa prática colocar constante com letra maiúscula.
//Sitaxe: <nome> <valor>

//todo codigo C necessita de uma funcao main (){} 
int main (){
	//declaração de variáveis
    //regras para identificadores: não pode conter espaço, caracteres especiais e nem começar com numeros	
    //boa prática: variáveis são escritas em letras minusculas ou upperCamelCase, ou seja, as próximas palavras com a primeira letra maiúscula
    int a ;//int e para numeros inteiros , a letra "a" apos o int e o nome da variavel, ou seja, seu identificador 
    float b,c,f;//float sao pra numeros reais , ou seja numero casas decimais. A virgula entre os identificadores "b" e "c", faz com que se crie duas variaves com nomes diferente, porem mesmo tipo 
    double d;//double e uma versao do float mais estendida , ocupando mais espaco na memoria e por isso, gera maior precisão numérica
    char e ;//char e do tipo caracter (só recebe uma única letra), e o ";"encerra a linha de codigo
char nome[10],lugar[50]; //se forem mais letras, como um nome, é preciso definir a quantidade máxima de caracteres

    printf("Uma otima prova a todos :");//funcao apresenta na tela o texto ou caraceter que for colocado dentro das aspas duplas
    scanf("%d",&a);//função que armazena o valor digitado na variavel indicada 
    //Obs : e preciso colocar no scanf p & pois ele indica o endereco de memoria que o valor digitado sera armazenado
    printf("Me forneca o double :");
    scanf("%lf",&d);


    printf("Me forneÃ§a outros floars :");
    scanf("%f%f",&c,&f);//aqui o scanf() pega duas informaÃ§oes diferentes e aloca ela em spaÃ§os de memoria diferente e determinados
    //%d e uma mascara para numeros inteiros 
    //%s para strings 
    //%c para char
    //%f para float 
    //%lf para double 
   
   printf("Me forneça a string :");
   fflush(stdin);//limpa o licho de memoria ,libreando espaço pra string
   scanf("%s",&nome);

    printf("Me forneça o lugar : ");
    fgets(lugar,50,stdin); //limpa e ja recebe o text (neste caso e permitido o uso do espaco)

    if ( a == 1)//area destina a condicao
    {
        //area para o codigo caso a condicao de verdadeiro
       printf ("Vc digitou %d",a);//aqui nao colocamos o & pq nao estamos inserindo valor apenas pegando
    }  else/*faz com que caso a condiÃ§ao de Cima nao de verdadeiro ele rode esse outro codigo*/{printf("E ne ");}   
 if (a == 2){
        if ( a < b )
        {
            printf("%d",a+b);///o printf pode tambem realizar soma dentrod dele
           printf("O real e maior que o inteiro ");
        }
    }

    switch (a)
    {
    case  1 /* constant-expression */:
        printf ("Vc digitou %d",a);
        break; //e necessario o break pois se nao ele adicionaria todos abaixo da condiÃ§ao que deu verdadeiro, e OU SEJA, ELE FINALIZA O SWITCH QDO O CASO é ACEITO.
    
    default: //codigo que será executado caso nennhum dos casos sejam aceitos.
        break;
    }

//funções matemáticas importantes
//pow(x,y)
//sqrt(x)


/*% pode ser usado em calculos e o resultado desse calco e o resto de uma divisao
Operadores: 
-AritmÃ©tico: 
+ => SOMA 
- => SUBTRAÃ‡AO 
/ => RESULTADO COM NUMEROS REAIS (EX: 11/2 
=5.5) 
\ => RESULTADO COM NUMEROS INTEIROS (11\2 = 5) 
% => MODULO (RESTO DA DIVISAO) 
 
-RELACIONAIS:(todo operador relacional retorna um resultado logico) 
< MENOR  
<= MENOR OU IGUAL 
>  MAIOR 
>= MAIOR OU IGUAL 
!=  DIFERENTE  
==   IGUAL 
 
-Logicos:  
E - Conjunção --> verdadeiro se TODAS as condições forem verdadeiras
Ou - disjunção --> verdadeiro se UMA das condições for verdadeira
! Ou NAO negação
 
-Caracter: 
+ concatenação  
 
Obs: 
& = e comercial = código de endereÃ§amento (apenas entrada de dados) 
*/
}
