#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun1 (char a);                                 /*set four function for menu a-e*/
void fun2 (char b);
void fun3 (char c);
void fun4 (char d);
void fun5 (char e);

struct student                                       /*�s��ǥ͸�ƪ����c*/
{
	char name[10];
	char  id [10];
	int  math ;
	int  physics ;
	int  english ;
}students[10],temp ;                                  /*���c�}�C���ϥΪ̿�J�h��ǥ�,
											�H�Τ@��temp���c�ܼƥΨӥ洫����Ƥj�p���Ȧs�ܼ�*/

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

printf("�п�J�|��ƱK�X(�w�]2025):");
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
fflush(stdin);                                               /*���ϥΪ̿�J�ݭn�ϥΪ����*/
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
  int i=0,result;                                                    /*i�q���c�}�C���ޭ�0�}�l,result�ܼƱ���scanf���Ǧ^��*/
  printf("�п�J05-10����ƨM�w��J�ǥ͸�ƪ��Ӽ�:");
  fflush(stdin);
  scanf("%d",&n);
  fflush(stdin);
    while(n<5||n>10)
    { 
    printf("��J���b�d�򤺽Э��s�ץ�:");
	printf("�п�J05-10����ƨM�w��J�ǥ͸�ƪ��Ӽ�:");
    scanf("%d",&n);
    fflush(stdin);                                                           /*��J�ǥͼ�5-10�s��n�ܼ�*/
    } 
	while(i<n)                                                               /*�j��q����0�s�ǥ͸�Ʀ�n-1���ޭȥN��n�Ӿǥ�*/
	{
	printf("�п�J��%d�Ӿǥͩm�W:",i+1) ;
	gets(students[i].name);
	printf("�Ǹ�:") ;
	gets(students[i].id);
	printf("�ƾ�:") ;
	result=scanf("%d",&students[i].math);
	fflush(stdin);
		while(result!=1)                                                      /*�Yscanf�Ǧ^�Ȥ�=1����������,�����ϥΪ̿�J�����榡*/
		{
		printf("��J���~�Э��s��J") ;
		result=scanf("%d",&students[i].math);
		fflush(stdin);
		}
	printf("���z:") ;
	result=scanf("%d",&students[i].physics);
	fflush(stdin);
		while(result!=1)
		{
		printf("��J���~�Э��s��J") ;
		result=scanf("%d",&students[i].physics);
		fflush(stdin);
		}
	printf("�^��:") ;
	result=scanf("%d",&students[i].english);
	fflush(stdin);
		while(result!=1)
		{
		printf("��J���~�Э��s��J") ;
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
  int i;                                                                             /*i�����c�}�C���ޭ��ܼ�*/
  char k;                                                                             /*k���������N��^���^��D�{��main���ܼ�*/
  	for(i=0;i<n;i++)                                                                  /*�j��C�L����0-(n-1)���ǥ͸��*/
  	{
  	printf("�m�W   �Ǹ�   �ƾ�   ���z   �^��    ����\n");
  	printf("%s      %s      %d      %d      %d       %.1f\n",students[i].name
  											    			,students[i].id
	  										    			,students[i].math
	  										    			,students[i].physics
	  										    			,students[i].english
															,(students[i].math
															+students[i].physics
															+students[i].english)/3.0);
	}
	printf("���U���N���~��:");
	fflush(stdin);
	scanf("%c",&k);	
}

void fun3(char c)
{
  system("cls");
  char names[10],k;                                                       /*�r���}�C���ϥΪ̿�J���j�M���m�W,k���������N��*/
  int i=0,flag=1;                                                          /*i�����ޭ�,flag���T�{���L���j�M���m�W,�Y�L�h��1���h��0*/
  printf("�п�J�Q�j�M���m�W:");
  fflush(stdin);
  gets(names);
  	while(i<n)
	{   
		if(strcmp(students[i].name,names) == 0)                                /*�����}�C�r���O�_�ۦP,�Y�ۦP�h�Ǧ^��=0*/
		{
		flag=0;
		printf("���F!\n�m�W �Ǹ� �ƾ� ���z �^�� ����\n%s    %s    %d     %d    %d   %.1f\n"  /*�L�X���F�B�L�X�j�M�̤����*/
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
	if(flag)                                                                /*�p�G���S���,�L�X�S�����P��*/
	printf("�S�����P��!");
  printf("���U���N���~��:");
  fflush(stdin);
  scanf("%c",&k);		
}

void fun4(char d)
{
  system("cls");
  int i=0,j=0,im,n1=n;                                                          /*i�����ޭ�,j���U�����s�ƦC�}�C������,
  											im���x�s�֦��̰������Ȥ��ǥͤ����ޭ�,n1������U���j��q���ƦܧC���ƦC����*/
  char k;                                   /*k�Ψӱ������N��*/
  float avg,m;                              /*avg��U�ǥͦ��Z������,m�Ψӧ�̰��Ȥ�avg*/

  	for(j=1;j<n;j++)                                    /*�j��~�h�]�w�n�ƦCn-1��,����}�C�̤j�ȱƦ̫ܳ᭱�A�q
	  													�Ѿl���~���X�̤j���Ʀ̫ܳ�H��������{�Ѥp��j���}�C*/
  	{
  	m=(students[0].math+students[0].physics+students[0].english)/3.0;      /*�����]m���Ĥ@�Ӿǥͤ�avg���̤j�Ȧb�}�C��*/
  		for(i=1;i<=(n-j);i++)                                              /*���j��q�ĤG�Ӿǥͧ䧹�Ѿl�ǥͬO�_����j��*/
		{	
		avg=(students[i].math+students[i].physics+students[i].english)/3.0;    /*��i�Ӿǥͤ�avg*/
			if(avg>m)                                                          /*�p�G��i�Ӿǥͤ�avg��m�j�h���Nm��*/
			{
			m=avg;
			im=i;                                                              /*�O���o�ɭԪ����ޭȦ�im�ܼ�*/
			}
		}
	temp=students[n-j];	                                                /*���j��䧹�@����Y�i���Ĥ@���̤javg�����ޭ�
																�Q��temp���c�ܼƱN���̤javg���ǥ͸�Ʒئ̫ܳ�@��*/
	students[n-j]=students[im];
	students[im]=temp;		
	}
  i=0;
  printf("�������Z�q���ܧC�̧Ǭ�\n�m�W ID ����\n");
  while(i<n1)                                                            /*�j��C�L�ǥ͸�Ʊq�Ĥ@�W�̫ܳ�n1=n�W*/
  { 
  printf("��%d�W:%s   %s   %.1f\n",i+1                                    /*n-1���}�C���̫�@�ӯ��ޭ�*/
  								  ,students[n-1].name
  								  ,students[n-1].id
							      ,(students[n-1].math
									+students[n-1].physics
									+students[n-1].english)/3.0);
  n--;                                                                     /*�q�̰�(��)�C�L�̧ܳC(�e)�b�}�C��*/
  i++;
  }
  printf("���U���N���~��:");
  fflush(stdin);
  scanf("%c",&k);
}

void fun5(char e)
{
  system("cls");
  char t;                                                                        /*t�x�s�O�_���}y/n���r��*/
  printf("�T�w���}?(y/n)");
  fflush(stdin);	
  scanf("%c",&t);
  
	while(1)                                                                     /*�Y��y�Ȧ^��{���t��;
																					�Y��n�h�����j��^��D���
																					�Y����L�r��h�n�D���s��J*/
	{
  		if(t=='y'||t=='Y')
  		exit(0);
  		if(t=='n'||t=='N')
  		break;
  		else
  		{
  		printf("��J���~�Э��s��J:") ;
		scanf("%c",&t);
		fflush(stdin); 
		}
	}
  	
}


/*�߱o:�b�o�Ǵ����̫�@���@�~��,���R���P����ۤv�i�B,�H�Τ@�ǽҥ����X�{���y�k,�]��z�Lgpt���оǾǨ�s��,�C��J��@�Ӫ��p
�N��ܦۤv�٤����x���٦��F��O�h�Ǩ쪺,�b�o�ӵ{���ھǨ�p�������Ʀܧ@�~�t��,�H�Φp�����Ӧr��b���c���ܦ��j�M,�o�ӵ{��
�i�H���ڷ���¦,�B�γ\�N���X�i���Ψ��L�a��,�Ӧ��ҧ�i �Ʊ�z�L���_�ǲ����ۤv�q���P�޹D��[�i�B*/
