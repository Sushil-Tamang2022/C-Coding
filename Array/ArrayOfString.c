#include <stdio.h>
#include <string.h>

int main() {

    // array of strings = Typically a 2D character array, 
    //                                where each row is a character 
    //                                array representing a string
    
    char fruits[][10] = {"Apple", "Banana", "Coconut"};

    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'b';
    fruits[1][5] = 'A';

    fruits[2][0] = 'c';
    fruits[2][6] = 'T';

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }

    // EXERCISE
    
    char names[4][25] = {0};

    int rows = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}