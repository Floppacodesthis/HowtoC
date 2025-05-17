#include <stdio.h>
#include <string.h>

void sing(char name[], int age){
    printf("Hello %s, You are %d years old!\n", name, age);
}

int main(){
    char name[50] = "";
    int age = 0;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    sing(name, age);
    return 0;
}
