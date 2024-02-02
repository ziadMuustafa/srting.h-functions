#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strlen0(char *ptr) ;              //strlen
///////////////////////////
char *strcpy0(char*ptr1,char *ptr2);  //strcpy
///////////////////////////
char *strcat0(char*ptr1,char *ptr2);  //strcat
///////////////////////////
char strcmp0(char*ptr1,char *ptr2 ) ; //strcmp
///////////////////////////
char strstr0(char*ptr1,char *ptr2 ) ; //strstr
///////////////////////////
//char ReadOut(char arr[m][n],int len) ;
int main()
{
    printf("Hello world!\n");
    char arr[50]="ahmklk;lk;" ;
    strlen0(arr) ;
    printf("\n%i",strlen(arr));
    char arr1[50]="oneone";char arr2[50]="twolow";
   // strcpy0(arr1,arr2) ;
    printf("\n%s",arr2) ;
    char arr3[]="ahmed"; char arr4[]="ahmed" ;
     strcat0(arr1,arr2) ;
    printf("\n%i",strcmp0(arr3,arr4)) ;
    char arr6[]="ahmed is here" ;
    char arr5[]=" " ;
    strstr0(arr5,arr6) ;
    char arr7[][5]={"ahmd","moho","gogo","tolo"} ;
//    ReadOut(arr7) ;
    return 0;
}

 //////////////////////////////////////////////////
int strlen0(char *ptr){
int test =0  ;                                           //strlen
while(*(ptr)!='\0'){ptr++;test++;};    printf("%i",test) ;
}
/////////////////////////////////////////////////

char *strcpy0(char*ptr1,char *ptr2){
while(*ptr1!='\0'){*ptr2=*ptr1;ptr1++;ptr2++;}        //strcpy

}
/////////////////////////////////////////////////

char*strcat0(char *ptr1,char *ptr2){
int i ;
                                                     //strcat
char *save= ptr1 ;
while(*ptr1!='\0'){ptr1++;}
while(*ptr2!='\0'){*ptr1=*ptr2;ptr1++;ptr2++;}
*ptr1='\0' ;
printf("\n%s",save) ;

}
/////////////////////////////////////////////////

char strcmp0(char*ptr1 ,char *ptr2){               //strcmp
int c =0 ;
while(*ptr1==*ptr2){ptr1++;ptr2++;c++;} printf("\n%i",c);
if(c==strlen(ptr1)){return 1;}else{return 0;}
return 0 ;
}

//////////////////////////////////////////////////
char strstr0(char *ptr1,char *ptr2 ){ int c =0 ;char *ptr3=ptr1 ;  //strstr
while(*ptr1!='\n'){

    if(*ptr1==*ptr2){c++;ptr1++;ptr2++;}else{ptr1;ptr2++;}
    if(c>0&&*ptr1!=*ptr2){break;}
}

if(c==strlen(ptr3)){printf("\nfound");}
else{printf("\nnotFound");} printf("\n%i",c) ;
printf("\n%i",strlen(ptr3));
}
////////////////////////////////////////////////////
/*char ReadOut(char arr[m][n],int len){ int i ;
for(i=0;i<=len;i++){printf("%s",arr[i]);}

} */


