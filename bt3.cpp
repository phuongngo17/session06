#include <stdio.h>

int main() {
    int choice;
    int a, b, c, sum, max, min;
    float average;
    printf("nhap vao 3 so nguyen");
    scanf("%d %d %d",&a,&b,&c);
    do {
        printf("CALCULATOR\n");
        printf("1. Tong 3 so nguyen\n");
        printf("2. Trung binh cong cua 3 so nguyen\n");
        printf("3. So lon nhat, nho nhat trong 3 so\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                sum = a + b + c;
                printf("Tong 3 so nguyen la: %d\n", sum);
                break;

            case 2:
                average = (float)(a + b + c) / 3;
                printf("Trung binh cong cua 3 so nguyen la: %f\n", average);
                break;

            case 3:
                max = a > b ? (a > c ? a : c) : (b > c ? b : c);
                min = a < b ? (a < c ? a : c) : (b < c ? b : c);
                printf("So lon nhat trong 3 so la: %d\n", max);
                printf("So nho nhat trong 3 so la: %d\n", min);
                break;

            case 4:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le\n");

        }
    } while (choice != 4);

    return 0;
}

