#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include <process.h>
#include<math.h>

int n,v,c=0,l=3,st,i,p,show=1,hit=0,l_hit=19,good=0,pp=0,gi;
int count=0;
char ch='1',a='2',take;
double j=10500;

void p1();  /// 562-571
void p2();  /// 576-585
void p3();  /// 590-599
void p4();  /// 604-613
void p5();  /// 618-628
void p6();  /// 633-642
void p7();  /// 647-656
void p8();  /// 661-170
void p9();  /// 675-685


void box1();  /// 351-379
void box2();  /// 384-425
void box3();  /// 430-484


void small_Delay();    /// 1559-1565
void so_small_Delay(); /// 1570-1576
void L_small_Delay();  /// 1662-1668


void Delay1(long double); /// 315-322
void Delay2(long double); /// 327-334
void Delay3(long double); /// 339-346


void show_Level1(); /// 773-816
void show_Level2(); /// 821-871
void show_Level3(); /// 876-926


void level1(); /// 176-203
void level2(); /// 208-248
void level3(); /// 253-310


void game_name();   /// 1673- 1780
void wanna_play();  /// 956-1450
void go_3_2_1();    /// 690-768
void go_be_gr();    /// 1498-1554

void load();  /// 545-557
void info();  /// 1581-1657
void go ();   /// 931- 951


int  Scoreonly();   /// 534-539
void game_OVER ();  /// 1455-1493
void record();      /// 489-529


void gotoxy( double x, double y )
  {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
  }

int main()
{
st=getch();
game_name();
info();
wanna_play();
system("cls");
show_Level1();
go_3_2_1();
do{ take='Z';
 do
    {
     do
   {
      system("cls");
        if(c<=50)
            {level1();

            }
        if(c>50&&c<=100)
        {
            if(show==1)
            {
             show_Level2();
             show++;
             load();
            }
            level2();

        }

        if(c>100)
            {
            if(show==2)
            {
             show_Level3();
             show++;
             load();


            }
            level3();

            }

   v=n;
   p=c;

   if(hit==6||l_hit==-1)
    break;
   }while(!kbhit());
   a=getch();
   if(a==ch)
   {
     system("color 0C");
     for(i=0;i<=50000000;i++)
     {
     }
     c++;
     hit=0;
     l_hit++;
     good++;
     Beep(3000,100);

   }
   else if(a=='P'||a=='p')
   {
     pp++;
     break;
   }
   else
   {
       l-- ;
       system("color 0B");
     for(i=0;i<=50000000;i++)
     {
     }
    Beep(200,500);
   }
   {if(hit==6||l_hit==-1)
    break;}


}while(l>=0);
{if(hit==6||l_hit==-1)
    break;}
if(pp==1)
{
    take=getch();
    pp=0;
}
}while(l>=0&&(take=='P'||take=='p'));
 game_OVER ();
 record();

    getch();
   return 0;

}

/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void level1()
{
    system("color F1");
    box1();

    n = rand()%3 ;

    if(v!=n)
   {l_hit--;
  hit++;

    if(n==0)
    {   go_be_gr();
        p1();
    }
    else if(n==1)
    {   go_be_gr();
        p2();
    }

    else if(n==2)
    {   go_be_gr();
        p3();
    }
    count++;
    Delay1(n);
   }
}

/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void level2()
{   system("color F2");
     box2();

    n = rand()%6 ;

   if(v!=n)
   {l_hit--;
  hit++;

    if(n==0)
    {   go_be_gr();
        p1();
    }
    else if(n==1)
    {   go_be_gr();
        p2();
    }

    else if(n==2)
    {   go_be_gr();
        p3();
    }

    else if(n==3)
    {   go_be_gr();
        p4();
    }
    else if(n==4)
    {   go_be_gr();
        p5();
    }

    else if(n==5)
    {   go_be_gr();
        p6();
    }
    count++;
    Delay2(n);
   }
}

