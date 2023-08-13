#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<string.h>
using namespace std;

typedef struct   
{
    string city;
    string temp;
}  
dulieu;
 
int main()
{
    dulieu thongtin[6];
    
    thongtin[0].city = "Phoenix";
    thongtin[0].temp = "107";
    
    thongtin[1].city = "Las Vegas";
    thongtin[1].temp = "105";
    
    thongtin[2].city = "Austin";
    thongtin[2].temp = "97";
    
    thongtin[3].city = "Miami";
    thongtin[3].temp = "97";
    
    thongtin[4].city = "Denver";
    thongtin[4].temp = "90";
    
    thongtin[5].city = "Chicago";
    thongtin[5].temp = "85";
    
    for ( int i = 0 ; i < 6 ; i++ ){
    	printf (thongtin[i].city.c_str());
		printf (" ");	
    	printf (thongtin[i].temp.c_str());
    	printf ("\n");
    }	
	 
    return 0;
}



