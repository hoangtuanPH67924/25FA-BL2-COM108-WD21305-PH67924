#pragma once

void kiemTraSoNguyen()
{
	int n, So = 1;
	printf("|| Nhap 1 so nguyen: ");
	scanf("%d", &n);
	double can = sqrt(n);
	if (n > 0) {
		printf("|| Day la so nguyen duong\n");
	}
	else if (n < 0) {
		printf("|| Day  la so nguyen am\n");
	}
	else {
		printf("|| Day la so 0\n");
	}
	if (n <= 1) {
		printf("|| Day khong phai la so nguyen to \n");
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				So = 0;
			}
		}
	}
	if (So) {
		printf("|| Day la so nguyen to \n", n);
	}
	else {
		printf("|| Day khong phai la so nguyen to \n", n);
	}
	if (n < 0) {
		printf("|| Day khong phai la so chinh phuong\n", n);
	}
	else if (pow(can, 2) == n) {
		printf("|| Day  la so chinh phuong\n", n);
		printf("|| -------------------------------------------------------------------- ||\n");
	}
	else {
		printf("|| Day khong phai la so chinh phuong\n", n);
		printf("|| -------------------------------------------------------------------- ||\n");
	}
}