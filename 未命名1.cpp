#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 10000
int main(int argc,char *argv[] )
{
 char buf[MAX_LINE];  /*缓冲区*/
 FILE *fp;            /*文件指针*/

 int len;             /*行字符个数*/

 if((fp = fopen(argv[2],"r")) == NULL)

 {

 perror("fail to read");

 exit (1) ;

 }
 /*"input.txt"*/ 
char ch;
int sum=0;
int WordNum;
 while((ch=fgetc(fp))!=EOF){
 	buf[sum]=ch;
 	sum++;
 }
 buf[sum]='\0';
 
 char *p=buf;
 int count=0;
 int flag=0;
 while(*p!='\0'){
 	if(*p==' '||*p==','){
 		flag=0;
	 }
	 else if(flag==0){
	 	flag=1;
	 	count++;
	 }
	 p++;
 }
if(argv[1][1]=='c'){
	printf("字符数%d\n",sum);
}
else if(argv[1][1]=='w'){
	 printf("单词数%d",count);
}

  return 0;
}


