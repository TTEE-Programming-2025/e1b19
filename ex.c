#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("      1<作>1\n");       /*以一個三角形形狀呈現一個風格頁面*/ 
	printf("     12<業>21\n");
	printf("    123<給>321\n");
	printf("   1234<我>4321\n");
	printf("  12345<一>54321\n");
	printf(" 123456<百>654321\n");
	printf("1234567<分>7654321\n");
	
	system("pause");
	system("cls");
	
	int n;
	printf("請輸入四個數字密碼預設2024,錯誤將重新!!\n"); /*要求使用者輸入指定密碼否則重新開始*/
	scanf("%d",&n);
	
	while(n!=2024)              
	{
		printf("%c",'\a');     /*輸錯密碼已警告音提醒*/ 
		return 0;
	}
	
	printf("歡迎!!\n");   /*輸入成功後歡迎字句*/ 
	system("pause");
	system("cls");
	
	printf(" \/------------------------\\\n");  /*提供使用者一個介面參考輸入的字元對應的字句*/ 
	printf(" |   'A'...'Z' :uppercase |\n");
	printf(" |   'a'...'z' :lowercase |\n");
	printf(" |   '0'...'9' :digit     |\n");
	printf(" |   otherwise :陳家弘    |\n");
	printf(" \\------------------------\/\n");
	
	char ch;
	printf("請輸入一個字元\n");   /*變數ch儲存使用者剛輸入的字元*/ 
	fflush(stdin);
	scanf("%c",&ch);

	if(ch<=90&&ch>=65)             /*以選擇語法從剛收到的CH變數去呈現對應的字句*/ 
	printf("uppercase");
	else if(ch<=122&&ch>=97)
	printf("lowercase");
	else if(ch<=57&&ch>=48)
	printf("digit");
	else
	printf("e1b19陳家弘");

	system("pause");
	return 0;
 } 
 /*這是我第一次完成一個完整的小程式，豐富的語法綜合所學的我覺得非常有意義,希望自己能更加精進!*/
