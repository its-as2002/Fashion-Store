#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
void border(void);
void loading(void);
void mainmenu(void);
void more(void);
void mens_wear(void);
void womens_wear(void);
void kids_wear(void);
void place_order(void);
void search_order(char);
void cancel_order(void);
void orders(void);
void update(void);

class order
{
public:
int orderid;
char gen[10];
char type[20];
char dcode[6];
char brand[10];
char cname[40];
char size[4];
char color[20];
int price;
char name[30];
char add[50];
unsigned long int mob;
char city[20];
unsigned long int pcode;
float amount;
float disc;
void booking()
{
if(strcmpi(gen,"male")==0)
{
disc=(price/100)*15;
amount=(price-disc);
}

else if(strcmpi(gen,"female")==0)
{
disc=(price/100)*10;
amount=(price-disc);
}
else
{
disc=(price/100)*20;
amount=(price-disc);
}
gotoxy(32,2); cout<<"+-------------+";
gotoxy(32,3); cout<<"| PLACE ORDER |";
gotoxy(32,4); cout<<"+-------------+";
gotoxy(20,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,7); cout<<"o NAME : o";
gotoxy(20,8); cout<<"o ADDRESS : o";
gotoxy(20,9); cout<<"o CITY : o";
gotoxy(20,10);cout<<"o PINCODE : o";
gotoxy(20,11);cout<<"o MOBILE No.: o";
gotoxy(20,12);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(34,7); gets(name);
gotoxy(34,8); gets(add);
gotoxy(34,9);gets(city);
gotoxy(34,10);cin>>pcode;
gotoxy(34,11);cin>>mob;

gotoxy(20,12);cout<<"o---------------------------------------o";
gotoxy(20,13);cout<<"o PRICE : o";
gotoxy(20,14);cout<<"o DISCOUNT : - o";
gotoxy(20,15);cout<<"o---------------------------------------o";
gotoxy(20,16);cout<<"o AMOUNT : o";
gotoxy(20,17);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,18);cout<<" PAYMENT MODE : CASH ON DELIEVERY. (COD)";
gotoxy(34,13);cout<<price;
gotoxy(35,14);cout<<disc;
delay(80);
gotoxy(34,16);cout<<amount;
sleep(2);
}
void entry()
{
gotoxy(16,14);cout<<"Enter the details of the cloth you want to buy";
gotoxy(25,16);cout<<"********** ENTRY **********";
gotoxy(10,17);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(10,18);cout<<"o GENDER : TYPE : o";
gotoxy(10,19);cout<<"o BRAND : ITEM CODE : o";
gotoxy(10,20);cout<<"o CLOTH : COLOR : o";

gotoxy(10,21);cout<<"o SIZE : PRICE : o";
gotoxy(10,22);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(22,18);gets(gen);
gotoxy(54,18);gets(type);
gotoxy(22,19);gets(brand);
gotoxy(54,19);gets(dcode);
gotoxy(22,20);gets(cname);
gotoxy(54,20);gets(color);
gotoxy(22,21);gets(size);
gotoxy(54,21);cin>>price;
for(int a=38;a<52;a++)
{
gotoxy(27,23);cout<<"PLEASE WAIT";
gotoxy(a,23); cout<<".";
delay(400);
}
sleep(1);
}
void disp_search_det()
{
randomize();
gotoxy(20,3);cout<<" ************ ORDER DETAILS ************ ";
gotoxy(25,5);cout<<" ORDER ID: ";
gotoxy(20,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,7); cout<<"o NAME : o";
gotoxy(20,8); cout<<"o ADDRESS : o";
gotoxy(20,9); cout<<"o CITY : o";
gotoxy(20,10);cout<<"o PINCODE : o";
gotoxy(20,11);cout<<"o MOBILE No.: o";
gotoxy(20,12);cout<<"o CATEGORY : o";
gotoxy(20,13);cout<<"o BRAND : o";
gotoxy(20,14);cout<<"o CLOTH : o";
gotoxy(20,15);cout<<"o AMOUNT : o";
gotoxy(20,16);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,17);cout<<" DELIEVERY WITHIN "<<random(5)+1<<" day(s)";
gotoxy(20,19);cout<<" PAYMENT MODE : CASH ON DELIEVERY (COD).";
gotoxy(37,5); cout<<orderid;
gotoxy(38,7); puts(name);
gotoxy(38,8); puts(add);
gotoxy(38,9); puts(city);
gotoxy(38,10);cout<<pcode;
gotoxy(38,11);cout<<mob;
gotoxy(38,12);puts(type);
gotoxy(38,13);puts(brand);
gotoxy(38,14);puts(cname);
gotoxy(38,15);cout<<amount;
getch();

}
void disp_orders(int &k)
{
gotoxy(6,k) ;cout<<orderid;
gotoxy(14,k);puts(cname);
gotoxy(34,k);cout<<pcode;
gotoxy(43,k);puts(add);
gotoxy(61,k);puts(city);
gotoxy(73,k);cout<<amount;
k+=2;
}
}s;
/*----------------------------------------------------------------------*
|---------------------------- MENS WEAR -------------------------------|
*----------------------------------------------------------------------*/
void mens_wear()
{
border();
int choice;
gotoxy(13,4); cout<<"****************** MENS STORE ******************";
gotoxy(25,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7); cout<<"o 1.SPORTS WEAR o";
gotoxy(25,8); cout<<"o 2.WESTERN WEAR o";
gotoxy(25,9); cout<<"o 3.FESTIVE WEAR o";
gotoxy(25,10);cout<<"o 4.BACK o";
gotoxy(25,11);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** SPORTS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o SP123 o ROADSTERo SWEATSHIRT o BLUE,BLACK o S,M,L,XL o 999 o";
gotoxy(4,10);
cout<<"o PO564 o ADIDAS o T-SHIRT o RED,GREEN o S,M,L,XXLo 1699 o";
gotoxy(4,11);
cout<<"o ET981 o SPARKS o TRACK PANT o RED,BLACK o XS,M,L,XLo 1899 o";
gotoxy(4,12);
cout<<"o CD589 o NIKE o JACKET o NAVY BLUE o M,L,XXL o 1500 o";

gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** WESTERN WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o KW345 o BUCKSWORTH o JACQUARD SHERWANIo RED,BLACK o M,L,XL o 14999 o";
gotoxy(3,10);
cout<<"o RD573 o SHEPLERS o ELY FANNEL SHIRTSo BLUE,RED o M,L,XL o 15999 o";
gotoxy(3,11);
cout<<"o DS536 o MANYAVAR o JODHPURI SUIT o GREY,BLACK o M,L,XXL o 17799 o";
gotoxy(3,12);
cout<<"o FG456 o WOODLAND oUNLINED DENIM JACKEToBLACK,GREYo M,L,XXL o 19999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
clrscr();
gotoxy(17,4);
cout<<"**************** FESTIVE WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o RF345 o VASTRAMAY o PATHANI SUIT o RED,BLACK o M,L,XL o 4999 o";
gotoxy(3,10);
cout<<"o WF573 o SHEPLERS o SILK SHERWANI o BLUE,RED o M,L,XL o 5999 o";
gotoxy(3,11);
cout<<"o FG536 o MANYAVAR o KURTA PYJAMA o ORANGE,RED o M,L,XXL o 7799 o";
gotoxy(3,12);
cout<<"o JJ456 o RAYMOND o NEHRU JACKET o WHITE,GREY o M,L,XXL o 9999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 4:
mainmenu();break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}

