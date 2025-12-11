#include <stdio.h>
#include <string.h>
#include "thongTinThuCung.h"
#include "tinhTong.h"
#include "thongTinCuaHang.h"

void lapChucNang(int ChonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (ChonChucNang)
        {
        case 1:
            thongTinThuCung();
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCuaHang();
            break;
        default:
            printf("|| Chuc nang hop le... hay chon tu [ 1 - 10 ]\n");
            break;
        }
        printf("\n|| Ban co muon tiep tuc thuc hien chuc nang nay? [ 1 = Co | 0 = Khong ]: ");
        scanf("%d", &tiepTuc);
        system("cls");
    }

}

int main()
{
    int ChonChucNang;
    do {
        printf("|| -------------------------- MENU CHUC NANG -------------------------- ||\n");
        printf("|| 1. Thong tin thu cung                                                ||\n");
        printf("|| 2. Tinh tong                                                         ||\n");
        printf("|| 3. Thong tin cua hang                                                ||\n");
        printf("|| 0. Thoat                                                             ||\n");
        printf("|| -------------------------------------------------------------------- ||\n");
        printf("|| Hay chon chuc nang tu [ 1 - 10 ]: ");
        scanf("%d", &ChonChucNang);
        printf("|| -------------------------------------------------------------------- ||\n");
        lapChucNang(ChonChucNang);
    } while (ChonChucNang != 0);
}
