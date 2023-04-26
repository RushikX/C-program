#include <stdio.h>
#include <string.h>
int main() {
    char password[10] = "aeiceg";
    char input[3][3];
    char concat[7];
    int i, j, k = 0;

    printf("Enter the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }
    concat[k++] = input[0][0];
    concat[k++] = input[1][1];
    concat[k++] = input[2][2];
    concat[k++] = input[0][2];
    concat[k++] = input[1][1];
    concat[k++] = input[2][0];
    concat[k] = '\0';    
    if (strcmp(concat, password) == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
