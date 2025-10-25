/* Use a 3D array to represent RGB image pixels and find the average color intensity.*/
#include <stdio.h>

int main() {
    int r, c;
    int i, j, k;
    float sumR = 0, sumG = 0, sumB = 0;
    printf("Enter  (height of image): ");
    scanf("%d", &r);
    printf("Enter  (width of image): ");
    scanf("%d", &c);
    int image[r][c][3];
    printf("\nEnter RGB values for each pixel (0–255):\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Pixel (%d,%d): ", i + 1, j + 1);
            for (k = 0; k < 3; k++) {
                scanf("%d", &image[i][j][k]);
            }
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sumR += image[i][j][0];
            sumG += image[i][j][1];
            sumB += image[i][j][2];
        }
    }
    int tpix = r * c;
    float avgR = sumR / tpix;
    float avgG = sumG / tpix;
    float avgB = sumB / tpix;
    printf("\nAverage Color Intensities:\n");
    printf("Red   = %.2f\n", avgR);
    printf("Green = %.2f\n", avgG);
    printf("Blue  = %.2f\n", avgB);
 return 0;
}