/*----------------------------------------------------------------------*
|---------------------------- WOMEN'S WEAR ----------------------------|
*----------------------------------------------------------------------*/
void womens_wear()
{
border();
int choice;
gotoxy(13,4); cout<<"******************* WOMEN'S STORE
*******************";
gotoxy(25,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7); cout<<"o 1.SPORTS WEAR o";
gotoxy(25,8); cout<<"o 2.WESTERN WEAR o";
gotoxy(25,9); cout<<"o 3.FESTIVE WEAR o";
gotoxy(25,10);cout<<"o 4.BACK o";
gotoxy(25,11);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** SPORTS WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o TP123 oMYPROTEINo DRY-TECH VEST o BLUE,BLACK o S,M,L,XL o 999 o";
gotoxy(3,10);
cout<<"o PW894 o ADIDAS o SEAMLESS CROP TOPo DUSTY ROSE o S,M,L,XXLo 1699 o";
gotoxy(3,11);
cout<<"o HJ341 o SPARKS oPOWER MESH LEGGINGSoTHUNDER BLUE o XS,M,L,XLo 1899 o";
gotoxy(3,12);
cout<<"o TT459 o NIKE o SWEATSHIRTS o NAVY BLUE o M,L,XXL o 1500 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** WESTERN WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";

gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o HM345 o VERO MODA o WOMEN'S JUMPSUIT o RED,BLACK o M,L,XL o 3299 o";
gotoxy(3,10);
cout<<"o EE573 o RAAS PRET o CREPE FLARED GOWNo BLUE,RED o M,L,XL o 1999 o";
gotoxy(3,11);
cout<<"o EJ536 o MAYRA o RAYON SHIFT DRESSo GREY,BLACK o M,L,XXL o 2799 o";
gotoxy(3,12);
cout<<"o NM456 o BROADSTAR o DENIM DUNGAREES o BLACK,GREY o M,L,XXL o 2599 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
clrscr();
gotoxy(17,4);
cout<<"**************** FESTIVE WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o RF345 o VASTRAMAY o ANARKALI SUIT o RED,BLACK o M,L,XL o 4999 o";
gotoxy(3,10);
cout<<"o WF573 o RAJ RATAN o SILK SAREE o BLUE,RED o M,L,XL o 5999 o";
gotoxy(3,11);
cout<<"o FG536 o MANYAVAR o LEHANGA CHOLI o ORANGE,RED o M,L,XXL o 7799 o";
gotoxy(3,12);
cout<<"o JJ456 o LIBBAS o PATHANI KURTA o WHITE,GREY o M,L,XXL o 9999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 4:
mainmenu();break
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}
/*----------------------------------------------------------------------*
|-------------------------- KIDS WEAR ---------------------------------|
*----------------------------------------------------------------------*/
void kids_wear()
{
border();
int choice;
gotoxy(13,4);
cout<<"********************* KIDS STORE ********************";
gotoxy(25,6);

cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7);
cout<<"o 1.BOY'S CLOTHING o";
gotoxy(25,8);
cout<<"o 2.GIRL'S CLOTHING o";
gotoxy(25,9);
cout<<"o 3.BACK o";
gotoxy(25,10);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);
cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** BOYS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o RF456 o NIKE o ELASTICATED SHOTS o BLUE,BLACK o S,M o 999 o";
gotoxy(4,10);
cout<<"o PO564 o BABYHUG o TEE & LOUNGE PANTS o DUSTY ROSE o S,M o 1699 o";
gotoxy(4,11);
cout<<"o ET981 o SPARKS o HOODED SHIRT o THUNDER BLUE o XS,M o 1899 o";
gotoxy(4,12);
cout<<"o CD589 o LEVIS o SHORT KURTA o NAVY BLUE o S,M o 1500 o";
gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** GIRLS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o KW345 o AARIKA o EMBELLISHED MAXI o RED,BLACK o S,M o 14999 o";
gotoxy(4,10);
cout<<"o RD573 o SHEPLERS o A-LINE DRESS o BLUE,RED o S,M o 15999 o";
gotoxy(4,11);

cout<<"o DS536 o CUTECUMBER o EMBROIDERED FROCK o GREY,BLACK o S,M o 17799 o";
gotoxy(4,12);
cout<<"o FG456o WOODLAND o SLEEVELESS FROCK o BLACK,GREY o S,M o 19999 o";
gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
mainmenu();
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}
/*----------------------------------------------------------------------*
|------------------------ PLACE ORDER ---------------------------------|
*----------------------------------------------------------------------*/
void place_order()
{
char ch;
gotoxy(15,14);cout<<"Do you want to buy something? (Y/N): ";
cin>>ch;
if(ch=='n'||ch=='N')
mainmenu();
fstream r;
r.open("RECORD.DAT",ios::app|ios::binary);
s.entry();
clrscr();
s.booking();
gotoxy(21,20);cout<<"CONFIRM YOUR ORDER!!!(Y/N) : ";
cin>>ch;
if(ch=='n'||ch=='N')
{
char str[]="ORDER CANCELLED ";
gotoxy(30,22);cout<<"+--------------------+";
gotoxy(30,23);cout<<"| |";
gotoxy(30,24);cout<<"+--------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(32+i,23);cout<<str[i];
delay(50);
}
sleep(2);
mainmenu();
}
else
{
for(int a=38;a<50;a++)
{

gotoxy(30,23);cout<<"BOOKING";
gotoxy(a,23);cout<<"ÛÛ";
delay(400);
}
sleep(1);
char str[]="BOOKING CONFIRMED ";
gotoxy(28,22);cout<<"+----------------------+";
gotoxy(28,23);cout<<"| |";
gotoxy(28,24);cout<<"+----------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(30+i,23);cout<<str[i];
delay(50);
}
randomize();
s.orderid=random(5678)+1000;
gotoxy(21,20);cout<<" YOUR ORDER ID : ";
gotoxy(46,20);cout<<s.orderid;
gotoxy(24,25);cout<<"-DELIEVERY WITHIN "<<(random(5)+1)<<" day(s).-";
}
r.write((char*)&s,sizeof(s));
r.close();
getch();
}

