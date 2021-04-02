#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int number; // khai bao mot bien  , kieu int 
    printf("Nhap so nguyen: "); // in ra man hinh 
    scanf("%d",&number); // la dau vao va doc du lieu tu ban phim 
    
    int r; // khai bao mot bien r , kieu int 
    r = number %2; // tinh toan 
    if ( r==0) 
    	printf (" day la so chan");
    else // truong hop nguoc lai 
    	printf (" day la so le");
    
    
	return 0;
}
