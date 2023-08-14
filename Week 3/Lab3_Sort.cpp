#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>	
using namespace std;
	
int n; 	

void bubbleSort ( int a[] ){
	for ( int i = 0 ; i < n ; i++ ){              
		for ( int j = 0 ; j < n - 1 ; j++ ){
			if ( a[j] > a[j + 1] ){         
				swap ( a[j] , a[j + 1]);       
			}
		}
	}	
}

void selectionSort ( int a[] ){
	for ( int i = 0 ; i < n ; i++ ){
		int nmin = a[i]; 
		int index = i;
		for ( int j = i + 1 ; j < n ; j++ ){
			if ( a[j] <= nmin ){
				nmin = a[j];
				index = j;
			}
		}
		swap ( a[i] , a[index] );
	}
}	

void merge (int a[], int l, int m, int r){  
    int i, j, k;  
    int n1 = m - l + 1;  
    int n2 = r - m;  
  
    /* create temp arrays */
    int L[n1], R[n2];  
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)  
        L[i] = a[l + i];  
    for (j = 0; j < n2; j++)  
        R[j] = a[m + 1 + j];  
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray  
    j = 0; // Initial index of second subarray  
    k = l; // Initial index of merged subarray  
    while (i < n1 && j < n2) {  
        if (L[i] <= R[j]) {  
            a[k] = L[i];  
            i++;  
        }  
        else {  
            a[k] = R[j];  
            j++;  
        }  
        k++;  
    }  
  
    /* Copy the remaining elements of L[], if there  
    are any */
    while (i < n1) {  
        a[k] = L[i];  
        i++;  
        k++;  
    }  
  
    /* Copy the remaining elements of R[], if there  
    are any */
    while (j < n2) {  
        a[k] = R[j];  
        j++;  
        k++;  
    }  
}  
  
/* l is for left index and r is right index of the  
sub-array of arr to be sorted */
void mergeSort(int a[], int l, int r)  
{  
    if (l < r) {  
        // Same as (l+r)/2, but avoids overflow for  
        // large l and h  
        int m = l + (r - l) / 2;  
  
        // Sort first and second halves  
        mergeSort(a, l, m);  
        mergeSort(a, m + 1, r);  
  
        merge(a, l, m, r);  
    } 
}  

void printarray (int a[], int n)  
{  
    int i;  
    for (i = 0 ; i < n ; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  
		
int main() {
    
	printf ("Nhap so luong phan tu: ");
	scanf ("%d" , &n);
	int a[n] , x;
	for ( int i = 0 ; i < n ; i++ ){
		printf ("Nhap gia tri phan tu thu %d: " , i + 1);
		scanf ("%d" , &a[i]);
	}
	
	printf ("Nhap cach ban muon loc so: ");
	do {
	scanf ("%d" , &x);
	    if ( x == 1 ){	
            mergeSort ( a, 0 , n - 1 );
        }
        else if ( x == 2 ){
        	selectionSort (a);
        }
        else if ( x == 3 ){
        	bubbleSort (a);
		}
		else {
			printf ("Ban da nhap sai thu tu, vui long nhap lai: ");
		}	
	}
	while ( x < 1 || x > 3 );	
    
	printarray ( a , n );
    return 0;
}
