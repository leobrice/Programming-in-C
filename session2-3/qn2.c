#include <stdio.h>
#include <ctype.h>

int main() {
    char name[50];
    char Upper;

    printf("Enter a name: ");
    scanf("%s", name);

    // Capitalize the first character and store in Upper
    Upper = toupper(name[0]);

    // Print the capitalized first character
    printf("Capitalized name: %c", Upper);

    // Print the rest of the string directly
    printf("%s\n", &name[2]);

    return 0;
}
