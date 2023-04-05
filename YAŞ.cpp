#include<iostream>
using namespace std;
//FURKAN KOCA 221030910028
int main () {
int y;
cout<<"Yasinizi giriniz lutfen"<<endl;
cin >>y;
if(-1<y && y<3){
cout<<"Girilen yas bebeklik donemidir"<<endl;	
}
else if(2<y && y<14){
cout<<"Girilen yas cocukluk donemidir"<<endl;		
}
else if(13<y && y<22){
cout<<"Girilen yas ergenlik donemidir"<<endl;		
}
else if(21<y && y<34){
cout<<"Girilen yas genclik donemidir"<<endl;		
}
else if(33<y && y<58){
cout<<"Girilen yas yetiskinlik donemidir"<<endl;		
}
else if(58<=y){
cout<<"Girilen yas yaþlýlýk donemidir"<<endl;		
}
else
cout<<"Dogru bir deger girdiðinize emin olunuz"<<endl;
return 0;	
}
