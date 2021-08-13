#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;

    printf("Bir harf giriniz\n");
    scanf("%c", &harf);

    if((harf>='a' && harf<='z') || (harf>='A' && harf<='Z')){
        printf("%c harfiniz alfabe de bulunmaktadir.\n", harf);
    }
    else{
        printf("Alfabe de yok.\a");
    }
    return 0;
}