/*----------------------------------------------------------------------*
|------------------------------- SEARCH -------------------------------|
*----------------------------------------------------------------------*/
void search_order(char choice)
{
fstream r;
r.open("RECORD.DAT",ios::in|ios::binary);
int count=0;
border();
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-SEARCH-|";
gotoxy(35,5);cout<<"*--------*";
switch(choice)
{
case 'a':
int id;
gotoxy(21,7);cout<<"Enter the ORDER ID to be searched : ";
cin>>id;
for(int j=41;j<53;j++)

{
gotoxy(20,9); cout<<"*******************************************";
gotoxy(30,13);cout<<"*----------------------*";
gotoxy(30,14);cout<<"| SEARCHING |";
gotoxy(30,15);cout<<"*----------------------*";
gotoxy(j,14); cout<<".";
delay(400);
}
while(r.read((char*)&s,sizeof(s)))
{
if(s.orderid==id)
{
count=1;
border();
s.disp_search_det();
break;
}
}
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
}
break;
case 'b':
char name[20];
gotoxy(20,7);cout<<"Enter the NAME of CUSTOMER to be searched : ";
gets(name);
for(int k=41;k<53;k++)
{
gotoxy(20,9); cout<<"********************************************";
gotoxy(30,13);cout<<"*----------------------*";
gotoxy(30,14);cout<<"|-SEARCHING |";
gotoxy(30,15);cout<<"*----------------------*";
gotoxy(k,14); cout<<".";
delay(400);
}

while(r.read((char*)&s,sizeof(s)))
{
if(strcmpi(name,s.name)==0)
{

count=1;
border();
s.disp_search_det();
break;
}
}
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
}
break;
default:
break;
}
r.close();
}
/*----------------------------------------------------------------------*
|------------------------------- ORDERS -------------------------------|
*----------------------------------------------------------------------*/
void orders()
{
border();
fstream r;
r.open("RECORD.DAT",ios::in|ios::binary);
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-ORDERS-|";
gotoxy(35,5);cout<<"*--------*";
gotoxy(3,7);
cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(3,8);
cout<<"oORDER Ido CLOTH o PINCODE o ADDRESS o CITY o AMOUNT o";
gotoxy(3,9);
cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
int k=11;
while(r.read((char*)&s,sizeof(s)))
s.disp_orders(k);
r.close();
getch();
}
/*----------------------------------------------------------------------*
|--------------------------- CANCEL ORDER -----------------------------|
*----------------------------------------------------------------------*/

void cancel_order()
{
border();
char ch;
int count=0;
int id;
fstream r,t;
r.open("RECORD.DAT",ios::in|ios::binary);
t.open("temp.dat",ios::out|ios::binary);
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-DELETE-|";
gotoxy(35,5);cout<<"*--------*";
gotoxy(15,7);cout<<"Enter the ORDER ID of ORDER to be cancelled : ";
cin>>id;
while(r.read((char*)&s,sizeof(s)))
{
if(s.orderid==id)
{
gotoxy(27,9) ;cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(27,10);cout<<"o NAME : o";
gotoxy(27,11);cout<<"o ADDRESS : o";
gotoxy(27,12);cout<<"o CLOTH : o";
gotoxy(27,13);cout<<"o AMOUNT : o";
gotoxy(27,14);cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(40,10);puts(s.name);
gotoxy(40,11);puts(s.add);
gotoxy(40,12);puts(s.cname);
gotoxy(40,13);cout<<s.amount;
gotoxy(28,16);cout<<"CONFIRM CANCELLATION (Y/N) : ";
cin>>ch;
if(ch=='n'||ch=='N')
{
t.write((char*)&s,sizeof(s));
mainmenu();
}
else
{
gotoxy(28,16);cout<<"CANCELLING ORDER ";
for(int a=46;a<56;a++)
{
gotoxy(a,16);cout<<"ÛÛ";
delay(500);
}
sleep(1);
char str[]=" ORDER CANCELLED ";
gotoxy(30,18);cout<<"+------------------------+";
gotoxy(30,19);cout<<"| |";
gotoxy(30,20);cout<<"+------------------------+";
for(int i=0;str[i]!='\0';++i)

{
gotoxy(31+i,19);cout<<str[i];
delay(50);
}
sleep(2);
count=1;
}
}
else
t.write((char*)&s,sizeof(s));
}
r.close();
t.close();
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
delay(900);
}
else
{
remove("RECORD.DAT");
rename("temp.dat","RECORD.DAT");
}
}
/*----------------------------------------------------------------------*
|-- --------------------------- UPDATE --------------------------------|
*----------------------------------------------------------------------*/
void update()
{
int id;
border();
gotoxy(36,4);cout<<"+------------+";
gotoxy(36,5);cout<<"|-- UPDATE --|";
gotoxy(36,6);cout<<"+------------+";
gotoxy(15,8);cout<<"Enter the ORDER ID of ORDER to be UPDATED : ";
cin>>id;
gotoxy(15,10);cout<<"**************************************************";
gotoxy(36,12);cout<<"LOADING ";
for(int a=45;a<50;a++)
{
gotoxy(a,12);cout<<"ÛÛ";
delay(500);
}
sleep(1);

int count=0;
fstream r;
r.open("RECORD.DAT",ios::in|ios::out|ios::binary);
while(!r.eof())
{
int pos=r.tellg();
r.read((char*)&s,sizeof(s));
if(id==s.orderid)
{
clrscr();
count=1;
gotoxy(35,3); cout<<"+--------+";
gotoxy(35,4); cout<<"| UPDATE |";
gotoxy(35,5); cout<<"+--------+";
gotoxy(20,7); cout<<"ORDER ID :";
gotoxy(20,8); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,9); cout<<"o NAME : o";
gotoxy(20,10);cout<<"o ADDRESS : o";
gotoxy(20,11);cout<<"o CITY : o";
gotoxy(20,12);cout<<"o PINCODE : o";
gotoxy(20,13);cout<<"o MOBILE No.: o";
gotoxy(20,14);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(31,7); cout<<s.orderid;
gotoxy(34,9); puts(s.name);
gotoxy(34,10); gets(s.add);
gotoxy(34,11);gets(s.city);
gotoxy(34,12);cin>>s.pcode;
gotoxy(34,13);cin>>s.mob;
gotoxy(30,16);cout<<"UPDATING";
for(int b=40;b<50;b++)
{
gotoxy(b,16);cout<<"ÛÛ";
delay(500);
}
sleep(1);
char str[]=" UPDATED ";
gotoxy(35,18);cout<<"+---------------+";
gotoxy(35,19);cout<<"| |";
gotoxy(35,20);cout<<"+---------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(36+i,19);cout<<str[i];
delay(50);
}
sleep(1);
r.seekp(pos);
r.write((char*)&s,sizeof(s));
break;
}

}
if(count==0)
{
border();
gotoxy(27,9) ;cout<<"*----------------------------*";
gotoxy(27,10);cout<<"| SORRY!!! |";
gotoxy(27,11);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,12);cout<<"*----------------------------*";
getch();
}
getch();
r.close();
}
/*----------------------------------------------------------------------*
|------------------------------- MORE ---------------------------------|
*----------------------------------------------------------------------*/
void more()
{
border();
char choice;
gotoxy(26,3); cout<<"+--------------------------+";
gotoxy(26,4); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,5); cout<<"+--------------------------+";
gotoxy(27,7); cout<<"*********** MORE *********";
gotoxy(26,9); cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(26,10);cout<<"o 1.SEARCH o";
gotoxy(26,11);cout<<"o (a) . BY ORDER ID o";
gotoxy(26,12);cout<<"o (b) . BY NAME o";
gotoxy(26,13);cout<<"o 2.ORDERS o";
gotoxy(26,14);cout<<"o 3.UPDATE DETAILS o";
gotoxy(26,15);cout<<"o 4.CANCEL ORDER o";
gotoxy(26,16);cout<<"o 5.BACK o";
gotoxy(26,17);cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(26,19);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 'a':
search_order(choice);
break;
case 'b':
search_order(choice);
break;
case '2':
orders();
break;

