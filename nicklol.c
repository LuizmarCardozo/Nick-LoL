#include <stdio.h>
#include <string.h>



int main()
{

char str[17];


printf("Digite o seu nink: ");
scanf("%s", str);

    if ( strlen (str) >= 16){
   
   printf("Seu nick pode ser utilizado\n");
    
}else{
    
    printf("Seu Nick está muito grande\n");
}





    return 0;
}