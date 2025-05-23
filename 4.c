#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun1 (char a);                                 /*set four function for menu a-e*/
void fun2 (char b);
void fun3 (char c);
void fun4 (char d);
void fun5 (char e);

struct student                                       /*存放學生資料的結構*/
{
	char name[10];
	char  id [10];
	int  math ;
	int  physics ;
	int  english ;
}students[10],temp ;                                  /*結構陣列讓使用者輸入多位學生,
											以及一個temp結構變數用來交換之後排大小的暫存變數*/

int n;
int main()
{
char ch;	
void (*f[5])(char)={fun1,fun2,fun3,fun4,fun5};	
printf("                                                                \n");
printf("                               							        \n");
printf("              											        \n");
printf("    		 .;;%%;;;,        ,;;;;;;;;;;;;;, 			        \n");
printf("   			 ;;%%%%%;;;;,.    ;;;;;;;;;;;;;;; 					\n");
printf("             ;;%%%%%%%%;;;;;, ;;;;;;;;;;;;;;; 					\n");
printf("             `;;%%%%%%%%%;;;;;,;;;;;;;;;;;;;'  					\n");
printf("              `;;%%%%%%%%%%;;;;,;;;;;;;;;;;'                    \n");  
printf("                `;;;%%%%%%%%;;;;,;;;;;;;;;'                     \n");
printf("                   `;;;%%%%%%;;;;.;;;.;;;                       \n");
printf("                      `;;;%%%;;;;;;.;;;,; .,;;'                 \n");
printf("                          `;;;;;;;;;;,;;;;;;'.,;;;,             \n");      
printf("                           ;;;;;;;;;;;;;;;;;;;;;,.              \n");
printf("           .          ..,,;;;;;......;;;;;;;.... ';             \n");          
printf("           ;;,..,;;;;;;;;;;;;..;;;;;;..;;;;.;;;;;.              \n");          
printf("            ';;;;;;;;;;;;;;..;;;a@@@@a;;;;;;;a@@@@a,            \n");           
printf("         .,;;;;;;;;;;;;;;;.;;;a@@@@@@@@;;;;;,@@@@@@@a,          \n");          
printf("       .;;;,;;;;;;;;;;;;;;;;;@@@@@'  @@;;;;;;,@  `@@@@;,        \n");
printf("      ;' ,;;;,;;;;;;;;;;;;;;;@@@@@aa@@;;;;,;;;,@aa@@@@;;;,.,;   \n");
printf("        ;;;,;;;;;;;;;;;;;;;;;;@@@@@@@;;;,;a@@'      `;;;;;;;'   \n");
printf("        ' ;;;,;;;;;;;;;;;;;;;;;;;;;;;;,;a@@@       #  ;;,;;,    \n");
printf(" .//////,,;,;;;;;;;;;;;;;;;,;;;;;;;;,;;a@@@a,        ,a;;;,;;,  \n");
printf(" %,/////,;;;;;;;;;;;;;;;;;;;;,;,;,;;;;a@@@@@@aaaaaaa@@@;;;;;';  \n");
printf(" `%%%%,/,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;@@@@@@@@@@@;00@@;;;;;'    \n");
printf("   %%%%%%,;;;;;;;;;;;;;;;;;;;;;;;;;;;a@@@@@@@@@@;00@@;;;;;'     \n");
printf("    `%%%%%%%%%%,;;;;;;;;;;;;;;;;;;;;a@@@@@@@@@;00@@;;;;;'       \n");
printf("      `%%%%%%%%%%%%%%%,::::;;;;;;;;a@@@@@@@;00@@@::;;;%%%%%,    \n");
printf("        `%%%%%%%%%%%%%%%,::::;;;;;@@@@@@' 0@@@@::;;%%%%%%%%'    \n");
printf("           Oo%%%%%%%%%%%%,::::;;a@@@@@'  ,@@@::;;%%%%%%%'       \n");
printf("            `OOo%%%%%%%%%%,::::@@@@@'    @@;::;%%%%%%'          \n");
printf("              `OOOo%%%%%%%%,:::@@@@,;;;,a@:;;%%%%%'             \n");
printf("                `OOOOOo%%%%%,:::@@@aaaa@';;%%%%'                \n");
printf("                   `OOOO;@@@@@@@@aa@@@@@@@@@'                   \n");
printf("                       ;@@@@@@@@@@@@@@@@@@@'                    \n");
printf("                        @@@@@@@@'`@@@@@@@@'                     \n");
printf("                        `@@@@@'    @@@@@'                       \n");
printf("                         `@@'       @@'                         \n");

printf("請輸入四位數密碼(預設2025):");
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
printf("Input error, three errors will end the system, please input again:\n");
fflush(stdin);
scanf("%d",&key);	
}
printf("welcome!!!\n");
system("cls");

