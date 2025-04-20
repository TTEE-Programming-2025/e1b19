#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int main()
{
printf("+--------------------------------------------------+\n");
printf("|               ##                                 |\n");
printf("|          ###  ####              ######           |\n");
printf("|         ####  ###           ### ######  ###      |\n");
printf("|         ###  ###            ### ###### ####      |\n");          /*印出作業兩字*/
printf("|        ####  ###########     ## ###### ###       |\n");
printf("|        #### ######    ##  ##################     |\n");
printf("|       ############             ##    ###         |\n");
printf("|       ######## ###            ####  ####         |\n");
printf("|      ########  ########    ################      |\n");
printf("|     #######    ########    ################      |\n");
printf("|     ######     ###                ##             |\n");
printf("|       ####     ###          ##############       |\n");
printf("|       ####     ###                ##             |\n");
printf("|       ####     #########  ################*      |\n");
printf("|       ####     #########        #####            |\n");
printf("|       ####     ###             ########          |\n");
printf("|       ####     ###           #### ## ####        |\n");
printf("|       ####     ###        ######  ##  ######     |\n");
printf("|       ####     ###        ###    ####    ###     |\n");
printf("+--------------------------------------------------+\n");

int key,num=0;
while(key!=2025)                                                          /*以迴圈令使用者輸入至正確密碼2025*/ 
{
printf("請輸入正確四個數字密碼(預設2025):");
scanf("%d",&key);
printf("%d\n",key);
num++;

  if(num==3&&key!=2025)                                                   /*統計錯誤次數三次將關閉程式*/  
 { 
  printf("輸入錯誤三次");
  return 0;
 } 
}
start:                                                                    /*start標籤*/  
system("cls");                                                            /*印出選擇清單*/ 
printf("         * ~~~~~~~~~~~~~~*\n");
printf("        * A:畫出直角三角形*\n");
printf("       *  B:顯示乘法表     *\n");
printf("      *   C:結束            *\n");
printf("     * ----------------------*\n");

char ch,ch1,g;                                                             
fflush(stdin);            
printf("請輸入A或B或C:");                                                 /*要求輸入清單中A或B或C*/ 
scanf("%c",&ch);

if(ch=='A'||ch=='a')                                                       /*A選單中進一步要求輸入a-n*/ 
{
 	system("cls");
 	fflush(stdin);
 	printf("請輸入a-n的字元:");
 	scanf("%c",&ch1);

while(ch1<'a'||ch1>'n')                                                     /*若非a-n則以迴圈要求重新輸入*/ 
{ 
printf("輸入錯誤請重新輸入:");
scanf("%c",&ch1);
} 

int row=ch1-'a'+1,col=row,space=row-1,i=0;                                   /*以row,col表示直行，與橫列個數，以及space表每一列空白數*/  
int k,h,chz;                                                              
for(k=1;k<=row;k++)                                                       /*外層迴圈控制從k=1開始列印至總列數*/ 
{   
    for(h=1;h<=col;h++)                                                   /*第二層迴圈控制由h=1列印至行內空格數*/ 
	{ 
        for(chz=ch1-i;h>space&&h<=col;h++)                                /*最內層迴圈從h大於空格數位置列印字元至每列字元個數*/ 
        printf("%c",chz++);
        printf("%c",32); 
    }
space--;                                                                      /*每隔一列空格數加一*/ 
i++;                                                                          /*每隔一列字元從減一開始列印*/
printf("\n");   
}

printf("輸入任一字元回到主選單");                                                  
g=getch();                                            
goto start;                                                                   /*輸入任一字元回至start標籤位*/ 
}         
int n=0;
if(ch=='B'||ch=='b')                                                          /*字元為b的選單*/ 
{
printf("請輸入數字1-9:");                                                     /*要求輸入一至九之數字*/ 
scanf("%d",&n);
  while(n<1||n>9)                                                              /*若非一至九之範圍則要求重新輸入*/ 
  {
	printf("輸入錯誤請重新數字1-9:");
	scanf("%d",&n);
  }
    int c,v;
    for(c=1;c<=n;c++){                                                     /*迴圈控制九九層法表c*v列印，外層控制每一列之c會加一，內層控制每列中之v會加一將其乘至n*n*/ 
    for(v=1;v<=n;v++)
   	printf("%d*%d=%d  ",c,v,c*v);
   	printf("\n");
    }
printf("輸入任一字元回到主選單");  
g=getch();
goto start;
}
 
if(ch=='C'||ch=='c')                                                            /*c選單*/ 
{
	char s;                                                                       
	printf("continue?Y/N?");                                                    /*印出是否要繼續程式y/n*/ 
	scanf("%c",&s);
	start1:                                                                     /*start1:若輸入至錯的字元將回到此從新操作*/
	switch(s)
	{
	case 'y':                                                                   /*方案y:從start選單處重新開始*/ 
	case 'Y':	
	goto start;
    case 'n':                                                                   /*方案n:結束程式*/ 
    case 'N':
	return 0;
    default:                                                          
    printf("輸入錯誤請重新輸入(Y/N):");
    scanf("%c",&s);
    goto start1;
	}
}
system("pause");
return 0;
}                                                                               /*這個作業充分利用迴圈，以及當複雜迴圈變數該如何去假設從外層去設想變化是否回影響其他層，
                                                                                  在一直除錯當中了解while以及for的差異，也想過是否有更佳的語法尚未學習過，而當真正卡住
                                       											  的時候我也知道gpt的好處，我參考其變數如何假設如何設更明瞭，以及確定三層迴圈能寫出我要
																				  的程式進而自己思考自己寫出我會的程式。而封面設計則是參考字元生成圖網站去修正再程式能夠
																				  跑出。獨自完成這個程式並發現自己的效率非常的低，並希望透過在未來遇到類似的能越來越快*/ 
