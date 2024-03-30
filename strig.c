#include<stdio.h>
#include<libgen.h>

int main(){

    
    char name, age;
    
    printf("Me informa seu nome e sobrenome.\n");
    scanf("%s", &name);

    printf("Me informa a tua idade: ");
    scanf("%s", &age);

    printf("Certo, %s voce tem %s anos de idade.", name, age);

    return 0;
}

