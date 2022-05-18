#include <stdio.h>

int sum = 0;
int inf = 0, sup = 0; //inf= inferior, sup= superior

int temperatura (int v[31], int t) {
    for(int i=0; i < t; i++) {
    printf("digite a temperatura do dia %d: ", i+1);
    scanf("%d",&v[i]);
    sum += v[i];
  }
}

void media(int v[10],int t){
  int me;
  me = sum/t;
  printf("\na media das temperaturas é: %d\n",me);
  for(int j = 0; j < t; j++){ 
    if(v[j] < me) {
      inf++;
    } else {
      sup++;
    }
  }
}

int main(void) {
  int t=31; 
  int v[10];
  //chama os dois procedimentos 
  temperatura(v,t);
  media(v,t);
  printf("\ntemperatura abaixo da média: %d dias\n",inf);
  printf("temperatura acima da média: %d dias\n",sup);
  return 0;
}
