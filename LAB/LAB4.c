#include <stdio.h>

int main() {
    char emp_id[11];         // ตัวแปรสำหรับรหัสพนักงาน (สูงสุด 10 ตัวอักษร + 1 สำหรับ null terminator)
    float hours_worked;      // ตัวแปรสำหรับจำนวนชั่วโมงที่ทำงาน
    float hourly_rate;       // ตัวแปรสำหรับรายได้ต่อชั่วโมง
    float total_income;      // ตัวแปรสำหรับรายได้รวมทั้งหมด

    // รับข้อมูลจากผู้ใช้
    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%s", emp_id);  // ใช้ %s เพื่อรับค่ารหัสพนักงานเป็น string

    printf("Input the working hrs: ");
    scanf("%f", &hours_worked);  // รับจำนวนชั่วโมงที่ทำงาน

    printf("Salary amount/hr: ");
    scanf("%f", &hourly_rate);  // รับรายได้ต่อชั่วโมง

    // คำนวณรายได้ทั้งหมด
    total_income = hours_worked * hourly_rate;

    // แสดงผล
    printf("\nEmployees ID = %s\n", emp_id);  // แสดงรหัสพนักงาน
    printf("Salary = U$ %.2f\n", total_income);  // แสดงรายได้ในรูปแบบสกุลเงิน U$

    return 0;
}