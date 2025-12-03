#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void kiemTraTongChiaHetCho3()
{
	int n, i;
	int a[100];
	int tong = 0, diem = 0;
	float tbc;

	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			tong += a[i];
			diem++;
		}
	}

	if (diem == 0)
	{
		printf("Khong co so nao chia het cho 3 nen khong tinh TBC duoc!\n");
	}
	else
	{
		tbc = (float)tong / diem;
		printf("Tong cac so chia het cho 3 = %d\n", tong);
		printf("Co %d so chia het cho 3\n", diem);
		printf("TBC cac so chia het cho 3 = %.2f\n", tbc);
	}

	printf("\n");
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraTongChiaHetCho3();
			break;
		case 2:
			// ham goi chuc nang 2
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("|---------------------------| Menu |---------------------------|\n");
		printf("|========================= | Lab 6  | =========================|\n");
		printf("| 1. TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG     |\n");
		printf("| 2. TEN chuc nang 2                                           |\n");
		printf("| 3. TEN chuc nang 3                                           |\n");
		printf("| 0. Thoat                                                     |\n");
		printf("|--------------------------------------------------------------|\n");
		printf("| Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184