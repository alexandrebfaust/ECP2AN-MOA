/*
20/09/2018
Esse trabalho do caralho
*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main();
{

// Seção de Declarações das variáveis 
   float Forca_P_para_Cima,Forca_P_Para_Baixo,Forca_Q_Para_Cima,Forca_Q_Para_Baixo,E_GPa,E_Transformado,E_Transformado1,E_Nm,E_Transformado,E_Pa,Deslocamento_AB,Area_Transversal,Largura_AB;
   int Caso_1,Caso_2;


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   printf("Ola Vamos Comecar Indicando a elasticidade do material, o [E]");
   printf("Digite a informação:");
   printf("Se estiver em GPa Digite [0]");
   printf("Se estiver em N/m^2 [1]");
   printf("Se estiver em Pa digite [2]");

    printf("Digite a opção:");

    scanf("%f",&Caso_1);

if (Caso_1=0);
    {


        printf ("Digite o Valor de E em [GPa]");
        scanf("%f",&E_GPa);
        E_Transformado1 = (E_GPa * 1000000000);
        printf ("seu valor de E em Pa fica:");
        printf (E_Transformado1);
        printf ("Valor da sua Area Transversal [em M^2]");
        scanf("%f",&Area_Transversal);
        printf ("Valor da sua Largura [em M]");
        scanf("%f",&Largura_AB);
         printf("se a força for para cima digite 1");
         printf("se a força for para baixo digite 2");
         scanf("%f",&Caso_2);

         if(Caso_2=1){
              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_para_Cima);
              Deslocamento_AB = ((Forca_P_para_Cima * Largura_AB) / (E_Transformado1 * Area_Transversal));
               printf (" O Valor do Deslocamento é:");
               printf (Deslocamento_AB);
               printf (" em metros");
               system("Pause>>null");
         }

         if(Caso_2=2){
              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_Para_Baixo);
              Deslocamento_AB = (((Forca_P_Para_Baixo * (-1)) * Largura_AB) / (E_Transformado1 * Area_Transversal));
               printf (" O Valor do Deslocamento é:");
               printf (Deslocamento_AB);
               printf (" em metros");
               system("Pause>>null");
         else{
         printf("Opção inválida");
         system("Pause>>null");
         }
                   
}

if(Caso_1=1){

        printf ("Digite o Valor de E em [N/m^2]");
        scanf("%f",&E_Nm2);
        E_Transformado2 = (E_Nm2);
        printf ("seu valor de E em Pa fica:",E_Transformado2);
        printf ("Valor da sua Area Transversal [em M^2]");
        scanf("%f",&Area_Transversal);
        printf ("Valor da sua Largura [em M]");
        scanf("%f",&Largura_AB);
         printf("se a força for para cima digite 1");
         printf("se a força for para baixo digite 2");
         scanf("%f",&Caso_2);

         if(Caso_2=1){
              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_para_Cima);
              Deslocamento_AB = ((Forca_P_para_Cima * Largura_AB) / (E_Transformado2 * Area_Transversal));
               printf (" O Valor do Deslocamento é:",Deslocamento_AB," em metros");
               system("Pause>>null");
         }

         if(Caso_2=2){
              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_Para_Baixo);
              Deslocamento_AB = (((Forca_P_Para_Baixo * (-1)) * Largura_AB) / (E_Transformado2 * Area_Transversal));
               printf (" O Valor do Deslocamento é:");
               printf (Deslocamento_AB);
               printf (" em metros");
               system("Pause>>null");
         }

         else{
         printf("Opção inválida");
         system("Pause>>null");
         }

}


if(Caso_1=2){

        printf ("Digite o Valor de E em [Pa]");
        scanf("%f",&E_Pa);
        printf ("Valor da sua Area Transversal [em M^2]");
        scanf("%f",&Area_Transversal);
        printf ("Valor da sua Largura [em M]");
        scanf("%f",&Largura_AB);
         printf("se a força for para cima digite 1");
         printf("se a força for para baixo digite 2");
         scanf("%f",&Caso_2);
         if(Caso_2=1){

              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_para_Cima);
              Deslocamento_AB = ((Forca_P_para_Cima * Largura_AB) / (E_Pa * Area_Transversal));
               printf (" O Valor do Deslocamento é:");
               printf (Deslocamento_AB);
               printf (" em metros");
               system("Pause>>null");

         }

         if(Caso_2=2){
              printf ("Valor da Sua Força [em N]");
              scanf("%f",&Forca_P_Para_Baixo);
              Deslocamento_AB = (((Forca_P_Para_Baixo * (-1)) * Largura_AB) / (E_Pa * Area_Transversal));
               printf (" O Valor do Deslocamento é:");
               printf (Deslocamento_AB);
               printf (" em metros");
               system("Pause>>null");
         }

         else{
         printf("Opção inválida");
         system("Pause>>null");
         }
}

else{
      printf("Opção inválida");
      system("Pause>>null");
} 

  system("Pause>>null");

}