/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void level3()
{
  system("color F3");
  box3();

    n = rand()%9 ;

   if(v!=n)
   {l_hit--;
  hit++;

    if(n==0)
    {   go_be_gr();
        p1();
    }
    else if(n==1)
    {   go_be_gr();
        p2();
    }

    else if(n==2)
    {   go_be_gr();
        p3();
    }

    else if(n==3)
    {   go_be_gr();
        p4();
    }
    else if(n==4)
    {   go_be_gr();
        p5();
    }

    else if(n==5)
    {   go_be_gr();
        p6();
    }
     else if(n==6)
    {   go_be_gr();
        p7();
    }
    else if(n==7)
    {   go_be_gr();
        p8();
    }

    else if(n==8)
    {   go_be_gr();
        p9();
    }


    count++;
    Delay3(n);
   }

}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void Delay1(long double x)
{
  long double i;
if(p<c&&j>9000)
    {j-=5;
    }
    for(i=0;i<=j;i+=.0001);
}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void Delay2(long double x)
{
  long double i;
if(p<c&&j>9000)
    {j-=10;
    }
    for(i=0;i<=j;i+=.0001);
}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void Delay3(long double k)
{
    long double i;
if(p<c&&j>9000)
    {j-=30;
    }
    for(i=0;i<=j;i+=.0001);
}

/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/
/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/

void box1()
{
   gotoxy(18,5);
    printf("==============================");
    gotoxy(18,10);
    printf("==============================");
    gotoxy(18,7);
    printf("||  7         8         9   ||");
    gotoxy(17,6);
    printf(" ||                          ||");
    gotoxy(17,8);
    printf(" ||                          ||");
    gotoxy(17,9);
    printf(" ||                          ||");

    gotoxy(60,5);
      printf("score : %d",c);
      if(l>=0){
      gotoxy(60,7);
      printf("life : %d",l);
      }
       gotoxy(60,9);
      printf("level : 1");
      gotoxy(60,11);
      printf("Miss Hit : %d",hit);
      gotoxy(60,13);
      printf("LEFT Hit : %d",l_hit);

}

/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/
/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/

void box2()
{
   gotoxy(18,5);
    printf("==============================");
    gotoxy(18,16);
    printf("==============================");
    gotoxy(18,7);
    printf("||  7         8         9   ||");
    gotoxy(18,13);
    printf("||  4         5         6   ||");
     gotoxy(17,6);
    printf(" ||                          ||");
    gotoxy(17,8);
    printf(" ||                          ||");
    gotoxy(17,9);
    printf(" ||                          ||");
    gotoxy(17,11);
    printf(" ||                          ||");
    gotoxy(17,12);
    printf(" ||                          ||");
    gotoxy(17,10);
    printf(" ||                          ||");
    gotoxy(17,14);
    printf(" ||                          ||");
    gotoxy(17,15);
    printf(" ||                          ||");

    gotoxy(60,5);
      printf("score : %d",c);
      if(l>=0){
      gotoxy(60,7);
      printf("life : %d",l);
      }
      gotoxy(60,9);
      printf("level : 2");
      gotoxy(60,11);
      printf("Miss Hit : %d",hit);
      gotoxy(60,13);
      printf("LEFT Hit : %d",l_hit);


}

/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/
/**BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*/

void box3()
{
    gotoxy(18,5);
    printf("==============================");
    gotoxy(18,21);
    printf("==============================");
    gotoxy(18,7);
    printf("||  7         8         9   ||");
    gotoxy(18,13);
    printf("||  4         5         6   ||");
    gotoxy(18,18);
    printf("||  1         2         3   ||");
    gotoxy(17,6);
    printf(" ||                          ||");
    gotoxy(17,8);
    printf(" ||                          ||");
    gotoxy(17,9);
    printf(" ||                          ||");
    gotoxy(17,11);
    printf(" ||                          ||");
    gotoxy(17,12);
    printf(" ||                          ||");
    gotoxy(17,10);
    printf(" ||                          ||");

    gotoxy(17,14);
    printf(" ||                          ||");
    gotoxy(17,15);
    printf(" ||                          ||");
    gotoxy(17,16);
    printf(" ||                          ||");
    gotoxy(17,17);
    printf(" ||                          ||");

    gotoxy(17,19);
    printf(" ||                          ||");
    gotoxy(17,20);
    printf(" ||                          ||");
       gotoxy(60,5);
      printf("score : %d",c);
      if(l>=0){
      gotoxy(60,7);
      printf("life : %d",l);
      }
      gotoxy(60,9);
      printf("level : 3");
      gotoxy(60,11);
      printf("Miss Hit : %d",hit);
      gotoxy(60,13);
      printf("LEFT Hit : %d",l_hit);




}

