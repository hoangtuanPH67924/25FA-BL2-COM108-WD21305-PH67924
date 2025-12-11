#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void thongTinMonHoc()
{
    char tenMH[100];
    char maMH[20];
    int soTC;

    printf("\n|| ----------- NHAP THONG TIN MON HOC ----------- || \n");
    printf("|| Nhap ten mon hoc: ");
    getchar();
    fgets(tenMH, 100, stdin);

    printf("|| Nhap ma mon hoc: ");
    fgets(maMH, 20, stdin);

    printf("|| Nhap so tin chi: ");
    scanf("%d", &soTC);

    int hocphi = soTC * 500000;

    printf("\n|| ----------- THONG TIN MON HOC ----------- ||\n");
    printf("|| Ten mon hoc: %s", tenMH);
    printf("|| Ma mon hoc: %s", maMH);
    printf("|| So tin chi: %d\n", soTC);
    printf("|| Hoc phi: %d VND\n", hocphi);

}


void tinhTongVaKiemTraLe(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++)
        tong += i;

    printf("|| Tong cac so tu 1 den %d = %d\n", n, tong);

    if (n % 2 == 0)
        printf("|| => %d la so CHAN\n", n);
    else
        printf("|| => %d la so LE\n", n);
}

void tinhSoLe_Menu() {
    int n;
    do {
        printf("|| Nhap mot so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    tinhTongVaKiemTraLe(n);
}


void thongTinDiemLabs() {
    int soSV;
    float diem[100];

    printf("|| Nhap so sinh vien: ");
    scanf("%d", &soSV);

    for (int i = 0; i < soSV; i++) {
        printf("|| Nhap diem sinh vien %d: ", i + 1);
        scanf("%f", &diem[i]);
    }

    printf("|| ----------- DANH SACH DIEM ----------- ||\n");
    for (int i = 0; i < soSV; i++) {
        printf("|| SV %d: %.2f\n", i + 1, diem[i]);
    }

    float tong = 0;
    float max = diem[0];
    int demDau = 0;

    for (int i = 0; i < soSV; i++) {
        tong += diem[i];
        if (diem[i] > max) max = diem[i];
        if (diem[i] >= 5) demDau++;
    }

    float diemTB = tong / soSV;

    printf("|| ----------- KET QUA ----------- || \n");
    printf("|| Diem trung binh: %.2f\n", diemTB);
    printf("|| Diem cao nhat  : %.2f\n", max);
    printf("|| So sinh vien co diem >= 5: %d\n", demDau);
}


void lapChucNang(int chon) {
    int tiepTuc = 1;

    while (tiepTuc == 1) {
        switch (chon) {
        case 1:
            thongTinMonHoc();
            break;

        case 2:
            tinhSoLe_Menu();
            break;

        case 3:
            thongTinDiemLabs();
            break;

        default:
            printf("|| Chuc nang khong hop le xin vui long chon tu [ 1 - 3 ]\n");
        }

        printf("|| Ban co muon tiep tuc thuc hien chuc nang nay khong? ( 1 = Co | 0 = Khong ): ");
        scanf("%d", &tiepTuc);
        system("cls");
    }
}


int main() {
    int chon;

    do {
        printf("|| ----------- MENU CHUC NANG ----------- || \n");
        printf("|| 1. Thong tin mon hoc                   || \n");
        printf("|| 2. Tinh tong so le                     || \n");
        printf("|| 3. Thong tin diem Lab                  ||\n");
        printf("|| 0. Thoat                               ||\n");
        printf("|| -------------------------------------- ||\n");
        printf("|| Moi chon chuc nang tu [ 1 - 3 ]: ");
        scanf("%d", &chon);

        if (chon != 0)
            lapChucNang(chon);

    } while (chon != 0);

    return 0;
}
