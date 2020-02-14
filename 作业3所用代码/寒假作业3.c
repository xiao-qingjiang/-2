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
//以上有部分为缺省源，并没有全部被使用；此程序在devc++上运行没问题，在visual stdio 2019上把scanf()换为scanf_s()即可
int convert(char d[]);
int change(char a[]);//声明新函数，通过新函数将汉字形式转化为数字； 
int main()
{	
    char kankan[10],qian[10],symbol[10];//kankan[10]指 看看；qian[10]指 钱数对应的汉字（为字符串） ；symbol[10]用于判断增加或减少； 
    char a[10],b[10],c[10],d[10];// a[10],b[10],c[10],d[10]分别指 整数 钱包 等于 输入的数字； 
    int sum;
    scanf("%s%s%s%s",a,b,c,d);//输入 整数  钱包 等于 数字 
    sum=convert(d);
    while(!0){                          //一直循环，直到输入“看看” “钱包”后通过break跳出循环；         
        scanf("%s",kankan);
        if(strcmp(kankan,"看看")!=0){ //若输入不是“看看”，则计算还未结束； 
            scanf("%s%s",symbol,qian);//判断增加或减少，以及钱的数值(汉字形式)； 
            if(strcmp(symbol,"增加")==0)//symbol为“增加”；            
                sum+=convert(qian);
            else                        //symbol为“减少”； 
                sum-=convert(qian);
        }
        else{
            scanf("%s",b);//输入为“看看”后输入“钱包”； 
            break;               
        }
    }
    //将sum的数值转化为汉字；
    int sum2;
	if(sum<0) {
		sum2=-sum;printf("负");
		if(sum2<=10) 
        switch(sum2){                    
            case 0:printf("零");break;
            case 1:printf("一");break;
            case 2:printf("二");break;
            case 3:printf("三");break;
            case 4:printf("四");break;
            case 5:printf("五");break;
            case 6:printf("六");break;
            case 7:printf("七");break;
            case 8:printf("八");break;
            case 9:printf("九");break;
            case 10:printf("十");break;
        }
    	else{
        switch(sum2/10){                 //输出十位数； 
            case 1:break;
            case 2:printf("二");break;
            case 3:printf("三");break;
            case 4:printf("四");break;
            case 5:printf("五");break;
            case 6:printf("六");break;
            case 7:printf("七");break;
            case 8:printf("八");break;
            case 9:printf("九");break;    
        }
        printf("十");
        if(sum2%10!=0){                  //输出个位数； 
            switch(sum2%10){
                case 1:printf("一");break;
                case 2:printf("二");break;
                case 3:printf("三");break;
                case 4:printf("四");break;
                case 5:printf("五");break;
                case 6:printf("六");break;
                case 7:printf("七");break;
                case 8:printf("八");break;
                case 9:printf("九");break;
            } 
        }
    }
}    
    else {
    	sum2=sum;
    	if(sum2<=10) 
        switch(sum2){                    
            case 0:printf("零");break;
            case 1:printf("一");break;
            case 2:printf("二");break;
            case 3:printf("三");break;
            case 4:printf("四");break;
            case 5:printf("五");break;
            case 6:printf("六");break;
            case 7:printf("七");break;
            case 8:printf("八");break;
            case 9:printf("九");break;
            case 10:printf("十");break;
        }
    	else{
        switch(sum2/10){                 //输出十位数； 
            case 1:break;
            case 2:printf("二");break;
            case 3:printf("三");break;
            case 4:printf("四");break;
            case 5:printf("五");break;
            case 6:printf("六");break;
            case 7:printf("七");break;
            case 8:printf("八");break;
            case 9:printf("九");break;    
        }
        printf("十");
        if(sum2%10!=0){                  //输出个位数； 
            switch(sum2%10){
                case 1:printf("一");break;
                case 2:printf("二");break;
                case 3:printf("三");break;
                case 4:printf("四");break;
                case 5:printf("五");break;
                case 6:printf("六");break;
                case 7:printf("七");break;
                case 8:printf("八");break;
                case 9:printf("九");break;
            } 
        }
    }
}    
    return 0;
}
//补充函数定义；
//通过strcmp()判断字符串之间的关系，找出输入汉字对应的数值；返回到数字形式； 
int convert(char d[]){ 
    if(strcmp(d,"零")==0)return 0;
    else if(strcmp(d,"一")==0)return 1;
    else if(strcmp(d,"二")==0)return 2;
    else if(strcmp(d,"三")==0)return 3;
    else if(strcmp(d,"四")==0)return 4;
    else if(strcmp(d,"五")==0)return 5;
    else if(strcmp(d,"六")==0)return 6;
    else if(strcmp(d,"七")==0)return 7;
    else if(strcmp(d,"八")==0)return 8;
    else if(strcmp(d,"九")==0)return 9;
    else if(strcmp(d,"十")==0)return 10;
}