/**RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*/
/**RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*/

void record()
{
    system("color 0B");
   char plname[20],nplname[20],cha,c;
   int i,j,px;
   FILE *info;
   info=fopen("mice.txt","a+");
   getch();
   system("cls");
   printf("Enter your name\n");
   scanf("%[^\n]",plname);
   for(j=0;plname[j]!='\0';j++){
   nplname[0]=toupper(plname[0]);
   if(plname[j-1]==' '){
   nplname[j]=toupper(plname[j]);
   nplname[j-1]=plname[j-1];}
   else nplname[j]=plname[j];
   }
   nplname[j]='\0';

   fprintf(info,"Player Name :%s\n",nplname);

   time_t mytime;
  mytime = time(NULL);
  fprintf(info,"Played Date:%s",ctime(&mytime));

     fprintf(info,"Score:%d\n",px=Scoreonly());
   for(i=0;i<=50;i++)
   fprintf(info,"%c",'_');
   fprintf(info,"\n");
   fclose(info);
   printf("wanna see past records press 'y'\n");
   cha=getch();
   system("cls");
   if(cha=='y'){
   info=fopen("mice.txt","r");
   do{
       putchar(c=getc(info));
       }while(c!=EOF);}
     fclose(info);
}

/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS*/
/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS*/

int Scoreonly()
{
int score=c;
system("cls");
return score;
}


/**LOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLLOLOLOOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOL*/
/**LOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLLOLOLOOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOL*/

