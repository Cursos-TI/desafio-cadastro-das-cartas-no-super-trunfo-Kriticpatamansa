#include <stdio.h>

int main(){
    
   int  turistico,pop;
   float area, pib;
   char estado[3], codigo[4];

   

   printf("Eai, me diz qual é a sigla para o nosso novo estado? (insira a UF)  \n");
   scanf("%s", estado);

   printf("Qual é a população desse estado?  \n");
   scanf("%d",&pop);

   printf("e a Área territorial? \n");
   scanf("%f",&area);

   printf("PIB? Agora eu quero ver! \n");
   scanf("%f",&pib);

   printf("Quantos pontos turísticos?  \n");
   scanf("%d",&turistico);

   printf("Tudo certo. Agora dê um código para sua carta. Utilize uma letra seguida de dois números.  \n");
   printf("exemplo: A01 \n");   
   scanf("%s",codigo);
   

   printf("Beleeza! Sua carta foi registrada com sucesso. O feedback está abaixo:  \n");
   printf("xxx \n");  
   printf("_____________________________________ \n");  
   printf("Estado: %s \n", estado);
   printf("Pop.: %d \n", pop);
   printf("Área territorial: %.2f Km² \n",area);
   printf("PIB: %.2f de reais \n",pib);
   printf("N° de pontos turísticos: %d \n",turistico);
   printf("Cod.: %s \n",codigo);
   printf("____________________________________ \n");  
   printf("xxx \n");
   printf("xxx \n");
   printf("BOA SORTE! \n");


}