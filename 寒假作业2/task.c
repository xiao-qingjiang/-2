#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#define ll long long
#define MAX 1000007
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
int convertInto(char d[]);//�����º�����ͨ���º�����������ʽת��Ϊ���֣� 
int main()
{
    char File[100]; 
    printf("�������ļ���ַ\n");
    scanf("%s",File); 
    freopen(File,"r",stdin);//ͨ�������ļ������ã�������룬���������������뺺�֣��س��ɵô�
    char KanKan[10],Qian[10],Symbol[10];//kankan[10]ָ ������qian[10]ָ Ǯ����Ӧ�ĺ��֣�Ϊ�ַ����� ��symbol[10]�����ж����ӻ���٣� 
	char a[10],b[10],c[10],d[10];// a[10],b[10],c[10],d[10]�ֱ�ָ ���� Ǯ�� ���� ��������֣� 
    int sum;
    scanf("%s%s%s%s",a,b,c,d);//���� ����  Ǯ�� ���� ���� 
    sum=convertInto(d);
    while(!0){							//һֱѭ����ֱ�����롰������ ��Ǯ������ͨ��break����ѭ����		  
        scanf("%s",KanKan);
        if(strcmp(KanKan,"����")!=0){	//�����벻�ǡ�������������㻹δ������ 
            scanf("%s%s",Symbol,Qian);//�ж����ӻ���٣��Լ�Ǯ����ֵ(������ʽ)�� 
            if(strcmp(Symbol,"����")==0)//symbolΪ�����ӡ���			
                sum+=convertInto(Qian);
            else						//symbolΪ�����١��� 
                sum-=convertInto(Qian);
        }
        else{
            scanf("%s",b);//����Ϊ�������������롰Ǯ������ 
            break;				 
        }
    }
    //��sum����ֵת��Ϊ���֣� 
    if(sum<=10) 
        switch(sum){					
            case 0:printf("��");break;
            case 1:printf("һ");break;
            case 2:printf("��");break;
            case 3:printf("��");break;
            case 4:printf("��");break;
            case 5:printf("��");break;
            case 6:printf("��");break;
            case 7:printf("��");break;
            case 8:printf("��");break;
            case 9:printf("��");break;
            case 10:printf("ʮ");break;
        }
    else{
        switch(sum/10){					//���ʮλ���� 
            case 1:break;
            case 2:printf("��");break;
            case 3:printf("��");break;
            case 4:printf("��");break;
            case 5:printf("��");break;
            case 6:printf("��");break;
            case 7:printf("��");break;
            case 8:printf("��");break;
            case 9:printf("��");break;    
        }
        printf("ʮ");
        if(sum%10!=0){					//�����λ���� 
            switch(sum%10){
                case 1:printf("һ");break;
                case 2:printf("��");break;
                case 3:printf("��");break;
                case 4:printf("��");break;
                case 5:printf("��");break;
                case 6:printf("��");break;
                case 7:printf("��");break;
                case 8:printf("��");break;
                case 9:printf("��");break;
            } 
        }
    }
    return 0;
}
//���亯�����壻
//ͨ��strcmp()�ж��ַ���֮��Ĺ�ϵ���ҳ����뺺�ֶ�Ӧ����ֵ�����ص�������ʽ�� 
int convertInto(char d[]){ 
    if(strcmp(d,"��")==0)return 0;
    else if(strcmp(d,"һ")==0)return 1;
    else if(strcmp(d,"��")==0)return 2;
    else if(strcmp(d,"��")==0)return 3;
    else if(strcmp(d,"��")==0)return 4;
    else if(strcmp(d,"��")==0)return 5;
    else if(strcmp(d,"��")==0)return 6;
    else if(strcmp(d,"��")==0)return 7;
    else if(strcmp(d,"��")==0)return 8;
    else if(strcmp(d,"��")==0)return 9;
    else if(strcmp(d,"ʮ")==0)return 10;
}
