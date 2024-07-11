#include <stdio.h>

int main() {

    int y;
    printf("ENTER A LEAP YEAR : "); 
    scanf("%d",&y);

    if (y % 4 == 0 && y % 100 != 0) /// ปี่ที่หาร 4 ลงตัว && หาร 100 ไม่ลงตัว
    {     
        printf("%d LEAP YEAR\n",y);
    } else if (y % 400 == 0)        /// ปีที่หาร 400 ลงตัว
    {
        printf("%d LEAP YEAR\n",y);
    } else
    {
        printf("%d NOT LEAP YEAR\n",y);
    }
    return 0;
}