void load()
{
    system("cls");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);
    printf("%c",177);}
    system("cls");

}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p1()
{
gotoxy(18,6);
        printf("|| ___                      ||");
        gotoxy(18,7);
        printf("||(',')       8         9   ||");
        gotoxy(18,8);
        printf("||(___)                     ||");
        ch='7';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p2()
{
 gotoxy(18,6);
        printf("||           ___            ||");
        gotoxy(18,7);
        printf("||  7       (',')       9   ||");
        gotoxy(18,8);
        printf("||          (___)           ||");
        ch='8';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p3()
{
  gotoxy(18,6);
        printf("||                     ___  ||");
        gotoxy(18,7);
        printf("||  7         8       (',') ||");
        gotoxy(18,8);
        printf("||                    (___) ||");
        ch='9';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p4()
{
   gotoxy(18,12);
        printf("|| ___                      ||");
        gotoxy(18,13);
        printf("||(',')       5         6   ||");
        gotoxy(18,14);
        printf("||(___)                     ||");
        ch='4';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p5()
{
 gotoxy(18,12);
        printf("||           ___            ||");
        gotoxy(18,13);
        printf("||  4       (',')       6   ||");
        gotoxy(18,14);
        printf("||          (___)           ||");
        ch='5';

}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p6()
{
 gotoxy(18,12);
        printf("||                     ___  ||");
        gotoxy(18,13);
        printf("||  4         5       (',') ||");
        gotoxy(18,14);
        printf("||                    (___) ||");
        ch='6';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p7()
{
 gotoxy(18,17);
        printf("|| ___                      ||");
        gotoxy(18,18);
        printf("||(',')       2         3   ||");
        gotoxy(18,19);
        printf("||(___)                     ||");
        ch='1';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p8()
{
 gotoxy(18,17);
        printf("||           ___            ||");
        gotoxy(18,18);
        printf("||  1       (',')       3   ||");
        gotoxy(18,19);
        printf("||          (___)           ||");
        ch='2';
}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP*/

void p9()
{
    gotoxy(18,17);
        printf("||                     ___  ||");
        gotoxy(18,18);
        printf("||  1         2       (',') ||");
        gotoxy(18,19);
        printf("||                    (___) ||");
        ch='3';

}

/**G123G123G123G123G123G123GT123G123G123G123G123G123G123G123G123G1233G123G123*/
/**G123G123G123G123G123G123GT123G123G123G123G123G123G123G123G123G1233G123G123*/

void go_3_2_1()
{

 system ("cls");
 system ("color 1F");
 gotoxy(50,9);
 printf("   *****");
 gotoxy(50,10);
 printf(" **    **");
 gotoxy(50,11);
 printf(" **     **");
 gotoxy(50,12);
 printf("      **");
 gotoxy(50,13);
 printf("     **");
 gotoxy(50,14);
 printf("      **");
 gotoxy(50,15);
 printf(" **     **");
 gotoxy(50,16);
 printf(" **    **");
 gotoxy(50,17);
 printf("   *****");
 Delay3(1);

 system ("cls");
 system ("color 2F");
 gotoxy(50,9);
 printf("  *****");
 gotoxy(50,10);
 printf(" **   **");
 gotoxy(50,11);
 printf(" **    **");
 gotoxy(50,12);
 printf("       **");
 gotoxy(50,13);
 printf("      **");
 gotoxy(50,14);
 printf("     **");
 gotoxy(50,15);
 printf("   **");
 gotoxy(50,16);
 printf(" ********");
 gotoxy(50,17);
 printf(" ********");
 Delay3(1);



 system ("cls");
 system ("color 3F");
 gotoxy(50,9);
 printf("    **");
 gotoxy(50,10);
 printf("  ****");
 gotoxy(50,11);
 printf(" ** **");
 gotoxy(50,12);
 printf("    **");
 gotoxy(50,13);
 printf("    **");
 gotoxy(50,14);
 printf("    **");
 gotoxy(50,15);
 printf("    **");
 gotoxy(50,16);
 printf(" ********");
 gotoxy(50,17);
 printf(" ********");
 Delay3(1);
 system ("cls");
 system ("color 4F");
 go ();
 Delay3(1);
 system ("cls");



}

/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void show_Level1()
{ int vv;
    system("color 0D");
 gotoxy(20,9);
 printf("***          ********    ***             ***    ********     ***");
 gotoxy(20,10);
 printf("***          ********     ***           ***     ********     ***");
 gotoxy(20,11);
 printf("***          **            ***         ***      **           ***");
 gotoxy(20,12);
 printf("***          *****          ***       ***       *****        ***");
 gotoxy(20,13);
 printf("***          ******          ***     ***        ******       ***");
 gotoxy(20,14);
 printf("***          *****            ***   ***         *****        ***");
 gotoxy(20,15);
 printf("***   **     **                *** ***          **           ***   **");
 gotoxy(20,16);
 printf("********     ********           *****           ********     ********");
 gotoxy(20,17);
 printf("********     ********            ***            ********     ********");

 gotoxy(100,9);
 printf("    **");
 gotoxy(100,10);
 printf("  ****");
 gotoxy(100,11);
 printf(" ** **");
 gotoxy(100,12);
 printf("    **");
 gotoxy(100,13);
 printf("    **");
 gotoxy(100,14);
 printf("    **");
 gotoxy(100,15);
 printf("    **");
 gotoxy(100,16);
 printf(" ********");
 gotoxy(100,17);
 printf(" ********");


 vv=getch();
}

/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void show_Level2()
{
 int vv;
 gotoxy(20,9);
 printf("***          ********    ***             ***    ********     ***");
 gotoxy(20,10);
 printf("***          ********     ***           ***     ********     ***");
 gotoxy(20,11);
 printf("***          **            ***         ***      **           ***");
 gotoxy(20,12);
 printf("***          *****          ***       ***       *****        ***");
 gotoxy(20,13);
 printf("***          ******          ***     ***        ******       ***");
 gotoxy(20,14);
 printf("***          *****            ***   ***         *****        ***");
 gotoxy(20,15);
 printf("***   **     **                *** ***          **           ***   **");
 gotoxy(20,16);
 printf("********     ********           *****           ********     ********");
 gotoxy(20,17);
 printf("********     ********            ***            ********     ********");

 gotoxy(100,9);
 printf("  *****");
 gotoxy(100,10);
 printf(" **   **");
 gotoxy(100,11);
 printf(" **    **");
 gotoxy(100,12);
 printf("       **");
 gotoxy(100,13);
 printf("      **");
 gotoxy(100,14);
 printf("     **");
 gotoxy(100,15);
 printf("   **");
 gotoxy(100,16);
 printf(" ********");
 gotoxy(100,17);
 printf(" ********");

 gotoxy(25,20);
 printf("Score: %d",c);
 gotoxy(40,20);
 printf("Life: %d",l);
 gotoxy(50,20);
 printf("Left Hit: %d",l_hit);

 vv=getch();

}

/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/
/**SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL*/

void show_Level3()
{
    int vv;
 gotoxy(20,9);
 printf("***          ********    ***             ***    ********     ***");
 gotoxy(20,10);
 printf("***          ********     ***           ***     ********     ***");
 gotoxy(20,11);
 printf("***          **            ***         ***      **           ***");
 gotoxy(20,12);
 printf("***          *****          ***       ***       *****        ***");
 gotoxy(20,13);
 printf("***          ******          ***     ***        ******       ***");
 gotoxy(20,14);
 printf("***          *****            ***   ***         *****        ***");
 gotoxy(20,15);
 printf("***   **     **                *** ***          **           ***   **");
 gotoxy(20,16);
 printf("********     ********           *****           ********     ********");
 gotoxy(20,17);
 printf("********     ********            ***            ********     ********");

 gotoxy(100,9);
 printf("   *****");
 gotoxy(100,10);
 printf(" **    **");
 gotoxy(100,11);
 printf(" **     **");
 gotoxy(100,12);
 printf("      **");
 gotoxy(100,13);
 printf("     **");
 gotoxy(100,14);
 printf("      **");
 gotoxy(100,15);
 printf(" **     **");
 gotoxy(100,16);
 printf(" **    **");
 gotoxy(100,17);
 printf("   *****");

 gotoxy(25,20);
 printf("Score: %d",c);
 gotoxy(40,20);
 printf("Life: %d",l);
 gotoxy(50,20);
 printf("Left Hit: %d",l_hit);


 vv=getch();
}

/**GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG*/
/**GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG*/

void go ()
{
 gotoxy(40,9);
 printf("   ********              **********");
 gotoxy(40,10);
 printf(" ***       ***          ************");
 gotoxy(40,11);
 printf("***         ***        ***        ***");
 gotoxy(40,12);
 printf("***                    **          **");
 gotoxy(40,13);
 printf("***                    **          **");
 gotoxy(40,14);
 printf("***      ********      **          **");
 gotoxy(40,15);
 printf(" ***     ***  ***      ***        ***");
 gotoxy(40,16);
 printf("  ***    ***  ***       ************");
 gotoxy(40,17);
 printf("    ********  ***        **********");
}

/**WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW*/
/**WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW*/

void wanna_play()
{
double t,x,y,m=12,k,hu,coo=0;
    system("cls");
    system("color 0B");
        for(t=1;t<=360;t+=1)
    {
        x=2*2*12.5*cos(t);
        y=2*2*6*sin(t);

      gotoxy(x*.56+40,y*.56+20);
      printf("*");
      gotoxy(x*.51+40,y*.51+20);
      printf("*");
      gotoxy(x*.52+40,y*.52+20);
      printf("*");
      gotoxy(x*.53+40,y*.53+20);
      printf("*");
      gotoxy(x*.54+40,y*.54+20);
      printf("*");
      gotoxy(x*.55+40,y*.55+20);
      printf("*");

    }

    for(t=1;t<=360;t+=1)
    {
        x=12.5*cos(t);
        y=6*sin(t);

      gotoxy(x*.56+30,y*.56+15);
      printf("*");
      gotoxy(x*.51+30,y*.51+15);
      printf("*");
      gotoxy(x*.52+30,y*.52+15);
      printf("*");
      gotoxy(x*.53+30,y*.53+15);
      printf("*");
      gotoxy(x*.54+30,y*.54+15);
      printf("*");
      gotoxy(x*.55+30,y*.55+15);
      printf("*");

    }

    for(t=1;t<=360;t+=1)
    {
        x=12.5*cos(t);
        y=6*sin(t);

      gotoxy(x*.56+50,y*.56+15);
      printf("*");
      gotoxy(x*.51+50,y*.51+15);
      printf("*");
      gotoxy(x*.52+50,y*.52+15);
      printf("*");
      gotoxy(x*.53+50,y*.53+15);
      printf("*");
      gotoxy(x*.54+50,y*.54+15);
      printf("*");
      gotoxy(x*.55+50,y*.55+15);
      printf("*");

      gotoxy(30+6,21-4);
 printf("  ***");
 gotoxy(30+6,22-4);
 printf(" *****");
 gotoxy(30+6,23-4);
 printf("*******");
 gotoxy(30+6,24-4);
 printf("*******");

    }

   do
   {while(m<=16)
    {



      if(m==12)
     {
      gotoxy(80,10);
 printf("WANNA PLAY ?");
      gotoxy(28,12);
      printf("***");
      gotoxy(28,13);
      printf("***");
      gotoxy(48,12);
      printf("***");
      gotoxy(48,13);
      printf("***");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **********************");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **********************");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }
      if(m==13)
     {
      gotoxy(80,10);
 printf("              ");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("***");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("***");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("***");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("***");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **********************");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **********************");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }

      if(m==14){
            gotoxy(80,10);
 printf("WANNA PLAY ?");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("***");
      gotoxy(28,14);
      printf("***");
      gotoxy(48,15);
      printf("***");
      gotoxy(48,14);
      printf("***");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **********************");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **********************");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }
      if(m==15){
            gotoxy(80,10);
 printf("                    ");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("***");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("***");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("***");
      gotoxy(48,16);
      printf("***");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **********************");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **********************");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }
      if(m==16){

        gotoxy(80,10);
 printf("WANNA PLAY ?");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("***");
      gotoxy(48,16);
      printf("***");
      gotoxy(28,17);
      printf("***");
      gotoxy(48,17);
      printf("***");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **********************");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **********************");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }
    for(k=0;k<=100000000;k+=5)
    {

    }
    {
        if(coo==1)
            system("color 0A");
        if(coo==3)
            system("color 0B");
        if(coo==5)
            system("color 0C");
        if(coo==7)
            system("color 0D");
        if(coo==9)
            system("color 0E");
        if(coo==11)
            {system("color 0F");
             coo=0;
            }
    }
    coo++;
    m++;

    }

    while(m>=12)
    {
     if(m==12)
     {
      gotoxy(80,10);
 printf("             ");
      gotoxy(28,12);
      printf("***");
      gotoxy(28,13);
      printf("***");
      gotoxy(48,12);
      printf("***");
      gotoxy(48,13);
      printf("***");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");
      gotoxy(28,17);
      printf("   ");
      gotoxy(48,17);
      printf("   ");
      gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **                  **");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **                  **");
 gotoxy(30-3,25+3);
 printf("     *******  *******");

      }
      if(m==13)
     {gotoxy(80,10);
 printf("WANNA PLAY ?");
         gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("***");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("***");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("***");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("***");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");

       gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **                  **");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **                  **");
 gotoxy(30-3,25+3);
 printf("     *******  *******");
      }

      if(m==14){
            gotoxy(80,10);
 printf("               ");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("***");
      gotoxy(28,14);
      printf("***");
      gotoxy(48,15);
      printf("***");
      gotoxy(48,14);
      printf("***");
      gotoxy(28,16);
      printf("   ");
      gotoxy(48,16);
      printf("   ");
      gotoxy(28,17);
      printf("   ");
      gotoxy(48,17);
      printf("   ");

       gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **                  **");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **                  **");
 gotoxy(30-3,25+3);
 printf("     *******  *******");
      }
      if(m==15){
            gotoxy(80,10);
 printf("WANNA PLAY ?");
      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("***");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("***");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("***");
      gotoxy(48,16);
      printf("***");
      gotoxy(28,17);
      printf("   ");
      gotoxy(48,17);
      printf("   ");

       gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **                  **");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **                  **");
 gotoxy(30-3,25+3);
 printf("     *******  *******");
      }
      if(m==16){
            gotoxy(80,10);
 printf("               ");


      gotoxy(28,12);
      printf("   ");
      gotoxy(28,13);
      printf("   ");
      gotoxy(48,12);
      printf("   ");
      gotoxy(48,13);
      printf("   ");
      gotoxy(28,15);
      printf("   ");
      gotoxy(28,14);
      printf("   ");
      gotoxy(48,15);
      printf("   ");
      gotoxy(48,14);
      printf("   ");
      gotoxy(28,16);
      printf("***");
      gotoxy(48,16);
      printf("***");
      gotoxy(28,17);
      printf("***");
      gotoxy(48,17);
      printf("***");

       gotoxy(30-3,21+3);
 printf("     *******  *******");
 gotoxy(30-3,22+3);
 printf("  **                  **");
 gotoxy(30-3,23+3);
 printf("**************************");
 gotoxy(30-3,24+3);
 printf("  **                  **");
 gotoxy(30-3,25+3);
 printf("     *******  *******");
      }
    for(k=0;k<=100000000;k+=5)
    {

    }
    m--;
    }
   }while(!kbhit());
   hu=getch();

}