case '3':
update();
break;
case '4':
cancel_order();
break;
case '5':
mainmenu();
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
sleep(1);
more();
break;
}
}
/*----------------------------------------------------------------------*
|----------------------------- MAIN_MENU ------------------------------|
*--------------------------------------- ------------------------------*/
void mainmenu()
{
int choice;
while(choice!=5)
{
border();
gotoxy(26,3); cout<<"+--------------------------+";
gotoxy(26,4); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,5); cout<<"+--------------------------+";
gotoxy(22,8); cout<<"^^^^^^^^^THE FASHION FORWARD^^^^^^^^^^";
gotoxy(26,10);cout<<"**********MAIN MENU*********";
gotoxy(26,13);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,14);cout<<"o 1.MEN'S WEAR o";
gotoxy(26,15);cout<<"o 2.WOMEN'S WEAR o";
gotoxy(26,16);cout<<"o 3.KID'S WEAR o";
gotoxy(26,17);cout<<"o 4.MORE o";
gotoxy(26,18);cout<<"o 5.EXIT o";
gotoxy(26,19);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(27,21);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
mens_wear();
break;
case 2:

womens_wear();
break;
case 3:
kids_wear();
break;
case 4:
more();
break;
case 5:
border();
char str[]="THANKS FOR VISITING...";
gotoxy(29,12);cout<<"+------------------------+";
gotoxy(29,13);cout<<"| |";
gotoxy(29,14);cout<<"+------------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(32+i,13);cout<<str[i];
delay(50);
}
sleep(1);
exit(0);
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
for(int f=1;f<13;f++)
{
gotoxy(3,f);cout<<"Î";gotoxy(80,f);cout<<"Î";
gotoxy(3,25-f);cout<<"Î";gotoxy(80,25-f);cout<<"Î";
delay(50);
}
}
}
/*----------------------------------------------------------------------*
|----------------------------- BORDER ---------------------------------|
*----------------------------------------------------------------------*/
void border()
{
clrscr();
int i=1,j=1;
for(;i<81;i+=2)
{
gotoxy(i,j);cout<<"/*";
gotoxy(i,j+1);cout<<"~~";
}

i--;j++;
for(;j<=23;++j)
gotoxy(i,j);cout<<"Î";
for(;i>2;i-=2)
{
gotoxy(i-2,j);cout<<"/*";
gotoxy(i-2,j+1);cout<<"~~";
}
j--;i--;
for(;j>1;--j)
gotoxy(i,j);cout<<"Î";
}
/*----------------------------------------------------------------------*
|--------------------------- LOADING_SCREEN ---------------------------|
*----------------------------------------------------------------------*/
void loading()
{
int a;
for(a=50;a>32;a--)
{
clrscr();
textcolor(YELLOW);
gotoxy(25,3);cout<<"*********** WELCOME ************";
gotoxy(a,6);cout<<"TANU Presents.... ";
delay(50);
}
sleep(1);
gotoxy(26,11); cout<<"+--------------------------+";
gotoxy(26,12); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,13); cout<<"+--------------------------+";
gotoxy(30,17);cout<<"LOADING....";
int k=0;
for(int i=1;i<=10;i++)
{
gotoxy(28+k,18);
delay(400);
cout<<"ÛÛ";
k+=2;
gotoxy(50,18);cout<<i<<"0%";
}
gotoxy(33,19);cout<<"COMPLETED";
delay(500); cout<<"!"; delay(500); cout<<"!";
sleep(1);
}

