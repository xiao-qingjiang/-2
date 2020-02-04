#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	gets(a);
	int convertInto(char d[]){ 
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
    else return -1;
	}
	int c=convertInto(a);
	if (c!=-1) printf("测试正确\n");
	else printf("error");
	return 0; 
}
