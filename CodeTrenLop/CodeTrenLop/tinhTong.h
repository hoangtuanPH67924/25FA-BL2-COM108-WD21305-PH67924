#pragma once

void tinhTong() {
    int n;
    printf("\n|| ---------------- TINH TONG ---------------- || \n");
    printf("|| Nhap so nguyen duong n (n > 3): ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("|| n phai > 3!\n");
        return;
    }

    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) tong += i;
    }

    printf("|| Tong cac so le tu 1 den %d = %d\n", n, tong);

    if (n % 5 == 0) printf("|| n chia het cho 5\n");
    else printf("|| n KHONG chia het cho 5\n");
}