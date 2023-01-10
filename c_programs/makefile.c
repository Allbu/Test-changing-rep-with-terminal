#include <stdio.h>

int main(){
int a;
int s[10];
for (a=0;a<10;a++){
s[a]=a;

}
//printf("%d", s[2]);

FILE *arquivo =fopen("oi.txt", "wb+");
fwrite(&s[0],sizeof(int),1,arquivo);
fclose(arquivo);


return 0;

}

