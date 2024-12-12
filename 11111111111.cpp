#include <stdio.h>

int main() {
    int loaiTien;
    float soTien, ketQua;
    const float tyGiaUSD = 23500, tyGiaEUR = 25000, tyGiaGBP = 28000, tyGiaJPY = 180;

    printf("Chon dong ban muon doi:\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap lua chon: ");
    scanf("%d", &loaiTien);

    printf("Nhap so tien ban muon doi: ");
    scanf("%f", &soTien);

    switch (loaiTien) {
        case 1:
            ketQua = soTien * tyGiaUSD;
            printf("%.2f USD sap si %.2f VND\n", soTien, ketQua);
            break;
        case 2:
            ketQua = soTien * tyGiaEUR;
            printf("%.2f EUR sap si %.2f VND\n", soTien, ketQua);
            break;
        case 3:
            ketQua = soTien * tyGiaGBP;
            printf("%.2f GBP sap si %.2f VND\n", soTien, ketQua);
            break;
        case 4:
            ketQua = soTien * tyGiaJPY;
            printf("%.2f JPY sap si %.2f VND\n", soTien, ketQua);
            break;
        case 5:
            ketQua = soTien / tyGiaUSD;
            printf("%.2f VND sap si %.2f USD\n", soTien, ketQua);
            break;
        case 6:
            ketQua = soTien / tyGiaEUR;
            printf("%.2f VND sap si %.2f EUR\n", soTien, ketQua);
            break;
        case 7:
            ketQua = soTien / tyGiaGBP;
            printf("%.2f VND sap si %.2f GBP\n", soTien, ketQua);
            break;
        case 8:
            ketQua = soTien / tyGiaJPY;
            printf("%.2f VND sap si %.2f JPY\n", soTien, ketQua);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

