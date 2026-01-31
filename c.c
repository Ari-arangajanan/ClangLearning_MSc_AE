#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{

    int age;
    char name[20] = {'a', 'e', 'd', 'f'};
    char gender[] = "male";

    printf("%s \n", name);
    printf("%s \n", gender);


    char jname[20];
    scanf("%s", jname);
    if(strlen(jname) > 2) {
        printf("%s \n", name);
    }
    printf("age mem location \n %s", jname);
    return 0;
}