start:    
printf("-----------[Grade System]-----------\n");
printf("|       a. Enter student grades     |\n");
printf("|       b. Display student grades   |\n");
printf("|       c. Search for student grades|\n");
printf("|       d. Grade ranking            |\n");
printf("|       e.Exit system               |\n");
printf("-------------------------------------\n");
    
printf("choose the a-e menu:\n");
fflush(stdin);                                               /*讓使用者輸入需要使用的選單*/
scanf("%c",&ch);
printf("you choose:%c\n",ch);
(*f[ch-97])(ch);                                            /*'ch'a-e to fun 1-5*/
system("cls");						
goto start;									                /*go to menu*/
                                                           
system("pause");
return 0;
}

void fun1(char a)
{
  system("cls");
  int i=0,result;                                                    /*i從結構陣列索引值0開始,result變數接收scanf的傳回值*/
  printf("請輸入05-10的整數決定填入學生資料的個數:");
  fflush(stdin);
  scanf("%d",&n);
  fflush(stdin);
    while(n<5||n>10)
    { 
    printf("輸入未在範圍內請重新修正:");
	printf("請輸入05-10的整數決定填入學生資料的個數:");
    scanf("%d",&n);
    fflush(stdin);                                                           /*輸入學生數5-10存至n變數*/
    } 
	while(i<n)                                                               /*迴圈從索引0存學生資料至n-1索引值代表n個學生*/
	{
	printf("請輸入第%d個學生姓名:",i+1) ;
	gets(students[i].name);
	printf("學號:") ;
	gets(students[i].id);
	printf("數學:") ;
	result=scanf("%d",&students[i].math);
	fflush(stdin);
		while(result!=1)                                                      /*若scanf傳回值不=1為接收失敗,提醒使用者輸入錯的格式*/
		{
		printf("輸入有誤請重新輸入") ;
		result=scanf("%d",&students[i].math);
		fflush(stdin);
		}
	printf("物理:") ;
	result=scanf("%d",&students[i].physics);
	fflush(stdin);
		while(result!=1)
		{
		printf("輸入有誤請重新輸入") ;
		result=scanf("%d",&students[i].physics);
		fflush(stdin);
		}
	printf("英文:") ;
	result=scanf("%d",&students[i].english);
	fflush(stdin);
		while(result!=1)
		{
		printf("輸入有誤請重新輸入") ;
		result=scanf("%d",&students[i].english);
		fflush(stdin);
		}
	i++;
	printf("\n") ;
	}
}

void fun2(char b)
{
  system("cls");
  int i;                                                                             /*i為結構陣列索引值變數*/
  char k;                                                                             /*k為接收任意鍵回到後回到主程式main之變數*/
  	for(i=0;i<n;i++)                                                                  /*迴圈列印索引0-(n-1)之學生資料*/
  	{
  	printf("姓名   學號   數學   物理   英文    平均\n");
  	printf("%s      %s      %d      %d      %d       %.1f\n",students[i].name
  											    			,students[i].id
	  										    			,students[i].math
	  										    			,students[i].physics
	  										    			,students[i].english
															,(students[i].math
															+students[i].physics
															+students[i].english)/3.0);
	}
	printf("按下任意鍵繼續:");
	fflush(stdin);
	scanf("%c",&k);	
}

