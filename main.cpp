#include <stdio.h>
#include <stdlib.h>
int main() {
  float n1;
  float n2;
  float media;
  float exame;

  printf("digite a primeira nota:  ");
  scanf("%f", &n1);
  printf("digite a segunda nota:  ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;
  if (media >= 5) {
    printf("APROVADO!!!");
  } else {
    printf("Voce não foi aprovado \n faça o exame: ");
    scanf("%f", exame);
    if (((media + exame) / 2) >= 5) {
      printf("APROVADO!!!");
    } else {
      printf("o aluno ficará de DP");
    }
  }

  return 0;
}