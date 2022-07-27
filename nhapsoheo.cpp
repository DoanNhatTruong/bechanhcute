#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
struct HEO
{
    char MaSo[7];
    int GiongHeo, SoThangTuoi;
    float TrongLuong;
};
void Nhap1ConHeo(HEO &H);
void Xuat1ConHeo(HEO H);
void NhapMangHeo(HEO A[], int &n);
void XuatMangHeo(HEO A[], int n);
void ChenConHeo(HEO A[], int &n, HEO heo, int vitri);
int main()
{
    HEO A[100], heo;
    int n, vitri;
    NhapMangHeo(A, n);
    printf("   DANH SACH CAC CON HEO  \n ");
    XuatMangHeo(A, n);
    printf("nhap con heo can chen vao danh sach: \n ");
    Nhap1ConHeo(heo);
    printf("vi tri chen con heo trong danh sach \n");
    scanf("%d", &vitri);
    ChenConHeo(A, n, heo, vitri);
    printf("danh sach cac con heo sau khi chen \n");
    XuatMangHeo(A, n);
    return 0;
}
void Nhap1ConHeo(HEO &H)
{
    printf("\nNhap Ma So Cua Heo ");
    fflush(stdin);
    gets(H.MaSo);
    do
    {
        printf("\nNHAP GIONG HEO(1-5)");
        scanf("%d", &H.GiongHeo);
        if (H.GiongHeo < 1 && H.GiongHeo > 5)
            printf("vui long nhap lai ");
    } while (H.GiongHeo < 1 && H.GiongHeo > 5);
    printf("\nNhap So Thang Tuoi Cua Heo: ");
    scanf("%d", &H.SoThangTuoi);
    printf("\nNhap Trong Luong Cua Heo: ");
    scanf("%f", &H.TrongLuong);
    printf("\n");
}
void Xuat1ConHeo(HEO H)
{
    printf("%-7s \t", H.MaSo);
    if (H.GiongHeo == 1)
    {
        printf("Heo Yorkshire");
    }
    else if (H.GiongHeo == 2)
    {
        printf("Heo Landrace");
    }
    else if (H.GiongHeo == 3)
    {
        printf("Heo MeiShan");
    }
    else if (H.GiongHeo == 4)
    {
        printf("Heo Duroc");
    }
    else
    {
        printf("Heo Pietran");
    }
    printf("\t %7d \t", H.SoThangTuoi);
    printf("%-8.2f kg \n", H.TrongLuong);
}
void NhapMangHeo(HEO A[], int &n)
{
    do
    {
        printf("  Nhap So Luong Heo ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        printf("\n Nhap Con Heo Thu %d ", i + 1);
        Nhap1ConHeo(A[i]);
    }
}
void XuatMangHeo(HEO A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat1ConHeo(A[i]);
    }
}
void ChenConHeo(HEO A[], int &n, HEO heo, int vitri)
{
    for (int i = n; i > vitri; i--)
    {
        A[i] = A[i - 1];
        A[vitri] = heo;
        
        n++;
    }
}
strcmp
