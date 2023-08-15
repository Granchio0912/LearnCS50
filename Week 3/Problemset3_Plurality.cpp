#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main (){ 	
    
	int n, a, k;
    printf ("Nhap so nguoi ung cu: ");
    scanf ("%d" , &n);
    string name[n];
    int points[n] = {0};
	printf ("Nhap ten nguoi ung cu:\n");	
	for ( int i = 0 ; i < n ; i++ ){
		cin >> name[i];
	}
	
	printf ("Nhap so luong phieu: ");
	scanf ("%d" , &a);
	string vote[a];
	
	printf ("Nhap ket qua cua tung phieu:\n");
	for ( int i = 0 ; i < a ; i++ ){
	    cin >> vote[i];
	    for ( int j = 0 ; j < n ; j++ ){
	    	if ( vote[i] == name[j] ){
	    		points[j]++;
	    		k = 1;
	    		break;
	    	}
	    	else {
	    		k = 0;
	    	}
		}
		if ( k == 0 ){
		    printf ("Ban da nhap sai ten, vui long nhap lai:\n");
			i--;
		}
		k = 1;	 			
	}	
	
	int maxpoint = points[0];
	for ( int i = 0 ; i < n ; i++ ){
		if ( maxpoint <= points[i] ){
			maxpoint = points[i];
		}
	}
	
	printf ("Nguoi danh duoc nhieu phieu nhat la: ");
	for ( int i = 0 ; i < n ; i++ ){
	    if ( points[i] == maxpoint ){
		    printf ("%s " , name[i].c_str() );
		}
	}	
	 
    return 0;
}