/*----------------------------------------------------------------------*
|-------------------------------- MAIN --------------------------------|
*-------------------------------------- -------------------------------*/
void main()
{
textcolor(GREEN);
border();
gotoxy(15,4);cout<<"************************************************\n\n";
gotoxy(13,6);cout<<" COMPUTER PROJECT ";
gotoxy(13,7);cout<<" ON ";
gotoxy(13,8);cout<<" (C++). \n\n";
gotoxy(15,10);cout<<"************************************************* ";
gotoxy(31,12);cout<<"*-------------------*";
gotoxy(31,13);cout<<"| -TOPIC-           |";
gotoxy(31,14);cout<<"| (Fashion Store)   |";
gotoxy(31,15);cout<<"*-------------------*";
// gotoxy(31,16);cout<<"| #include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
void border(void);
void loading(void);
void mainmenu(void);
void more(void);
void mens_wear(void);
void womens_wear(void);
void kids_wear(void);
void place_order(void);
void search_order(char);
void cancel_order(void);
void orders(void);
void update(void);

class order
{
public:
int orderid;
char gen[10];
char type[20];
char dcode[6];
char brand[10];
char cname[40];
char size[4];
char color[20];
int price;
char name[30];
char add[50];
unsigned long int mob;
char city[20];
unsigned long int pcode;
float amount;
float disc;
void booking()
{
if(strcmpi(gen,"male")==0)
{
disc=(price/100)*15;
amount=(price-disc);
}

else if(strcmpi(gen,"female")==0)
{
disc=(price/100)*10;
amount=(price-disc);
}
else
{
disc=(price/100)*20;
amount=(price-disc);
}
gotoxy(32,2); cout<<"+-------------+";
gotoxy(32,3); cout<<"| PLACE ORDER |";
gotoxy(32,4); cout<<"+-------------+";
gotoxy(20,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,7); cout<<"o NAME : o";
gotoxy(20,8); cout<<"o ADDRESS : o";
gotoxy(20,9); cout<<"o CITY : o";
gotoxy(20,10);cout<<"o PINCODE : o";
gotoxy(20,11);cout<<"o MOBILE No.: o";
gotoxy(20,12);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(34,7); gets(name);
gotoxy(34,8); gets(add);
gotoxy(34,9);gets(city);
gotoxy(34,10);cin>>pcode;
gotoxy(34,11);cin>>mob;

gotoxy(20,12);cout<<"o---------------------------------------o";
gotoxy(20,13);cout<<"o PRICE : o";
gotoxy(20,14);cout<<"o DISCOUNT : - o";
gotoxy(20,15);cout<<"o---------------------------------------o";
gotoxy(20,16);cout<<"o AMOUNT : o";
gotoxy(20,17);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,18);cout<<" PAYMENT MODE : CASH ON DELIEVERY. (COD)";
gotoxy(34,13);cout<<price;
gotoxy(35,14);cout<<disc;
delay(80);
gotoxy(34,16);cout<<amount;
sleep(2);
}
void entry()
{
gotoxy(16,14);cout<<"Enter the details of the cloth you want to buy";
gotoxy(25,16);cout<<"********** ENTRY **********";
gotoxy(10,17);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(10,18);cout<<"o GENDER : TYPE : o";
gotoxy(10,19);cout<<"o BRAND : ITEM CODE : o";
gotoxy(10,20);cout<<"o CLOTH : COLOR : o";

gotoxy(10,21);cout<<"o SIZE : PRICE : o";
gotoxy(10,22);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(22,18);gets(gen);
gotoxy(54,18);gets(type);
gotoxy(22,19);gets(brand);
gotoxy(54,19);gets(dcode);
gotoxy(22,20);gets(cname);
gotoxy(54,20);gets(color);
gotoxy(22,21);gets(size);
gotoxy(54,21);cin>>price;
for(int a=38;a<52;a++)
{
gotoxy(27,23);cout<<"PLEASE WAIT";
gotoxy(a,23); cout<<".";
delay(400);
}
sleep(1);
}
void disp_search_det()
{
randomize();
gotoxy(20,3);cout<<" ************ ORDER DETAILS ************ ";
gotoxy(25,5);cout<<" ORDER ID: ";
gotoxy(20,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,7); cout<<"o NAME : o";
gotoxy(20,8); cout<<"o ADDRESS : o";
gotoxy(20,9); cout<<"o CITY : o";
gotoxy(20,10);cout<<"o PINCODE : o";
gotoxy(20,11);cout<<"o MOBILE No.: o";
gotoxy(20,12);cout<<"o CATEGORY : o";
gotoxy(20,13);cout<<"o BRAND : o";
gotoxy(20,14);cout<<"o CLOTH : o";
gotoxy(20,15);cout<<"o AMOUNT : o";
gotoxy(20,16);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,17);cout<<" DELIEVERY WITHIN "<<random(5)+1<<" day(s)";
gotoxy(20,19);cout<<" PAYMENT MODE : CASH ON DELIEVERY (COD).";
gotoxy(37,5); cout<<orderid;
gotoxy(38,7); puts(name);
gotoxy(38,8); puts(add);
gotoxy(38,9); puts(city);
gotoxy(38,10);cout<<pcode;
gotoxy(38,11);cout<<mob;
gotoxy(38,12);puts(type);
gotoxy(38,13);puts(brand);
gotoxy(38,14);puts(cname);
gotoxy(38,15);cout<<amount;
getch();

}
void disp_orders(int &k)
{
gotoxy(6,k) ;cout<<orderid;
gotoxy(14,k);puts(cname);
gotoxy(34,k);cout<<pcode;
gotoxy(43,k);puts(add);
gotoxy(61,k);puts(city);
gotoxy(73,k);cout<<amount;
k+=2;
}
}s;
/*----------------------------------------------------------------------*
|---------------------------- MENS WEAR -------------------------------|
*----------------------------------------------------------------------*/
void mens_wear()
{
border();
int choice;
gotoxy(13,4); cout<<"****************** MENS STORE ******************";
gotoxy(25,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7); cout<<"o 1.SPORTS WEAR o";
gotoxy(25,8); cout<<"o 2.WESTERN WEAR o";
gotoxy(25,9); cout<<"o 3.FESTIVE WEAR o";
gotoxy(25,10);cout<<"o 4.BACK o";
gotoxy(25,11);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** SPORTS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o SP123 o ROADSTERo SWEATSHIRT o BLUE,BLACK o S,M,L,XL o 999 o";
gotoxy(4,10);
cout<<"o PO564 o ADIDAS o T-SHIRT o RED,GREEN o S,M,L,XXLo 1699 o";
gotoxy(4,11);
cout<<"o ET981 o SPARKS o TRACK PANT o RED,BLACK o XS,M,L,XLo 1899 o";
gotoxy(4,12);
cout<<"o CD589 o NIKE o JACKET o NAVY BLUE o M,L,XXL o 1500 o";

gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** WESTERN WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o KW345 o BUCKSWORTH o JACQUARD SHERWANIo RED,BLACK o M,L,XL o 14999 o";
gotoxy(3,10);
cout<<"o RD573 o SHEPLERS o ELY FANNEL SHIRTSo BLUE,RED o M,L,XL o 15999 o";
gotoxy(3,11);
cout<<"o DS536 o MANYAVAR o JODHPURI SUIT o GREY,BLACK o M,L,XXL o 17799 o";
gotoxy(3,12);
cout<<"o FG456 o WOODLAND oUNLINED DENIM JACKEToBLACK,GREYo M,L,XXL o 19999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
clrscr();
gotoxy(17,4);
cout<<"**************** FESTIVE WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o RF345 o VASTRAMAY o PATHANI SUIT o RED,BLACK o M,L,XL o 4999 o";
gotoxy(3,10);
cout<<"o WF573 o SHEPLERS o SILK SHERWANI o BLUE,RED o M,L,XL o 5999 o";
gotoxy(3,11);
cout<<"o FG536 o MANYAVAR o KURTA PYJAMA o ORANGE,RED o M,L,XXL o 7799 o";
gotoxy(3,12);
cout<<"o JJ456 o RAYMOND o NEHRU JACKET o WHITE,GREY o M,L,XXL o 9999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 4:
mainmenu();break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}

