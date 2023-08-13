#include<stdio.h>
#include<string.h>
#include<ctype.h> 

int upc ( char n ){
	if ( islower(n) ){
	    n = toupper(n);
    }
    return n;
}		
			
int main (){
	char apb[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char apbnorm[] = "abcdefghijklmnopqrstuvwxyz";
	char strcode[26];
	printf ("Nhap ma quy doi: ");
	scanf ("%s" , &strcode);
	for ( int i = 0 ; i < 26 ; i++ ){
		if (strcode[i] == 0){
			printf ("Ma quy doi khong hop le, vui long chay lai chuong trinh!");
			return 0;
			}
	}		
	for ( int i = 0 ; i < 26 ; i++ ){
	    strcode[i] = upc ( strcode[i] );
	    }    
	char word[50];
	printf ("Nhap cum can quy doi: ");     
	scanf ("%s" , &word);
	int stt = strlen ( word );
	printf ("Cum da quy doi: ");
	for ( int i = 0 ; i < stt ; i++ ){
		for ( int j = 0 ; j < 26 ; j++ ){
	        if ( word[i] == apb[j] ){
	        	word[i] = strcode[j];
	        	break;
	        	}
	        else if ( word[i] == apbnorm[j] ){
	        	word[i] = strcode[j] + 32;
	        	break;
	        	}
	        }
		printf ("%c" , word[i]);
	}		
}	    
