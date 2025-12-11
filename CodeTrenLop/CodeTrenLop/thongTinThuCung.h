#pragma once

void thongTinThuCung() {
    char ma[20];
    char ten[50];
    int namSinh;

    printf("\n|| ---------------- THONG TIN THU CUNG ---------------- || \n");

    printf("|| Nhap ma thu cung: ");
    scanf("%s", ma);

    printf("|| Nhap ten thu cung: ");
    getchar();
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0';

    printf("|| Nhap nam sinh thu cung: ");
    scanf("%d", &namSinh);

    int tuoi = 2025 - namSinh;

    printf("\n|| ---------------- Ket qua ---------------- || \n");
    printf("|| Ma: %s\n", ma);
    printf("|| Ten: %s\n", ten);
    printf("|| Nam sinh: %d\n", namSinh);
    printf("|| Tuoi hien tai: %d\n", tuoi);
}