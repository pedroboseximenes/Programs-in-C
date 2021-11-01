#include <stdio.h>
int main()
{
float cand1, cand2, cand3, total;
float porc1, porc2, porc3;
printf("Quantos votaram em cada candidato?\n");
scanf("%f %f %f", &cand1, &cand2, &cand3);
total = cand1 + cand2 + cand3;
porc1 = (cand1/ total) * 100;
porc2 = (cand2/ total) * 100;
porc3 = (cand3 / total) * 100;
printf("%f\n", porc3);
if (porc1 >= 50.0){
printf("O primeiro candidato ganhou\n");
}
if (porc2 >= 50.0){
printf("O segundo candidato ganhou\n");
}
if (porc3 >= 50.0){
printf("O terceiro ganhou\n");
}
else{
  if (porc1 > porc2 && porc3 > porc2){
   printf("Votos no segundo Turno? Primeiro ou Terceiro candidato ? \n");
   scanf("%f, %f", &cand1, &cand3);
   total = cand1 + cand3;
   porc1 = (cand1/total) * 100;
   porc3 = (cand3/total) * 100;
   if (porc1 > porc3)
     printf("O primeiro ganhou");
   else
     printf("O terceiro ganhou");
  }
}
  if (porc1 > porc3 && porc2 > porc3){
   printf("Votos no segundo Turno? Primeiro ou Segundo candidato ? \n");
   scanf("%f, %f", &cand1, &cand2);
   total = cand1 + cand2;
   porc1 = (cand1/total) * 100;
   porc2 = (cand2/total) * 100;
   if (porc1 > porc2)
     printf("O primeiro ganhou");
   else
     printf("O segundo ganhou");
  }
   if (porc3 > porc1 && porc2 > porc1){
   printf("Votos no segundo Turno? Terceiro ou Segundo candidato ? \n");
   scanf("%f, %f", &cand3, &cand2);
   total = cand3 + cand2;
   porc3  = (cand3/total) * 100;
   porc2 = (cand2/total) * 100;
   if (porc3 > porc2)
     printf("O terceiro ganhou");
   else
     printf("O segundo ganhou");
   }
}