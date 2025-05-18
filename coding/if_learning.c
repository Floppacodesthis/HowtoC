#include <stdio.h>

int main()
{

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You are an adult, since you are %d years old", age);
    }
    else if (age < 0)
    {
        printf("You haven't been born yet");
    }
    else if (age == 0)
    {
        printf("You are a newborn");
    }
    else if (age >= 65)
    {
        printf("You are a senior, since you are %d years old", age);
    }
    else if (age >= 13)
    {
        printf("You are a teenager, since you are %d years old", age);
    }
    
    else{
        printf("You are a child, since you are %d years old", age);
    }
    
    return 0;
}