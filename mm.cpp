#include<stdio.h>
#include<string.h>

void movements(char str[3]) {
    char c1 = str[0];
    int n = str[1] - '0';

    // Print squares horizontally
    printf("Horizontal movements for %c%d:\n", c1, n);
    for (char i = 'a'; i <= 'h'; i++) {
        if (i != c1) {
            printf("%c%d\n", i, n);
        }
    }

    // Print squares vertically
    printf("Vertical movements for %c%d:\n", c1, n);
    for (int j = 1; j <= 8; j++) {
        if (j != n) {
            printf("%c%d\n", c1, j);
        }
    }
}

int main() {
    // Number of test cases:
    int t;
    do {
        printf("Enter the number of test cases (1-64): ");
        scanf("%d", &t);
    } while (t < 1 || t > 64);

    // Test cases:
    char cases[t][3];
    for (int i = 0; i < t; i++) {
        printf("\nEnter test case number %d: ", i + 1);
        scanf("%2s", cases[i]);

        while (cases[i][0] > 'h' || cases[i][0] < 'a' || cases[i][1] < '1' || cases[i][1] > '8') {
            printf("Invalid input. Please reenter a suitable case: ");
            scanf("%2s", cases[i]);
        }
    }

    // All squares where the rook can move:
    char s[3];
    for (int k = 0; k < t; k++) {
        printf("\nAll squares where the rook can move for case %d are:\n", k);
        strcpy(s, cases[k]);
        movements(s);
    }

    return 0;
}

