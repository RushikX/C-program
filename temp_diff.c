#include <stdio.h>
int main() {
    float chn[7];
    float del[7];
    float hav[7];
    float gan[7];

    
    printf("Enter the temperature of Chennai for each day of the week (in degrees Celsius):\n");
    for (int i = 0; i < 7; i++) {
        scanf("%f", &chn[i]);

      
        if (chn[i] < 28 || chn[i] > 33) {
            printf("Invalid temperature!\n");
            return 0;
        }
    }

    
    for (int i = 0; i < 7; i++) {
        del[i] = chn[i] - 8;
        hav[i] = chn[i] + 5;
    }

    for (int i = 0; i < 7; i++) {
        gan[i] = hav[i] - del[i];
    }

    
    printf("The temperature of Gangtok for each day of the week (in degrees Celsius):\n");
    for (int i = 0; i < 7; i++) {
        printf("%.2f\n", gan[i]);
    }

    return 0;
}
