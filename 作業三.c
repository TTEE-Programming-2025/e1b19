#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void fun1 (char a);                                 /*set four function for menu a-d*/
void fun2 (char b);
void fun3 (char c);
void fun4 (char d);
char seats[81];										/*set a array save the seats*/

int main() {
	
void (*f[4])(char)={fun1,fun2,fun3,fun4};

for(int i=0;i<71;i++) 								/*set seats have seventy-one '_' to imply the available seat*/
	seats[i]='_';                                      
for(int i=71;i<81;i++)                             /*set seats '*' imply someone taken these seats*/
	seats[i]='*';
	
printf("        ______     \n");
printf("     .-'      '-.  \n");
printf("    /          \\ \n");
printf("   |            |  \n");
printf("   |,  .-.  .-.  ,| \n");
printf("   | )(_o/  \\o_)( | \n");
printf("   |/     /\\     \\| \n");
printf("   (_     ^^     _) \n");
printf("    \\__|IIIIII|__/  \n");
printf("     | \\IIIIII/ |   \n");
printf("     \\          /   \n");
printf("      `--------`    \n");
printf("===========================\n");
printf("  WELCOME USE THE Seat selection system !! \n");
printf("  WHAT YOUR NAME SIR/LADY?\n");
    
char str[15],ch;										/*set string for user enter name;'ch' for enter menu*/
gets(str);
printf("  OK %s,please enter your key:\n",str);
int key,n=0;											/*'n' imply error count*/
fflush(stdin);	
scanf("%d",&key);
    
while(key!=2025)										/*key is :2025,error three time have the alarm*/		
{	
n++;
	if(n==3)
 	{
  	printf("\a");
    return 0;
    }    
printf("Input error, three errors will end the menu, please input again:\n");
fflush(stdin);
scanf("%d",&key);	
}
printf("welcome!!!\n");
system("cls");

srand(time(NULL));					
for(int i=0;i<81;i++) 					/*set Random number and use them to swap string[i]and string[j]*/
{
int j=rand()%82;
int temp=seats[i];
seats[i]=seats[j];
seats[j]=temp;
}

start:    
printf("----------[Booking System]----------\n");
printf("|       a. Available seats          |\n");
printf("|       b. Arrange for you          |\n");
printf("|       c. Choose by yourself       |\n");
printf("|       d. Exit                     |\n");
printf("------------------------------------|\n");
    
printf("choose the a-d menu:\n");
fflush(stdin);
scanf("%c",&ch);
    
while(ch>=97&&ch<=100)						/*set a while for choose the menu*/
{
printf("you choose:%c\n",ch);
(*f[ch-97])(ch);							/*'ch'a-d to fun 1-4*/
goto start;									/*go to menu*/
}
 
system("pause");
return 0;
}

void fun1(char a)
{
printf("\\123456789");						/*printf the seats size*/
for(int c=0,g=1;c<81;c++)
{	
	if(c%9==0)
	{
	printf("\n");
	printf("%d",g);
	g++;
 	} 
printf("%c",seats[c]);
}

printf("\n enter any number,and return to the menu.\n");
char z;									/*enter any char to return menu*/
fflush(stdin);
scanf("%d",&z);
system("cls");
}