/**GGGGGGGGGGGGGGGGGGGGGGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*/
/**GGGGGGGGGGGGGGGGGGGGGGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*/

void game_OVER ()
{
 system("cls");
 system("color 0C");

 gotoxy(20,9);
 printf("   ********               ****              ***                   ***       *************");
 gotoxy(20,10);
 printf(" ***       ***          ***  ***            *****               *****       *************");
 gotoxy(20,11);
 printf("***         ***        ***     ***          *** ***           *** ***       ***");
 gotoxy(20,12);
 printf("***                   ***       ***         ***   ***       ***   ***       ******");
 gotoxy(20,13);
 printf("***                  ****************       ***    ***     ***    ***       ********");
 gotoxy(20,14);
 printf("***      ********   ******************      ***      *******      ***       ******");
 gotoxy(20,15);
 printf(" ***     ***  ***   ***            ***      ***       ****        ***       ***");
 gotoxy(20,16);
 printf("  ***    ***  ***   ***            ***      ***                   ***       *************");
 gotoxy(20,17);
 printf("    ********  ***   ***            ***      ***                   ***       **************");


 gotoxy(40,20);
 printf("     **      **      **  *******  *****");
 gotoxy(40,21);
 printf("  **    **    **    **   **       **   **");
 gotoxy(40,22);
 printf(" **      **    **  **    *****    *****");
 gotoxy(40,23);
 printf("  **    **      ****     **       ****");
 gotoxy(40,24);
 printf("     **          **      *******  **  **");
 gotoxy(60,28);
 printf("SCORE: %d",c);

}

