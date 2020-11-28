#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char a[100], char b[100])
{ int i;
char s[10];
char prob;
if (strcmp(a,b) == 0){
printf("Right answer!!! One point for you  .\n");
}
else
{
printf("Failed but! nice try! You should TRY AGAIN!!! \n\t\t\t\t\t\t 'FAILURE IS THE MOTHER OF SUCCESS'  \n");
printf(" Try Again and any key to exit");
scanf("%c",&prob);
if(1==1)
exit(0);
}
}
int main()
{ int points=0,prob;
printf(" \t \t All Praise to ALLAH");
printf("\t \t \t \t \t WECOME TO PUZZLE WORD!!!\n \t \t \t \t GET READY TO CRACK YOUR BRAIN!!!\n \n \n \n \t \t \t \t \t Get Ready \n \t \t \t \t \t Stage One \n \t \t \t \t Here Computer Will Give You Some jumble words\n\n\n \t \t For each Right Answer you will get one point other wise you are a looser or failure\n\n\n");
printf("Rearrange the jumble word:(Hints: A Part of Body) 'KANEL' ");
char c[100]="ANKEL";
char d[100];
gets(d);
check(c, d);
++points;
printf("Your point is %d\n",points);
printf("Rearrange the jumble word: (Hints: Name of a district) 'RIPFDAUR' ");
char e[100]="FARIDPUR";
char f[100];
gets(f);
check(e, f);
++points;
printf("Your point is %d\n",points);
printf("Rearrange the jumble word: (Hints: Name of an Animal) 'GITER' ");
char g[100]="TIGER";
char h[100];
gets(h);
check(g, h);
++points;
printf("Your point is %d\n",points);
printf("\n \t\t\t\t\t\t Stage Two \n \t\t\t\t\t This time No Hints\n\n\n \t\t\t\t\t Rearrange the jumble words ");
printf("\n\t\t\t\t\tDEAH\t");
char i[100]="HEAD";
char j[100];
gets(j);
check(i,j);
++points;
printf("Your point is %d\n",points);
printf("\t\t\t\t\tHAHJIASR\t");
char k[100]="RAJSHAHI";
char l[100];
gets(l);
check(k, l);
++points;
printf("Your point is %d\n",points);
printf("\t\t\t\t\tEORHS\t");
char o[100]="HORSE";
char p[100];
gets(p);
check(o, p);
++points;
printf("Your point is %d\n",points);
printf("\n \t\t\t\t\t\t You are brilliant!!! \n \t\t\t\t\t Final Stage\n\n\n \t\t\t\t\t Rearrange the jumble sentence\n ");
printf("\t\t ALLAH SUCCESS ONLY MY BY IS \t\t\t\t");
char m[100]="MY SUCCESS IS ONLY BY ALLAH";
char n[100];
gets(n);
check(m, n);
++points;
printf("\n\n\n\t\t\t\t\tYour scores is %d out of %d",points,points);
printf("\n\n\n\t\t\t\t\t You are extra ordinary \n \t\t\t\t\t THANKS FOR PLAYING");
printf("\n\n\n \t\t\t \t Press Any Key To Turn ofF THE JUMBLE GAME");
scanf("%c",&prob);
if(1==1)
exit(0);
}
