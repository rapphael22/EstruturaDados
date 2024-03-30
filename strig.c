#include<stdio.h>

int main(){

    int age;
    char name;
    
    printf("Me informa seu nome e sobrenome.\n");
    scanf("%s", &name);

    printf("Me informa a tua idade: ");
    scanf("%d", &age);

    printf("Certo, %s voce tem %d anos de idade.", name, age);

    return 0;
}