void fun3(char c)
{
  system("cls");
  char names[10],k;                                                       /*字元陣列讓使用者輸入欲搜尋之姓名,k為接收任意鍵*/
  int i=0,flag=1;                                                          /*i為索引值,flag為確認有無找到搜尋之姓名,若無則為1有則為0*/
  printf("請輸入想搜尋之姓名:");
  fflush(stdin);
  gets(names);
  	while(i<n)
	{   
		if(strcmp(students[i].name,names) == 0)                                /*比較兩陣列字元是否相同,若相同則傳回值=0*/
		{
		flag=0;
		printf("找到了!\n姓名 學號 數學 物理 英文 平均\n%s    %s    %d     %d    %d   %.1f\n"  /*印出找到了且印出搜尋者之資料*/
															,students[i].name
  											    			,students[i].id
	  										    			,students[i].math
	  										    			,students[i].physics
	  										    			,students[i].english
															,(students[i].math
															+students[i].physics
															+students[i].english)/3.0);
		break;
		}
	i++;													  	
	}
	if(flag)                                                                /*如果都沒找到,印出沒有此同學*/
	printf("沒有此同學!");
  printf("按下任意鍵繼續:");
  fflush(stdin);
  scanf("%c",&k);		
}

void fun4(char d)
{
  system("cls");
  int i=0,j=0,im,n1=n;                                                          /*i為索引值,j為下面重新排列陣列之次數,
  											im為儲存擁有最高平均值之學生之索引值,n1為控制下面迴圈從高排至低之排列次數*/
  char k;                                   /*k用來接收任意鍵*/
  float avg,m;                              /*avg算各學生成績之平均,m用來找最高值之avg*/

  	for(j=1;j<n;j++)                                    /*迴圈外層設定要排列n-1次,先找陣列最大值排至最後面再從
	  													剩餘的繼續找出最大直排至最後以此類推行程由小到大之陣列*/
  	{
  	m=(students[0].math+students[0].physics+students[0].english)/3.0;      /*先假設m為第一個學生之avg當成最大值在陣列中*/
  		for(i=1;i<=(n-j);i++)                                              /*內迴圈從第二個學生找完剩餘學生是否有更大值*/
		{	
		avg=(students[i].math+students[i].physics+students[i].english)/3.0;    /*第i個學生之avg*/
			if(avg>m)                                                          /*如果第i個學生之avg比m大則取代m值*/
			{
			m=avg;
			im=i;                                                              /*記錄這時候的索引值至im變數*/
			}
		}
	temp=students[n-j];	                                                /*內迴圈找完一輪後即可找到第一次最大avg之索引值
																利用temp結構變數將找到最大avg之學生資料煥至最後一個*/
	students[n-j]=students[im];
	students[im]=temp;		
	}
  i=0;
  printf("平均成績從高至低依序為\n姓名 ID 平均\n");
  while(i<n1)                                                            /*迴圈列印學生資料從第一名至最後n1=n名*/
  { 
  printf("第%d名:%s   %s   %.1f\n",i+1                                    /*n-1為陣列之最後一個索引值*/
  								  ,students[n-1].name
  								  ,students[n-1].id
							      ,(students[n-1].math
									+students[n-1].physics
									+students[n-1].english)/3.0);
  n--;                                                                     /*從最高(後)列印至最低(前)在陣列中*/
  i++;
  }
  printf("按下任意鍵繼續:");
  fflush(stdin);
  scanf("%c",&k);
}

void fun5(char e)
{
  system("cls");
  char t;                                                                        /*t儲存是否離開y/n之字元*/
  printf("確定離開?(y/n)");
  fflush(stdin);	
  scanf("%c",&t);
  
	while(1)                                                                     /*若為y值回到程式系統;
																					若為n則跳離迴圈回到主選單
																					若為其他字原則要求重新輸入*/
	{
  		if(t=='y'||t=='Y')
  		exit(0);
  		if(t=='n'||t=='N')
  		break;
  		else
  		{
  		printf("輸入錯誤請重新輸入:") ;
		scanf("%c",&t);
		fflush(stdin); 
		}
	}
  	
}


/*心得:在這學期的最後一份作業中,有充分感受到自己進步,以及一些課本未出現的語法,也能透過gpt之教學學到新的,每當遇到一個狀況
就表示自己還不熟悉或還有東西是多學到的,在這個程式我學到如何跳離函數至作業系統,以及如何比對兩個字串在結構中變成搜尋,這個程式
可以讓我當成基礎,且或許將來擴展應用到其他地方,而有所改進 希望透過不斷學習讓自己從不同管道更加進步*/