/**PPPPPPPPPPPPPPPPPPPPPPPPPPEEEEEEEEEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRR*/
/**PPPPPPPPPPPPPPPPPPPPPPPPPPEEEEEEEEEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRR*/

void go_be_gr()
{   gotoxy(60,15);
        printf("Performance: ");

    if(good==count)
    {
        if(good==100)
    {  good=0;
       count=0;
       l++;
       gotoxy(74,15);
        printf("Best Play");
        small_Delay();
    }

    if(good==50)
    {
       gotoxy(74,15);
        printf("Best Hit");
        small_Delay();

    }

    if(good==20)
    {
       gotoxy(74,15);
        printf("Great");
        small_Delay();
    }

    if(good==10)
    {
       gotoxy(74,15);
        printf("Better");
        small_Delay();
    }

    if(good==5)
    {
       gotoxy(74,15);
        printf("Good");
        small_Delay();
    }
    }

    else{
        good=0;
        count=0;
        }

        gotoxy(60,17);
        printf("At A Time Hit : %d",good);




}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void small_Delay()
{double sm;
    for(sm=0;sm<=10000;sm+=.0002)
    {

    }
}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void so_small_Delay()
{double so;
    for(so=0;so<=10000;so+=.0015)
    {

    }
}

/**IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII*/
/**IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII*/

