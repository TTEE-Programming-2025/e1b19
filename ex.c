#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("      1<�@>1\n");       /*�H�@�ӤT���ΧΪ��e�{�@�ӭ��歶��*/ 
	printf("     12<�~>21\n");
	printf("    123<��>321\n");
	printf("   1234<��>4321\n");
	printf("  12345<�@>54321\n");
	printf(" 123456<��>654321\n");
	printf("1234567<��>7654321\n");
	
	system("pause");
	system("cls");
	
	int n;
	printf("�п�J�|�ӼƦr�K�X�w�]2024,���~�N���s!!\n"); /*�n�D�ϥΪ̿�J���w�K�X�_�h���s�}�l*/
	scanf("%d",&n);
	
	while(n!=2024)              
	{
		printf("%c",'\a');     /*����K�X�wĵ�i������*/ 
		return 0;
	}
	
	printf("�w��!!\n");   /*��J���\���w��r�y*/ 
	system("pause");
	system("cls");
	
	printf(" \/------------------------\\\n");  /*���ѨϥΪ̤@�Ӥ����Ѧҿ�J���r���������r�y*/ 
	printf(" |   'A'...'Z' :uppercase |\n");
	printf(" |   'a'...'z' :lowercase |\n");
	printf(" |   '0'...'9' :digit     |\n");
	printf(" |   otherwise :���a��    |\n");
	printf(" \\------------------------\/\n");
	
	char ch;
	printf("�п�J�@�Ӧr��\n");   /*�ܼ�ch�x�s�ϥΪ̭��J���r��*/ 
	fflush(stdin);
	scanf("%c",&ch);

	if(ch<=90&&ch>=65)             /*�H��ܻy�k�q�覬�쪺CH�ܼƥh�e�{�������r�y*/ 
	printf("uppercase");
	else if(ch<=122&&ch>=97)
	printf("lowercase");
	else if(ch<=57&&ch>=48)
	printf("digit");
	else
	printf("e1b19���a��");

	system("pause");
	return 0;
 } 
 /*�o�O�ڲĤ@�������@�ӧ��㪺�p�{���A�״I���y�k��X�ҾǪ���ı�o�D�`���N�q,�Ʊ�ۤv���[��i!*/
