//Grupo C05 - Alunos: Dennis Almeida, Lucas do Nascimento, Tatiana Gonçalves

#define ex5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

#ifdef ex1
/*
1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os vetores como variavel
    global)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
char vetNome[5][7];

main()
{
    int i,j;
    char sair;

    setlocale(LC_ALL,"");
do{
    printf("Digite cinco nomes:\n");
    for(i=0; i<5; i++)
    {
        printf("%d Nome: ",i+1);
        scanf("%s",&vetNome[i][0]);
    }


    for(i=0; i<1; i++)
        for(j=4; j<5; j++)
            {
                printf("        10        20        30        40        50\n");
                printf("12345678901234567890123456789012345678901234567890\n");
                printf("  %-7s                                 %-7s\n",vetNome[i],vetNome[j]);
            }

        for(i=1; i<2; i++)
            for(j=3; j<4; j++)
    {
      //printf("        10        20        30        40        50\n");
      //printf("12345678901234567890123456789012345678901234567890\n");
        printf("            %-7s             %-7s\n",vetNome[i],vetNome[j]);
    }

    for(i=2; i<3; i++)
    {
      //printf("        10        20        30        40        50\n");
      //printf("12345678901234567890123456789012345678901234567890\n");
        printf("                      %-7s",vetNome[i]);
    }
    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));


}
#endif // ex1

#ifdef ex2
/*
2 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)
*/
char vetStr1[10];
char vetStr2[10];

int comparar()
{
    int i = 0;
    do
        {
        if(vetStr1[i] != vetStr2[i])
        {
            printf("As strings são diferentes\n");
            return 2;
        }
        else
        {
            printf("As strings são iguais\n");
        }
        i++;
        }while(vetStr1[i] != 0);
return 1;
}

main()
{
    setlocale(LC_ALL,"");

    char sair;

do{
    printf("Digite a primeira string\n");
    scanf("%s",&vetStr1);
    getchar();

    printf("Digite a segunda string\n");
    scanf("%s",&vetStr2);
    getchar();

    comparar();

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));
}


#endif // ex2

#ifdef ex3
/*
3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/


main()
{
    setlocale(LC_ALL,"");

    char caracter[10];
    char sair;
    int i;
do{
    printf("Digite 10 caracteres minúsculas\n");

    for(i=0; i<10; i++)
    {
        printf("%d caracter: ",i+1);
        scanf("%c",&caracter[i]);
        getchar();
    }

    printf("Carecters maiúsculas\n");
    printf("%s\n",strupr(caracter));

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

}

#endif // ex3

/*
4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.
*/
#ifdef ex4
main()
{
    setlocale(LC_ALL,"");

    char caracter[10];
    char sair;
    int i;
do{
    printf("Digite 10 caracteres maiúsculas\n");

    for(i=0; i<10; i++)
    {
        printf("%d caracter: ",i+1);
        scanf("%c",&caracter[i]);
        getchar();
    }

    printf("Carecters minúsculas\n");
    printf("%s\n",strlwr(caracter));

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

}

#endif // ex4

#ifdef ex5

char palavra[20];

main()
{
    setlocale(LC_ALL,"");

    char sair;

do{
   lerPalavra();
    ascii();

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

}

void lerPalavra()
{
    printf("Digite uma palavra de máximo 20 letras: ");
    scanf("%s",&palavra[0]);
}

int ascii()
{
    int i;

    for(i=0; i<20; i++)
    {
        if(palavra[i] != '\0')
        {
            printf("%d\n",palavra[i]+1);
        }
    }
}


#endif // ex5
