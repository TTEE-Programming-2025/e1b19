#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int main()
{
printf("+--------------------------------------------------+\n");
printf("|               ##                                 |\n");
printf("|          ###  ####              ######           |\n");
printf("|         ####  ###           ### ######  ###      |\n");
printf("|         ###  ###            ### ###### ####      |\n");          /*�L�X�@�~��r*/
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
while(key!=2025)                                                          /*�H�j��O�ϥΪ̿�J�ܥ��T�K�X2025*/ 
{
printf("�п�J���T�|�ӼƦr�K�X(�w�]2025):");
scanf("%d",&key);
printf("%d\n",key);
num++;

  if(num==3&&key!=2025)                                                   /*�έp���~���ƤT���N�����{��*/  
 { 
  printf("��J���~�T��");
  return 0;
 } 
}
start:                                                                    /*start����*/  
system("cls");                                                            /*�L�X��ܲM��*/ 
printf("         * ~~~~~~~~~~~~~~*\n");
printf("        * A:�e�X�����T����*\n");
printf("       *  B:��ܭ��k��     *\n");
printf("      *   C:����            *\n");
printf("     * ----------------------*\n");

char ch,ch1,g;                                                             
fflush(stdin);            
printf("�п�JA��B��C:");                                                 /*�n�D��J�M�椤A��B��C*/ 
scanf("%c",&ch);

if(ch=='A'||ch=='a')                                                       /*A��椤�i�@�B�n�D��Ja-n*/ 
{
 	system("cls");
 	fflush(stdin);
 	printf("�п�Ja-n���r��:");
 	scanf("%c",&ch1);

while(ch1<'a'||ch1>'n')                                                     /*�Y�Da-n�h�H�j��n�D���s��J*/ 
{ 
printf("��J���~�Э��s��J:");
scanf("%c",&ch1);
} 

int row=ch1-'a'+1,col=row,space=row-1,i=0;                                   /*�Hrow,col��ܪ���A�P��C�ӼơA�H��space��C�@�C�ťռ�*/  
int k,h,chz;                                                              
for(k=1;k<=row;k++)                                                       /*�~�h�j�鱱��qk=1�}�l�C�L���`�C��*/ 
{   
    for(h=1;h<=col;h++)                                                   /*�ĤG�h�j�鱱���h=1�C�L�ܦ椺�Ů��*/ 
	{ 
        for(chz=ch1-i;h>space&&h<=col;h++)                                /*�̤��h�j��qh�j��Ů�Ʀ�m�C�L�r���ܨC�C�r���Ӽ�*/ 
        printf("%c",chz++);
        printf("%c",32); 
    }
space--;                                                                      /*�C�j�@�C�Ů�ƥ[�@*/ 
i++;                                                                          /*�C�j�@�C�r���q��@�}�l�C�L*/
printf("\n");   
}

printf("��J���@�r���^��D���");                                                  
g=getch();                                            
goto start;                                                                   /*��J���@�r���^��start���Ҧ�*/ 
}         
int n=0;
if(ch=='B'||ch=='b')                                                          /*�r����b�����*/ 
{
printf("�п�J�Ʀr1-9:");                                                     /*�n�D��J�@�ܤE���Ʀr*/ 
scanf("%d",&n);
  while(n<1||n>9)                                                              /*�Y�D�@�ܤE���d��h�n�D���s��J*/ 
  {
	printf("��J���~�Э��s�Ʀr1-9:");
	scanf("%d",&n);
  }
    int c,v;
    for(c=1;c<=n;c++){                                                     /*�j�鱱��E�E�h�k��c*v�C�L�A�~�h����C�@�C��c�|�[�@�A���h����C�C����v�|�[�@�N�䭼��n*n*/ 
    for(v=1;v<=n;v++)
   	printf("%d*%d=%d  ",c,v,c*v);
   	printf("\n");
    }
printf("��J���@�r���^��D���");  
g=getch();
goto start;
}
 
if(ch=='C'||ch=='c')                                                            /*c���*/ 
{
	char s;                                                                       
	printf("continue?Y/N?");                                                    /*�L�X�O�_�n�~��{��y/n*/ 
	scanf("%c",&s);
	start1:                                                                     /*start1:�Y��J�ܿ����r���N�^�즹�q�s�ާ@*/
	switch(s)
	{
	case 'y':                                                                   /*���y:�qstart���B���s�}�l*/ 
	case 'Y':	
	goto start;
    case 'n':                                                                   /*���n:�����{��*/ 
    case 'N':
	return 0;
    default:                                                          
    printf("��J���~�Э��s��J(Y/N):");
    scanf("%c",&s);
    goto start1;
	}
}
system("pause");
return 0;
}                                                                               /*�o�ӧ@�~�R���Q�ΰj��A�H�η�����j���ܼƸӦp��h���]�q�~�h�h�]�Q�ܤƬO�_�^�v�T��L�h�A
                                                                                  �b�@���������F��while�H��for���t���A�]�Q�L�O�_����Ϊ��y�k�|���ǲ߹L�A�ӷ�u���d��
                                       											  ���ɭԧڤ]���Dgpt���n�B�A�ڰѦҨ��ܼƦp�󰲳]�p��]����A�A�H�νT�w�T�h�j���g�X�ڭn
																				  ���{���i�Ӧۤv��Ҧۤv�g�X�ڷ|���{���C�ӫʭ��]�p�h�O�ѦҦr���ͦ��Ϻ����h�ץ��A�{�����
																				  �]�X�C�W�ۧ����o�ӵ{���õo�{�ۤv���Ĳv�D�`���C�A�çƱ�z�L�b���ӹJ����������V�ӶV��*/ 
