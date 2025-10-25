/* Mathematics teacher wants to demonstrate the concept of symmetry and sequence formation to students using alphabets instead of numbers.
 The idea is to form an Alphabet Pyramid - where each new row adds one more letter in sequence (A, B, C, …). 
 This visually represents how arithmetic progression and triangular patterns work in mathematics. Write a C program that generates an Alphabet Pyramid,
  where each row increases sequentially,
 forming a triangular number pattern that demonstrates both symmetry and series growth. */
 #include <stdio.h>

int main() {
    int r, i, j, ch = 65;  
    printf("Enter the number of rows for the Alphabet Pyramid: ");
    scanf("%d", &r);
    printf("\nAlphabet Pyramid Pattern:\n\n");
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= r - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  
            if (ch > 'Z')  
                ch = 'A';
        }

        printf("\n");  
    }

    return 0;
}

