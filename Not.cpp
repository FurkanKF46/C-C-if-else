#include<stdio.h>
//Furkan KOCA 221030910028
int main () {
int nt;
printf("Lütfen notunuzu giriniz:\n");
scanf("%d" ,&nt);	
if(0<nt && nt<50){
printf("Notunuz FF");	
}
else if(50<nt && nt<58){
printf("Notunuz DD");	
}
else if(57<nt && nt<67){
printf("Notunuz DC");	
}
else if(66<nt && nt<75){
printf("Notunuz CC");	
}
else if(74<nt && nt<80){
printf("Notunuz CB");	
}
else if(79<nt && nt<85){
printf("Notunuz BB");	
}
else if(84<nt && nt<92){
printf("Notunuz BA");	
}
else if(91<nt && nt<101){
printf("Notunuz AA");	
}
else {
printf("Girdiginiz degerin 0-100 arasi olduguna dikkat edip tekrar deneyiniz:\n");	
}
return 0;	
}
