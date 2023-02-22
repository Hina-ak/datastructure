#include<stdio.h>
#include<string.h>
void union1(char*,char*,char*);
void intersection(char*,char*,char*);
void difference(char*,char*,char*);
void main()
{
char s1[20],s2[20],s3[40];

printf("enter elements to first array");
scanf("%s",s1);
printf("enter elements to second array");
scanf("%s",s2);

printf("\n union is");
union1(s1,s2,s3);
printf("%s",s3);
printf("\n intersection is");
intersection(s1,s2,s3);
printf("%s",s3);
printf("\n difference is");
difference(s1,s2,s3);
printf("%s",s3);

}

void union1(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='0' && s2[i]=='0')
{
s3[i]='0';
}
else
{
s3[i]='1';
}
}
s3[i]='\0';
}

void intersection(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1' && s2[i]=='1')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}
s3[i]='\0';
}

void difference(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1' && s2[i]=='0')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}
s3[i]='\0';
}
