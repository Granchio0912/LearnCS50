#include<stdio.h>
#include<string.h>
#include<ctype.h> 		
			
int main (){
	char word[30];
	int dk = 1;
	printf ("Nhap tu can tim: ");
	do {
	scanf ("%s" , &word);
	if ( ( word[8] >= 97 && word[8] <= 122 ) || ( word[4] > 122 ) || ( word[4] < 97 ) ){
		printf ("Tu duoc chon khong duoc viet hoa va co tu 5 den 8 ki tu, vui long nhap lai: ");
		dk = 0;
		}
	else {
	    dk = 1;
		}	
	}
	while ( dk == 0 );
	int qtt = strlen ( word );
	for ( int i = 0 ; i < qtt ; i++ ){
		if ( isupper( word[i] ) ){
		    word[i] = tolower( word[i] );
        }
    }    
	int y;
	printf ("Chao mung ban den voi tro choi Wordle!\n");
	printf ("Trong tro choi nay, ban can doan dung tu da cho bang cach nhap vao may tinh:\n");
	printf ("Neu duoi chu cai cua ban co so 0 thi chu cai do khong co trong tu da cho\n");
	printf ("Neu duoi chu cai cua ban co so 1 thi chu cai do co trong tu da cho va da nam dung vi tri\n");
	printf ("Neu duoi chu cai cua ban co so 2 thi chu cai do co trong tu da cho nhung chua nam dung vi tri\n");
	printf ("Neu ban da san sang, xin hay bam phim 5 de bat dau tro choi: ");
	do {
		scanf ("%d" , &y);
		if ( y != 5 ){
			printf ("Chung toi se cho ban them thoi gian de chuan bi, neu ban da san sang thi hay bam phim 5: ");
			}
	}
	while ( y != 5 );	
	printf ("Tu duoc chon duoc viet thuong, co %d chu cai\n" , qtt);
	char in[qtt + 1];
	int count = 0;
	int check = 0;
	int cf = 1;
	printf ("Nhap tu cua ban, vui long khong viet hoa tu cua ban:\n");
	for ( int i = 0 ; i < 5 ; i++ ){
 		do {
		    scanf ("\n%s" , &in);
		    if ( ( in[ qtt - 1 ] < 97 ) || ( in[ qtt - 1 ] > 122 ) || ( in[qtt] >= 97 && in[qtt] <= 122 ) ||  ( in[0] < 97 ) || ( in[0] > 122 ) ){
		    	cf = 0;
		    	printf ("Tu ban vua nhap chua dung so luong chu cai, vui long nhap lai:\n");
		    	}
		    else {
			    cf = 1;
				}	
		}
		while ( cf == 0 ); 	
	    for ( int j = 0 ; j < qtt ; j++ ){	
	        if ( in[j] == word[j] ){
				printf ("1");
				count++;
			}    
			else {
			    for ( int k = 0 ; k < qtt ; k++ ){
				    if ( in[j] == word[k] ){
					    printf ("2");
					    check = 1;
					    break;
					}
					check = 0;	
				}
				if ( check == 0 ){
					printf ("0");
				}
			}					
	    }
	    printf ("\n");
		if ( count == qtt ){
	    	printf ("Xin chuc mung, ban da tim ra tu ban dau!");
	    	return 0;
	    	}
	    if ( i == 4 && count < qtt ){
		    printf ("Xin chia buon, ban qua ga de tim ra tu ban dau!");
		    return 0;
			}	
		count = 0;	
	}				    	
	return 0;	
}	    
