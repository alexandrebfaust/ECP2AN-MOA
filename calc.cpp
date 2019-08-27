/*
20/09/2018
Esse trabalho 
*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{

// Seção de Declarações das variáveis 
   float ForcaPparaCima,ForcaPParaBaixo,ForcaQParaCima,ForcaQParaBaixo,EGPa,ETransformado,monstroET,ENm,monstroENm,EPa,DeslocamentoAB,AreaTransversal,LarguraAB,ETransformado2;
   int Caso1,Caso2;

// Seção de Comandos, procedimento, funções, operadores, etc... 
   printf("Ola Vamos Comecar Indicando a elasticidade do material, o [E]\n");
   printf("Digite a informação:\n");
   printf("Se estiver em GPa Digite [0]\n");
   printf("Se estiver em N/m^2 [1]\n");
   printf("Se estiver em Pa digite [2]\n");

    printf("Digite a opção:\n");

    scanf("%f",&Caso1);

if (Caso1=0){


        printf ("Digite o Valor de E em [GPa]\n");
        scanf("%f",&EGPa);
        monstroET = (EGPa * 1000000000);
        printf ("seu valor de E em Pa fica:\n");
        printf ("%f",monstroET);
        printf ("Valor da sua Area Transversal [em M^2]\n");
        scanf("%f",&AreaTransversal);
        printf ("Valor da sua Largura [em M]\n");
        scanf("%f",&LarguraAB);
         printf("se a força for para cima digite 1\n");
         printf("se a força for para baixo digite 2\n");
         scanf("%f",&Caso2);

         if(Caso2=1){
              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPparaCima);
              DeslocamentoAB = ((ForcaPparaCima * LarguraAB) / (monstroET * AreaTransversal));
               printf (" O Valor do Deslocamento é:\n");
               printf ("%f",DeslocamentoAB);
               printf (" em metros\n");
               system("Pause>>null\n");
         }

         if(Caso2=2){
              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPParaBaixo);
              DeslocamentoAB = (((ForcaPParaBaixo * (-1)) * LarguraAB) / (monstroET * AreaTransversal));
               printf (" O Valor do Deslocamento é:\n");
               printf ("%f",DeslocamentoAB);
               printf (" em metros\n");
               system("Pause>>null\n");
        }

         else{
         printf("Opção inválida\n");
         system("Pause>>null\n");
         }
                   
}


if(Caso1=1){

        printf ("Digite o Valor de E em [N/m^2]\n");
        scanf("%f",&monstroENm);
        ETransformado2 = (monstroENm);
        printf ("seu valor de E em Pa fica:",ETransformado2);
        printf ("Valor da sua Area Transversal [em M^2]\n");
        scanf("%f",&AreaTransversal);
        printf ("Valor da sua Largura [em M]\n");
        scanf("%f",&LarguraAB);
         printf("se a força for para cima digite 1\n");
         printf("se a força for para baixo digite 2\n");
         scanf("%f",&Caso2);

         if(Caso2=1){
              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPparaCima);
              DeslocamentoAB = ((ForcaPparaCima * LarguraAB) / (ETransformado2 * AreaTransversal));
               printf (" O Valor do Deslocamento é:",DeslocamentoAB," em metros\n");
               system("Pause>>null\n");
         }

         if(Caso2=2){
              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPParaBaixo);
              DeslocamentoAB = (((ForcaPParaBaixo * (-1)) * LarguraAB) / (ETransformado2 * AreaTransversal));
               printf (" O Valor do Deslocamento é:\n");
               printf ("%f",DeslocamentoAB);
               printf (" em metros\n");
               system("Pause>>null\n");
         }

         else{
         printf("Opção inválida\n");
         system("Pause>>null\n");
         }

}


if(Caso1=2){

        printf ("Digite o Valor de E em [Pa]\n");
        scanf("%f",&EPa);
        printf ("Valor da sua Area Transversal [em M^2]\n");
        scanf("%f",&AreaTransversal);
        printf ("Valor da sua Largura [em M]\n");
        scanf("%f",&LarguraAB);
         printf("se a força for para cima digite 1\n");
         printf("se a força for para baixo digite 2\n");
         scanf("%f",&Caso2);
         if(Caso2=1){

              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPparaCima);
              DeslocamentoAB = ((ForcaPparaCima * LarguraAB) / (EPa * AreaTransversal));
               printf (" O Valor do Deslocamento é:\n");
               printf ("%f",DeslocamentoAB);
               printf (" em metros\n");
               system("Pause>>null\n");

         }

         if(Caso2=2){
              printf ("Valor da Sua Força [em N]\n");
              scanf("%f",&ForcaPParaBaixo);
              DeslocamentoAB = (((ForcaPParaBaixo * (-1)) * LarguraAB) / (EPa * AreaTransversal));
               printf (" O Valor do Deslocamento é:\n");
               printf ("%f",DeslocamentoAB);
               printf (" em metros\n");
               system("Pause>>null\n");
         }

         else{
         printf("Opção inválida\n");
         system("Pause>>null\n");
         }
}

else{
      printf("Opção inválida\n");
      system("Pause>>null\n");
} 

  system("Pause>>null\n");

}
