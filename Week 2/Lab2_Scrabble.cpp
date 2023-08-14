#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a[26];
	for ( int i = 0 ; i < 26 ; i++ ){
	    if ( i == 0 || i == 4 || i == 8 || i == 11 || i == 13 || i == 14 || ( i >= 17 && i <= 20 ) ){
		   a[i] = 1;
		   }
		if ( i == 3 || i == 6 ){
		   a[i] = 2;
		   }
		if ( i == 1 || i == 2 || i == 12 || i == 15 ){
		   a[i] = 3;
		   }
		if ( i == 5 || i == 7 || i == 21 || i == 22 || i == 24 ){
		   a[i] = 4;
		   }
		if ( i == 10 ){ 
		   a[i] = 5;
		   }
		if ( i == 9 || i == 23 ){
		   a[i] = 8;
		   }
		if ( i == 16 || i == 25 ){
		   a[i] = 10;
		   }
	}
	char word1[50];
	char word2[50];
	printf ("Nhap tu cua nguoi thu nhat: ");     
	scanf ("%s" , &word1);
	printf ("Nhap tu cua nguoi thu hai: ");     
	scanf ("%s" , &word2);
	int tu1 = strlen ( word1 );
	int tu2 = strlen ( word2 );
	for ( int i = 0; i < tu1 ; i++ ){
		if ( islower( word1[i] ) ){
		    word1[i] = toupper( word1[i] );
        }
	}
	int kq1 = 0;
	for ( int i = 0; i < tu1 ; i++ ){
		for ( int j = 0 ; j < 26 ; j++){
			if ( word1[i] == string[j] ){
				kq1 += a[j];
				}
            }
		}				
	for ( int i = 0; i < tu2 ; i++ ){
		if ( islower( word2[i] ) ){
		    word2[i] = toupper( word2[i] );
        }
	}
	int kq2 = 0; 
	for ( int i = 0 ; i < tu2 ; i++ ){
		for ( int j = 0 ; j < 26 ; j++){
			if ( word2[i] == string[j] ){
				kq2 += a[j];
				}
			}
		}
	printf ("PLAYER 1 HAS %d POINTS\n" , kq1);
	printf ("PLAYER 2 HAS %d POINTS\n" , kq2);
	if ( kq1 > kq2 ){
	    printf ("PLAYER 1 WINS!");		   
		}
	else if ( kq1 < kq2 ){
	    printf ("PLAYER 2 WINS!");
	    }
	else {
	    printf ("DRAW!");
		}		       		 
    return 0;
}	    	
