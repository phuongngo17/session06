#include <stdio.h>

int main() {
    int n,choice;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    do {
        printf("PRACTICE\n");
        printf("1. In day so chia het cho 2 va giam dan (n >= so >= 2)\n");
        printf("2. In cac so nho hon n va tinh tong\n");
        printf("3. In ra cac uoc so chan cua n\n");
        printf("4. In ra cac uoc so le va so luong cac uoc la cua n\n");
        printf("5. In ra uoc so la lon nhat cua n\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int i;
                for (i = n; i >= 2; i--) {
                    if (i % 2 == 0) {
                        printf("%d\n", i);
                    }
                }
                break;
            }

            case 2: {
                int i, sum = 0;
                for (i = 0; i < n; i++) {
                    if (i < n) {
                        printf("%d\n", i);
                        sum += i;
                    }
                }
                printf("Tong cac so la: %d\n", sum);
                break;
            }

            case 3: {
                int i;
                for (i = 2; i <= n; i++) {
                    if (n % i == 0 && i % 2 == 0) {
                        printf("%d\n", i);
                    }
                }
                break;
            }

            case 4: {
                int i, count = 0;
                for (i = 2; i <= n; i++) {
                    if (n % i == 0 && i % 2 != 0) {
                        printf("%d\n", i);
                        count++;
                    }
                }
                printf("So luong uoc so le: %d\n", count);
                break;
            }

            case 5: {
                int i, max_odd_divisor = 1;
                for (i = 2; i <= n; i++) {
                    if (n % i == 0 && i % 2 != 0) {
                        if (i > max_odd_divisor) {
                            max_odd_divisor = i;
                        }
                    }
                }
                printf("uoc so le lon nhat cua n la: %d\n", max_odd_divisor);
                break;
            }

            case 6: {
                printf("Thoat chuong trinh\n");
                break;
            }

            default: {
                printf("Lua chon khong hop le\n");
                break;
            }
        }
    } while (choice != 6);

    return 0;
}

