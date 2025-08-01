#include <stdio.h>

int main() 
{
    int N;

    // รับค่าตัวเลขจากผู้ใช้
    printf("Enter value: ");
    if (scanf("%d", &N) != 1) 
    {
        // ถ้าผู้ใช้ใส่ตัวอักษรหรือค่าที่ไม่ใช่ตัวเลข
        printf("Please enter a valid number\n");
        return 1; // Exit if input is not an integer
    }

    // ตรวจสอบว่า N เป็นเลขคี่หรือเลขคู่
    if (N % 2 != 0) 
    {
        // ถ้า N เป็นเลขคี่ ให้แสดงลำดับตัวเลขคี่จาก 1 ถึง N
        printf("Series: ");
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else 
    {
        // ถ้า N เป็นเลขคู่ ให้แสดงลำดับตัวเลขคู่จาก N ถึง 0
        printf("Series: ");
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