/*----------------------------------------------------------------------*
|---------------------------- WOMEN'S WEAR ----------------------------|
*----------------------------------------------------------------------*/
void womens_wear()
{
border();
int choice;
gotoxy(13,4); cout<<"******************* WOMEN'S STORE
*******************";
gotoxy(25,6); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7); cout<<"o 1.SPORTS WEAR o";
gotoxy(25,8); cout<<"o 2.WESTERN WEAR o";
gotoxy(25,9); cout<<"o 3.FESTIVE WEAR o";
gotoxy(25,10);cout<<"o 4.BACK o";
gotoxy(25,11);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** SPORTS WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o TP123 oMYPROTEINo DRY-TECH VEST o BLUE,BLACK o S,M,L,XL o 999 o";
gotoxy(3,10);
cout<<"o PW894 o ADIDAS o SEAMLESS CROP TOPo DUSTY ROSE o S,M,L,XXLo 1699 o";
gotoxy(3,11);
cout<<"o HJ341 o SPARKS oPOWER MESH LEGGINGSoTHUNDER BLUE o XS,M,L,XLo 1899 o";
gotoxy(3,12);
cout<<"o TT459 o NIKE o SWEATSHIRTS o NAVY BLUE o M,L,XXL o 1500 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** WESTERN WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";

gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o HM345 o VERO MODA o WOMEN'S JUMPSUIT o RED,BLACK o M,L,XL o 3299 o";
gotoxy(3,10);
cout<<"o EE573 o RAAS PRET o CREPE FLARED GOWNo BLUE,RED o M,L,XL o 1999 o";
gotoxy(3,11);
cout<<"o EJ536 o MAYRA o RAYON SHIFT DRESSo GREY,BLACK o M,L,XXL o 2799 o";
gotoxy(3,12);
cout<<"o NM456 o BROADSTAR o DENIM DUNGAREES o BLACK,GREY o M,L,XXL o 2599 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
clrscr();
gotoxy(17,4);
cout<<"**************** FESTIVE WEAR ****************";
gotoxy(3,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(3,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(3,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(3,9);
cout<<"o RF345 o VASTRAMAY o ANARKALI SUIT o RED,BLACK o M,L,XL o 4999 o";
gotoxy(3,10);
cout<<"o WF573 o RAJ RATAN o SILK SAREE o BLUE,RED o M,L,XL o 5999 o";
gotoxy(3,11);
cout<<"o FG536 o MANYAVAR o LEHANGA CHOLI o ORANGE,RED o M,L,XXL o 7799 o";
gotoxy(3,12);
cout<<"o JJ456 o LIBBAS o PATHANI KURTA o WHITE,GREY o M,L,XXL o 9999 o";
gotoxy(3,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 4:
mainmenu();break
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}
/*----------------------------------------------------------------------*
|-------------------------- KIDS WEAR ---------------------------------|
*----------------------------------------------------------------------*/
void kids_wear()
{
border();
int choice;
gotoxy(13,4);
cout<<"********************* KIDS STORE ********************";
gotoxy(25,6);

cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(25,7);
cout<<"o 1.BOY'S CLOTHING o";
gotoxy(25,8);
cout<<"o 2.GIRL'S CLOTHING o";
gotoxy(25,9);
cout<<"o 3.BACK o";
gotoxy(25,10);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,12);
cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
clrscr();
char ch;
gotoxy(17,4);
cout<<"**************** BOYS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM Codeo BRAND o CLOTH NAME o CLOTH COLOR o SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o RF456 o NIKE o ELASTICATED SHOTS o BLUE,BLACK o S,M o 999 o";
gotoxy(4,10);
cout<<"o PO564 o BABYHUG o TEE & LOUNGE PANTS o DUSTY ROSE o S,M o 1699 o";
gotoxy(4,11);
cout<<"o ET981 o SPARKS o HOODED SHIRT o THUNDER BLUE o XS,M o 1899 o";
gotoxy(4,12);
cout<<"o CD589 o LEVIS o SHORT KURTA o NAVY BLUE o S,M o 1500 o";
gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 2:
clrscr();
gotoxy(17,4);
cout<<"**************** GIRLS WEAR ****************";
gotoxy(4,6);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(4,7);
cout<<"oITEM CODEo BRAND o CLOTH NAME o CLOTH COLORo SIZE o PRICE o";
gotoxy(4,8);
cout<<"oÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍÍÍÍÍÍoÍÍÍÍÍÍÍoÍÍÍÍÍÍÍo";
gotoxy(4,9);
cout<<"o KW345 o AARIKA o EMBELLISHED MAXI o RED,BLACK o S,M o 14999 o";
gotoxy(4,10);
cout<<"o RD573 o SHEPLERS o A-LINE DRESS o BLUE,RED o S,M o 15999 o";
gotoxy(4,11);

cout<<"o DS536 o CUTECUMBER o EMBROIDERED FROCK o GREY,BLACK o S,M o 17799 o";
gotoxy(4,12);
cout<<"o FG456o WOODLAND o SLEEVELESS FROCK o BLACK,GREY o S,M o 19999 o";
gotoxy(4,13);
cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
place_order();
break;
case 3:
mainmenu();
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
}
/*----------------------------------------------------------------------*
|------------------------ PLACE ORDER ---------------------------------|
*----------------------------------------------------------------------*/
void place_order()
{
char ch;
gotoxy(15,14);cout<<"Do you want to buy something? (Y/N): ";
cin>>ch;
if(ch=='n'||ch=='N')
mainmenu();
fstream r;
r.open("RECORD.DAT",ios::app|ios::binary);
s.entry();
clrscr();
s.booking();
gotoxy(21,20);cout<<"CONFIRM YOUR ORDER!!!(Y/N) : ";
cin>>ch;
if(ch=='n'||ch=='N')
{
char str[]="ORDER CANCELLED ";
gotoxy(30,22);cout<<"+--------------------+";
gotoxy(30,23);cout<<"| |";
gotoxy(30,24);cout<<"+--------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(32+i,23);cout<<str[i];
delay(50);
}
sleep(2);
mainmenu();
}
else
{
for(int a=38;a<50;a++)
{

gotoxy(30,23);cout<<"BOOKING";
gotoxy(a,23);cout<<"ÛÛ";
delay(400);
}
sleep(1);
char str[]="BOOKING CONFIRMED ";
gotoxy(28,22);cout<<"+----------------------+";
gotoxy(28,23);cout<<"| |";
gotoxy(28,24);cout<<"+----------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(30+i,23);cout<<str[i];
delay(50);
}
randomize();
s.orderid=random(5678)+1000;
gotoxy(21,20);cout<<" YOUR ORDER ID : ";
gotoxy(46,20);cout<<s.orderid;
gotoxy(24,25);cout<<"-DELIEVERY WITHIN "<<(random(5)+1)<<" day(s).-";
}
r.write((char*)&s,sizeof(s));
r.close();
getch();
}