void info()
{
   int gi=0;
   char p[]="GAME INSTRACTIONS=================#Its a mini game project where you kill mouse by shoots.#For each perfect shoot You will get 1 point & wrong shoot you will lost 1 life.#You have 3 lives.#There are 3 level in this game.#If you can't hit 5 times at a time ,you will lost.#If you can't hit total 20 times,you will lost.##Level 1 :Use 7,8,9##Level 2 :Use 4,5,6,7,8,9##Level 3:Use 1,2,3,4,5,6,7,8,9 **Performances--------------@At a time 5 hit -->Good@At a time 10 hit -->Better@At a time 20 hit -->Great@At a time 50 hit -->Best Hit@At a time 100 hit -->best play & get 1 life extra $Press any key to play ";
    system("Color 0A");
   do
   {
    printf("%c",p[gi]);
     so_small_Delay();
    if(gi==16){
    system("Color 0A");
    printf("\n");}
   if(gi==33){
    system("Color 0B");
   printf("\n\n");}
   if(gi==89){
    system("Color 0C");
   printf("\n");}
   if(gi==169){
    system("Color 0D");
   printf("\n");}
   if(gi==169+18){
    system("Color 0E");
   printf("\n");}
   if(gi==169+18+31+1)
    {
    system("Color 0F");
   printf("\n");}
   if(gi==169+18+31+52)
   {
    system("Color 0A");
   printf("\n");}
   if(gi==169+18+31+53+47-1)
   {
    system("Color 0B");
   printf("\n\n\n");}
   if(gi==169+18+31+53+47+20-1){
    system("Color 0C");
   printf("\n");}
   if(gi==169+18+31+53+47+20+26-1)
   {
    system("Color 0D");
   printf("\n");}
   if(gi==169+18+31+53+47+20+26+32-1){
    system("Color 0E");
       printf("\n\n\n");}
   if(gi==169+18+31+53+47+20+26+32+14-1){
    system("Color 0F");
   printf("\n");}
   if(gi==169+18+31+53+47+20+26+32+14+14-1){
    system("Color 0A");
   printf("\n");}
   if(gi==169+18+31+53+47+20+26+32+14+14-1+24){
    system("Color 0B");
       printf("\n");}
   if(gi==169+18+31+53+47+20+26+32+14+14+24+27-1){
    system("Color 0C");
    printf("\n");
    }
   if(gi==169+18+31+53+47+20+26+32+14+14+24+27+26-1){
    system("Color 0D");
   printf("\n");}
  if(gi==169+18+31+53+47+20+26+32+14+14+24+27+26+29-1){
   system("Color 0E");
  printf("\n");}
  if(gi==169+18+31+53+47+20+26+32+14+14+24+27+26+29+51-1){
   system("Color 0F");
   printf("\n\n\n");}
   gi++;


   }
   while(!kbhit()&&gi!=604);
   gi=getch();
   system("cls");

}

/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/
/**DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD*/

void L_small_Delay()
{double so;
    for(so=0;so<=10000;so+=.0015)
    {

    }
}

/**NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN*/
/**NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN*/

void game_name()
{
  int oo=0;
  gotoxy(50,23);
  printf("Mice developed by : Dharony");
  oo=getch();
  system("cls");


}
