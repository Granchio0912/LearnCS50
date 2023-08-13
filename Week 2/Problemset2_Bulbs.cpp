#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int indexmax ( int n ){
	int imax;
	if ( n == 0 ){
		return -1;
		}
	for ( int i = 0 ; pow ( 2 , i ) <= n ; i++ ){
		imax = i;
		}
	return imax;
}	 	
			
int main (){
	char word[50];
	printf ("Nhap tu can quy doi: ");     
	scanf ("%s" , &word);
	int stt = strlen ( word );
	for ( int i = 0; i < stt ; i++ ){
		if ( islower( word[i] ) ){
		    word[i] = toupper( word[i] );
        }
    }    
	int numswap , tt , tt1;
	for ( int k = 0 ; k < stt ; k++ ){
		if ( word[k] == '_' ){
			printf ("00100000\n");
			continue;
			}
	    numswap = indexmax ( word[k] );
		if ( numswap < 7 ){
		    for ( int m = 7 - numswap ; m > 0 ; m-- ){
		        printf("0");
		        }
		    }    
	    tt = numswap; 
	    for ( int i = numswap ; i >= 0 ; i-- ){     
        if ( i == tt ){         
        	tt1 = tt;       
        	word[k] = word[k] - pow ( 2 , tt );          
		    tt = indexmax ( word[k] );            
		    if ( tt == -1 ){       
		    	printf ("1");        
		    	for ( int j = tt1 ; j > 0 ; j-- ){     
		    		printf ("0");
		    		}
		    	break;
				}	
			printf ("1");
			}
		else {	
		printf ("0");
		    }	
	    }
	    printf ("\n");
	}			 		    
}	    