/*----------------------------------------------------------------------*
|------------------------------- SEARCH -------------------------------|
*----------------------------------------------------------------------*/
void search_order(char choice)
{
fstream r;
r.open("RECORD.DAT",ios::in|ios::binary);
int count=0;
border();
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-SEARCH-|";
gotoxy(35,5);cout<<"*--------*";
switch(choice)
{
case 'a':
int id;
gotoxy(21,7);cout<<"Enter the ORDER ID to be searched : ";
cin>>id;
for(int j=41;j<53;j++)

{
gotoxy(20,9); cout<<"*******************************************";
gotoxy(30,13);cout<<"*----------------------*";
gotoxy(30,14);cout<<"| SEARCHING |";
gotoxy(30,15);cout<<"*----------------------*";
gotoxy(j,14); cout<<".";
delay(400);
}
while(r.read((char*)&s,sizeof(s)))
{
if(s.orderid==id)
{
count=1;
border();
s.disp_search_det();
break;
}
}
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
}
break;
case 'b':
char name[20];
gotoxy(20,7);cout<<"Enter the NAME of CUSTOMER to be searched : ";
gets(name);
for(int k=41;k<53;k++)
{
gotoxy(20,9); cout<<"********************************************";
gotoxy(30,13);cout<<"*----------------------*";
gotoxy(30,14);cout<<"|-SEARCHING |";
gotoxy(30,15);cout<<"*----------------------*";
gotoxy(k,14); cout<<".";
delay(400);
}

while(r.read((char*)&s,sizeof(s)))
{
if(strcmpi(name,s.name)==0)
{

count=1;
border();
s.disp_search_det();
break;
}
}
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
}
break;
default:
break;
}
r.close();
}
/*----------------------------------------------------------------------*
|------------------------------- ORDERS -------------------------------|
*----------------------------------------------------------------------*/
void orders()
{
border();
fstream r;
r.open("RECORD.DAT",ios::in|ios::binary);
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-ORDERS-|";
gotoxy(35,5);cout<<"*--------*";
gotoxy(3,7);
cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(3,8);
cout<<"oORDER Ido CLOTH o PINCODE o ADDRESS o CITY o AMOUNT o";
gotoxy(3,9);
cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
int k=11;
while(r.read((char*)&s,sizeof(s)))
s.disp_orders(k);
r.close();
getch();
}
/*----------------------------------------------------------------------*
|--------------------------- CANCEL ORDER -----------------------------|
*----------------------------------------------------------------------*/

void cancel_order()
{
border();
char ch;
int count=0;
int id;
fstream r,t;
r.open("RECORD.DAT",ios::in|ios::binary);
t.open("temp.dat",ios::out|ios::binary);
gotoxy(35,3);cout<<"*--------*";
gotoxy(35,4);cout<<"|-DELETE-|";
gotoxy(35,5);cout<<"*--------*";
gotoxy(15,7);cout<<"Enter the ORDER ID of ORDER to be cancelled : ";
cin>>id;
while(r.read((char*)&s,sizeof(s)))
{
if(s.orderid==id)
{
gotoxy(27,9) ;cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(27,10);cout<<"o NAME : o";
gotoxy(27,11);cout<<"o ADDRESS : o";
gotoxy(27,12);cout<<"o CLOTH : o";
gotoxy(27,13);cout<<"o AMOUNT : o";
gotoxy(27,14);cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(40,10);puts(s.name);
gotoxy(40,11);puts(s.add);
gotoxy(40,12);puts(s.cname);
gotoxy(40,13);cout<<s.amount;
gotoxy(28,16);cout<<"CONFIRM CANCELLATION (Y/N) : ";
cin>>ch;
if(ch=='n'||ch=='N')
{
t.write((char*)&s,sizeof(s));
mainmenu();
}
else
{
gotoxy(28,16);cout<<"CANCELLING ORDER ";
for(int a=46;a<56;a++)
{
gotoxy(a,16);cout<<"ÛÛ";
delay(500);
}
sleep(1);
char str[]=" ORDER CANCELLED ";
gotoxy(30,18);cout<<"+------------------------+";
gotoxy(30,19);cout<<"| |";
gotoxy(30,20);cout<<"+------------------------+";
for(int i=0;str[i]!='\0';++i)

{
gotoxy(31+i,19);cout<<str[i];
delay(50);
}
sleep(2);
count=1;
}
}
else
t.write((char*)&s,sizeof(s));
}
r.close();
t.close();
if(count==0)
{
border();
gotoxy(27,8) ;cout<<"*----------------------------*";
gotoxy(27,9) ;cout<<"| SORRY!!! |";
gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,11);cout<<"*----------------------------*";
delay(900);
}
else
{
remove("RECORD.DAT");
rename("temp.dat","RECORD.DAT");
}
}
/*----------------------------------------------------------------------*
|-- --------------------------- UPDATE --------------------------------|
*----------------------------------------------------------------------*/
void update()
{
int id;
border();
gotoxy(36,4);cout<<"+------------+";
gotoxy(36,5);cout<<"|-- UPDATE --|";
gotoxy(36,6);cout<<"+------------+";
gotoxy(15,8);cout<<"Enter the ORDER ID of ORDER to be UPDATED : ";
cin>>id;
gotoxy(15,10);cout<<"**************************************************";
gotoxy(36,12);cout<<"LOADING ";
for(int a=45;a<50;a++)
{
gotoxy(a,12);cout<<"ÛÛ";
delay(500);
}
sleep(1);

int count=0;
fstream r;
r.open("RECORD.DAT",ios::in|ios::out|ios::binary);
while(!r.eof())
{
int pos=r.tellg();
r.read((char*)&s,sizeof(s));
if(id==s.orderid)
{
clrscr();
count=1;
gotoxy(35,3); cout<<"+--------+";
gotoxy(35,4); cout<<"| UPDATE |";
gotoxy(35,5); cout<<"+--------+";
gotoxy(20,7); cout<<"ORDER ID :";
gotoxy(20,8); cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(20,9); cout<<"o NAME : o";
gotoxy(20,10);cout<<"o ADDRESS : o";
gotoxy(20,11);cout<<"o CITY : o";
gotoxy(20,12);cout<<"o PINCODE : o";
gotoxy(20,13);cout<<"o MOBILE No.: o";
gotoxy(20,14);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(31,7); cout<<s.orderid;
gotoxy(34,9); puts(s.name);
gotoxy(34,10); gets(s.add);
gotoxy(34,11);gets(s.city);
gotoxy(34,12);cin>>s.pcode;
gotoxy(34,13);cin>>s.mob;
gotoxy(30,16);cout<<"UPDATING";
for(int b=40;b<50;b++)
{
gotoxy(b,16);cout<<"ÛÛ";
delay(500);
}
sleep(1);
char str[]=" UPDATED ";
gotoxy(35,18);cout<<"+---------------+";
gotoxy(35,19);cout<<"| |";
gotoxy(35,20);cout<<"+---------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(36+i,19);cout<<str[i];
delay(50);
}
sleep(1);
r.seekp(pos);
r.write((char*)&s,sizeof(s));
break;
}

}
if(count==0)
{
border();
gotoxy(27,9) ;cout<<"*----------------------------*";
gotoxy(27,10);cout<<"| SORRY!!! |";
gotoxy(27,11);cout<<"| THE RECORD DOES NOT EXIST. |";
gotoxy(27,12);cout<<"*----------------------------*";
getch();
}
getch();
r.close();
}
/*----------------------------------------------------------------------*
|------------------------------- MORE ---------------------------------|
*----------------------------------------------------------------------*/
void more()
{
border();
char choice;
gotoxy(26,3); cout<<"+--------------------------+";
gotoxy(26,4); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,5); cout<<"+--------------------------+";
gotoxy(27,7); cout<<"*********** MORE *********";
gotoxy(26,9); cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(26,10);cout<<"o 1.SEARCH o";
gotoxy(26,11);cout<<"o (a) . BY ORDER ID o";
gotoxy(26,12);cout<<"o (b) . BY NAME o";
gotoxy(26,13);cout<<"o 2.ORDERS o";
gotoxy(26,14);cout<<"o 3.UPDATE DETAILS o";
gotoxy(26,15);cout<<"o 4.CANCEL ORDER o";
gotoxy(26,16);cout<<"o 5.BACK o";
gotoxy(26,17);cout<<"*ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ*";
gotoxy(26,19);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 'a':
search_order(choice);
break;
case 'b':
search_order(choice);
break;
case '2':
orders();
break;

