#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>	
using namespace std;
 
typedef struct   
{
    string food;
    string price;
}  
menu;
 
int main()
{
    menu order[10];
    float a[10];
    float money = 0;
    int n , b , c , d;
    
    printf ("Chao mung ban den voi nha hang DevC!\n");
    printf ("Day la thuc don hom nay cua chung toi:\n \n");
    
    order[0].food = "1.Burger:";
    order[0].price = "$9.50"; 
    a[0] = 9.50;
    
    order[1].food = "2.Vegan Burger:";
    order[1].price = "$11.00";
    a[1] = 11.00;
    
    order[2].food = "3.Hot Dog:";
    order[2].price = "$5.00";
    a[2] = 5.00;
    
    order[3].food = "4.Cheese Dog:";
    order[3].price = "$7.00";
    a[3] = 7.00;
    
    order[4].food = "5.Fries:";
    order[4].price = "$5.00";
    a[4] = 5.00;
    
    order[5].food = "6.Cheese Fries:";
    order[5].price = "$6.00";
    a[5] = 6.00;
    
    order[6].food = "7.Cold Pressed Juice:";
    order[6].price = "$7.00";
    a[6] = 7.00;
    
    order[7].food = "8.Cold Brew:";
    order[7].price = "$3.00";
    a[7] = 3.00; 
    
    order[8].food = "9.Water:";
    order[8].price = "$2.00";
    a[8] = 2.00;
    
    order[9].food = "10.Soda:";
    order[9].price = "$2.00";
    a[9] = 2.00;
    
    for ( int i = 0 ; i < 10 ; i++ ){
    	printf (order[i].food.c_str());
		printf (" ");	
    	printf (order[i].price.c_str());
    	printf ("\n");
    }	
    
    printf ("\nNeu da san sang order xin hay bam phim 1: ");
	do { 
	scanf ("%d" , &d);
	if ( d != 1 ){
		printf ("\nChung toi se cho ban them thoi gian, hay bam phim 1 neu ban da san sang order: ");
		}
	}	
	while ( d != 1 );
		
    do {
        printf("Nhap so thu tu cua mon an: ");
        
        do {
    	scanf ("%d" , &n);
    	if ( n < 1 || n > 10 ){
    		printf ("Thu tu mon an khong hop le, vui long nhap lai: ");
    		}
    	}	
		while ( n < 1 || n > 10 );	
		
    	printf("Nhap so luong cua mon an ban chon: ");
    	
    	do {
    	scanf ("%d" , &b);
    	if ( b < 0 ){ 
    	    printf ("So luong khong hop le, vui long nhap lai: ");
    	    }
    	}
		while ( b < 0 ); 
		   
    	money = money + a[n - 1] * b;
    	printf ("Nhap so nguyen bat ky neu ban muon order them, nhap so 0 neu ban da order xong: ");
    	scanf ("%d" , &c);
    	printf ("\n");
	}
	while ( c != 0 );
	
	printf ("\nTong gia tien order cua ban: $%.2f" , money);	
	   
    return 0;
}
