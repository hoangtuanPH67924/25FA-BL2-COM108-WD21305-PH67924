#pragma once

void thongTinCuaHang() {
    int soLuong;
    float canNang[100];

    printf("\n|| ---------------- THONG TIN CUA HANG ---------------- || \n");

    printf("|| Nhap so luong thu cung: ");
    scanf("%d", &soLuong);

    for (int i = 0; i < soLuong; i++) {
        printf("|| Nhap can nang thu cung %d: ", i + 1);
        scanf("%f", &canNang[i]);
    }

    float tong = 0;
    float min = canNang[0];

    for (int i = 0; i < soLuong; i++) {
        tong += canNang[i];
        if (canNang[i] < min) min = canNang[i];
    }

    float tb = tong / soLuong;

    int dem = 0;
    for (int i = 0; i < soLuong; i++) {
        if (canNang[i] < tb) dem++;
    }

    printf("\n|| ---------------- Ket qua ---------------- || \n");
    printf("Can nang trung binh: %.2f\n", tb);
    printf("Can nang thap nhat: %.2f\n", min);
    printf("So thu cung co can nang duoi muc trung binh: %d\n", dem);
}