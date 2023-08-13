/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);

    long long term = 9;
    long long seriesSum = 0;
    long long totalSum = 0;

    printf("Series = ");
    do {
        seriesSum += term;
        totalSum += seriesSum;

        if (num != term / 9) {
            printf(" + ");
        }
        printf("%lld", term);

        term = term * 10 + 9;
    } while (--num > 0);

    printf("\nSum = %lld\n", totalSum);

    return 0;
}
