#include <stdio.h>

int main() {

    /* รับค่าจำนวน เพื่อสร้างแถว Pascal */
    int n ;
    printf("Enter number rows: ") ;
    scanf("%d", &n) ;

    if (n % 2 == 1) { // จะทำงานเมื่อ input เป็นเลขคู่

        // สร้างลูป i rows
        int i = 0;
        while (i < n) {

            // สร้างลูป j สร้างช่องว่าง space 
            // reset ค่าเมื่อเริ่มลูป i ใหม่
            int j = 0; 
            int k = 0;
            int num = 1;

            // ลูป j สร้าง space ถึง i - 1 Ex. Loop i = 0 
            while (j < n - i - 1) {
                printf(" ");  
                j++;
            }

            // ลูป k 
            while (k <= i) {
                printf("%d ", num);
                num = num * (i - k) / (k + 1);
                k++;
            }//end while

            // ขึ้นบรรทัดใหม่
            printf("\n");

            i++;
        }//end i

    } else // n เป็นคู่
    {
        int i = n - 1 ;

        while (i >= 0) { 

            int j = 0 ;
            int k = 0 ;
            int num = 1 ;

            while (j < n - i - 1) {
                printf(" ");
                j++;
            }

            while (k <= i) {
                printf("%d ", num);
                num = num * (i - k) / (k + 1);
                k++;
            }
            printf("\n");

            i--;
        }
    }
    
    return 0;

}//end main function