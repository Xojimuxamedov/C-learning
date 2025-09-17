#include <stdio.h>

int main(){

    int age = 0; 
    float gpa = 0.0f; 
    char letter = '\0';
    char name[30] = "";

    printf("yosh kiritin: ");
    scanf("%d", &age);

    printf("gpa kiritin: ");
    scanf("%f", &gpa);

    printf("char kiritin: ");
    scanf(" %c", &letter);

    getchar();
    printf("ism kiritin: ");
    fgets(name, sizeof(name), stdin);

    printf("yoshingiz: %d\n", age);
    printf("gpa: %f\n", gpa);
    printf("char: %c\n", letter);
    printf("ism familya: %s\n", name);
    return 0; 
};