case '3':
update();
break;
case '4':
cancel_order();
break;
case '5':
mainmenu();
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
sleep(1);
more();
break;
}
}
/*----------------------------------------------------------------------*
|----------------------------- MAIN_MENU ------------------------------|
*--------------------------------------- ------------------------------*/
void mainmenu()
{
int choice;
while(choice!=5)
{
border();
gotoxy(26,3); cout<<"+--------------------------+";
gotoxy(26,4); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,5); cout<<"+--------------------------+";
gotoxy(22,8); cout<<"^^^^^^^^^THE FASHION FORWARD^^^^^^^^^^";
gotoxy(26,10);cout<<"**********MAIN MENU*********";
gotoxy(26,13);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(26,14);cout<<"o 1.MEN'S WEAR o";
gotoxy(26,15);cout<<"o 2.WOMEN'S WEAR o";
gotoxy(26,16);cout<<"o 3.KID'S WEAR o";
gotoxy(26,17);cout<<"o 4.MORE o";
gotoxy(26,18);cout<<"o 5.EXIT o";
gotoxy(26,19);cout<<"+ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ+";
gotoxy(27,21);cout<<"Enter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
mens_wear();
break;
case 2:

womens_wear();
break;
case 3:
kids_wear();
break;
case 4:
more();
break;
case 5:
border();
char str[]="THANKS FOR VISITING...";
gotoxy(29,12);cout<<"+------------------------+";
gotoxy(29,13);cout<<"| |";
gotoxy(29,14);cout<<"+------------------------+";
for(int i=0;str[i]!='\0';++i)
{
gotoxy(32+i,13);cout<<str[i];
delay(50);
}
sleep(1);
exit(0);
break;
default:
gotoxy(50,22);cout<<" Wrong Choice!!!!!...RE-ENTER ";
gotoxy(50,23);cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
break;
}
for(int f=1;f<13;f++)
{
gotoxy(3,f);cout<<"Î";gotoxy(80,f);cout<<"Î";
gotoxy(3,25-f);cout<<"Î";gotoxy(80,25-f);cout<<"Î";
delay(50);
}
}
}
/*----------------------------------------------------------------------*
|----------------------------- BORDER ---------------------------------|
*----------------------------------------------------------------------*/
void border()
{
clrscr();
int i=1,j=1;
for(;i<81;i+=2)
{
gotoxy(i,j);cout<<"/*";
gotoxy(i,j+1);cout<<"~~";
}

i--;j++;
for(;j<=23;++j)
gotoxy(i,j);cout<<"Î";
for(;i>2;i-=2)
{
gotoxy(i-2,j);cout<<"/*";
gotoxy(i-2,j+1);cout<<"~~";
}
j--;i--;
for(;j>1;--j)
gotoxy(i,j);cout<<"Î";
}
/*----------------------------------------------------------------------*
|--------------------------- LOADING_SCREEN ---------------------------|
*----------------------------------------------------------------------*/
void loading()
{
int a;
for(a=50;a>32;a--)
{
clrscr();
textcolor(YELLOW);
gotoxy(25,3);cout<<"*********** WELCOME ************";
gotoxy(a,6);cout<<"TANU Presents.... ";
delay(50);
}
sleep(1);
gotoxy(26,11); cout<<"+--------------------------+";
gotoxy(26,12); cout<<"| FOREVER 21 FASHION STORE |";
gotoxy(26,13); cout<<"+--------------------------+";
gotoxy(30,17);cout<<"LOADING....";
int k=0;
for(int i=1;i<=10;i++)
{
gotoxy(28+k,18);
delay(400);
cout<<"ÛÛ";
k+=2;
gotoxy(50,18);cout<<i<<"0%";
}
gotoxy(33,19);cout<<"COMPLETED";
delay(500); cout<<"!"; delay(500); cout<<"!";
sleep(1);
}

/*----------------------------------------------------------------------*
|-------------------------------- MAIN --------------------------------|
*-------------------------------------- -------------------------------*/
void main()
{
textcolor(GREEN);
border();
gotoxy(15,4);cout<<"************************************************\n\n";
gotoxy(13,6);cout<<" COMPUTER PROJECT ";
gotoxy(13,7);cout<<" ON ";
gotoxy(13,8);cout<<" (C++). \n\n";
gotoxy(15,10);cout<<"************************************************* ";
gotoxy(31,12);cout<<"*-------------------*";
gotoxy(31,13);cout<<"| -TOPIC- |";
gotoxy(31,14);cout<<"| (Fashion Store) |";
// gotoxy(31,15);cout<<"*-------------------*";
// gotoxy(31,16);cout<<"| SESSION-()       |";
// gotoxy(31,17);cout<<"*-------------------*";
delay(2000);
gotoxy(54,20);cout<<"Created by : AYUSH SRIVASTAVA ";
// gotoxy(55,21);cout<<" :  ";
sleep(5);
loading();
mainmenu();
} 