void fun2(char b)
{
int p;								/*"p" save How many people*/
printf("How many people(1-4)?");
fflush(stdin);
scanf("%d",&p);

switch(p)					      /*How many people to switch*/
{
case 1:	
srand(time(NULL));
while(1)
{
int j=rand()%82;				/*the rand form a seat for user and not take the '*',once get:exit the while*/
	if(seats[j]=='_')
	{ 
	seats[j]='@';
	break;
	} 
} 
break;
case 2:	
srand(time(NULL));
while(1)
{
int j=rand()%82;
	if(seats[j]=='_'&&j%9!=8)				/*choose not last seat*/
	if(seats[j+1]=='_')						/*choose the next seat is a available seat*/
	{ 
	seats[j]='@',seats[j+1]='@';			/*'@'imply the choose seats*/
	break;
	} 
} 
break;
case 3:
srand(time(NULL));
while(1)
{
int j=rand()%82;
	if(seats[j]=='_'&&j%9!=8)
	if(seats[j+1]=='_'&&j%9!=8)
	if(seats[j+2]=='_'&&(j+2)%9!=8)
	{ 
	seats[j]='@',seats[j+1]='@',seats[j+2]='@';
	break;
	} 
} 
break;
case 4:
srand(time(NULL));
while(1)
{
int j=rand()%82;
	if(seats[j]=='_'&&j%9!=8)
	if(seats[j+1]=='_'&&(j+1)%9!=8)
	if(seats[j+2]=='_'&&(j+2)%9!=8)
	if(seats[j+3]=='_')
	{
	seats[j]='@',seats[j+1]='@',seats[j+2]='@',seats[j+3]='@';
	break;
	} 
	if(seats[j]=='_'&&j%9!=8)
	if(seats[j+1]=='_'&&(j+1)<71)
	if(seats[j+9]=='_')
	if(seats[j+10]=='_')
	{
 	seats[j]='@',seats[j+1]='@',seats[j+9]='@',seats[j+10]='@';
 	break;
	} 
}
}
for(int c=0,g=1;c<81;c++)
{	
	if(c%9==0)
	{
	printf("\n");
	printf("%d",g);
	g++;
 	} 
printf("%c",seats[c]);
}

printf("\nDO YOU AGREE THESE SEATS (Y OR N)?\n");
char z;
fflush(stdin);							/*z for anser the up qestion*/
scanf("%c",&z);

if(z=='Y'||z=='y')						/*if anser is y or Y ,then imply user certain these seats,so the seats will became'*'*/
{
for(int a=0;a<81;a++)
{	
	if(seats[a]=='@')
	seats[a]='*';	
}
system("cls");
}
if(z=='N'||z=='n')					/*if the anser is n or N,these coosen seats will became '_'*/
for(int a=0;a<81;a++)
{	
	if(seats[a]=='@')
	seats[a]='_';	
}
}
 void fun3(char c)
 {
int x,v,b,p,q=0,m;						
char w;

printf("today how many people?");	
fflush(stdin);
scanf("%d",&p);					/*save number of people*/

printf("\\123456789");
for(int c=0,g=1;c<81;c++)
{	
	if(c%9==0)
	{
	printf("\n");
	printf("%d",g);
	g++;
 	} 
printf("%c",seats[c]);
}

printf("\n");

while(q<p)				/*the while is for user to choose the seats*/
{
q++; 
printf("choose your seats(ex:1-2,means the row:1/col:2):");
fflush(stdin);
scanf("%d%c%d",&x,&w,&v);			/*seat is num+'_'+num*/
b=((x-1)*9);						/*'b'ex:if user choose the 2-1,then imply the x=2(row),for string is(x-1)row*9col */
   while(1>x||x>9||1>v||v>9)       /*the row and col is not<1 and >9,if error this while for restart to enter the seats*/
   {
   printf("enter error try again:");
   fflush(stdin);
   scanf("%d%c%d",&x,&w,&v);
   }
   while(seats[b+v-1]=='*')			/*if enter the seats is somebody's seat ,then restart*/
   {
   printf("Someone's sitting here.  try again:");
   fflush(stdin);
   scanf("%d%c%d",&x,&w,&v);
   }
   
seats[b+v-1]='@';					/*the coosen seats became '@'*/
}

printf("\\123456789");
for(int c=0,g=1;c<81;c++)
{	
	if(c%9==0)
	{
	printf("\n");
	printf("%d",g);
	g++;
 	} 
printf("%c",seats[c]);
}
printf("\n");
printf("does these seats correct?\n enter any number for certain¡C ");
scanf("%d",&m);

for(int a=0;a<81;a++)		/*to find the choosen seats'@'and change them to '*' */
{	
	if(seats[a]=='@')
	seats[a]='*';	
}
system("cls");
}
void fun4(char d)
{
char a;
printf("Contunue?(y/n):\n");		
fflush(stdin);
scanf("%c",&a);
if(a=='n'||a=='N')					/*if user not to continue ,then system end*/
exit(0);
while(a!='y'&&a!='Y'&&a!='n'&&a!='N')
{
printf("enter error please enter again:");		/*enter is not y/n,then enter again*/
fflush(stdin);
scanf("%c",&a);
if(a=='n'||a=='N')
exit(0);
}
}

/*
this Program took me very much time ,i really not familiar with the english and typing and  syntax.
This promgram let me The most I practice is loops. 
How can I use loops to solve problems in daily life?
 I've also learned a new random number syntax. With the help of GPT queries
 the key thing is logical thinking, which requires thinking through the problem first, 
 then taking action, running the program, and proving whether my solution is correct or incorrect."
*/
