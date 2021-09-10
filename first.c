#include<stdio.h>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


//for delay
void delay(float number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    float milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
}


//for goto xy
COORD coord={0,0}; // this is global variable 
                                    /*center of axis is set to the top left cornor of the screen*/ 
void gotoxy(int x,int y) 
{ 
    coord.X=x; 
    coord.Y=y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); 
}


int main(){
    system("cls");
    system("color E5");
    char pass[7];
    system("cls");

    //border design
    for(int x=1;x<73;x++){
        printf("*");
    }
    gotoxy(73,1);
    for(int y=1;y<15;y++){
        printf("*");
        gotoxy(73,y);
    }
    gotoxy(1,15);
    for(int x=1;x<73;x++){
        printf("*");
    } 
    gotoxy(2,2);
    for(int y=1;y<15;y++){
        printf("*");
        gotoxy(1,y);
    }

    //welcome msg
    gotoxy(36,4);
    printf("Welcome");
    gotoxy(36,6);
    printf("to my\n");
    gotoxy(36,8);
    printf("FIRST\n");
    gotoxy(36,10);
    printf("Mini Project\n");
    printf("\n\n\n");
    getch();
    system("cls");
    delay(1);

    //password= rutuja
    printf("\n\n\t\t\t Enter The Password\n\n");
    printf("\t\t * Only Lower case allowed\n\n");
    printf("\t\t Password: \t");
    pass[0]=getch();
    printf("*");
    pass[1]=getch();
    printf("*");
    pass[2]=getch();
    printf("*");
    pass[3]=getch();
    printf("*");
    pass[4]=getch();
    printf("*");
    pass[5]=getch();
    printf("*");
    pass[7]='\0';
    system("cls");
    if(strcmp(pass,"rutuja")==0){
        printf("\n\n\n\t\t Please wait\n\n");
        delay(1);
        printf("\t\tLoading");
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(0.5);
        printf(". ");
        delay(1);
    }
    else{
        printf("\n\n\t\t Ooops!! Incorrect password\n\n");
        printf("\t\tPlease Login Again");
        getch();
        exit(0);
    }
    system("cls");


    //project  info
    gotoxy(6,1);
    system("color F0");
    printf("                      MARKSHEET GENERATOR                      \n\n");
    gotoxy(1,6);
    printf("*************************************************************************\n");
    gotoxy(1,7);
    printf("*************************************************************************\n");
    printf("Mini Project Info:");
    gotoxy(32,10);
    printf("Rutuja\n");
    gotoxy(32,14);
    printf("1st Year CS\n");
    gotoxy(32,16);
    printf("COEP Pune\n");
    gotoxy(1,19);
    printf("*************************************************************************\n");
    gotoxy(1,21);
    printf("*************************************************************************\n");
    delay(0.5);
    system("color F4");
    gotoxy(27,21);
    printf("Press Enter to continue");
    getch();
    system("cls");


    //Student details
    gotoxy(12,2);
    printf("####...........     STUDENT INFO      ............####\n");
    gotoxy(2,6);
    printf("Enter Students Name: ");
    gotoxy(2,8);
    printf("Enter Students Roll No.: ");
    gotoxy(2,10);
    printf("Enter Student's DOB (separated by dashes): ");
    gotoxy(2,12);
    printf("Enter student's branchcode: ");


    //input student details
    gotoxy(22,6);
    char name[25];
    gets(name);
    gotoxy(27,8);
    int rol;
    scanf("%d",&rol);
    gotoxy(46,10);
    int D,M,Y;
    char a;
    scanf("%d%c%d%c%d",&D,&a,&M,&a,&Y);
    gotoxy(35,12);
    char branch[25];
    scanf("%s",&branch);
    system("cls");

    //marks
    system("color FA");
    gotoxy(12,2);
    printf("........... Enter the Student's Marks in the following subjects..........");
    system("color F9");
    gotoxy(2,4);
    printf("*****THEORY MARKS*****");
    system("color F4");
    gotoxy(2,6);
    printf("Physics: ");
    gotoxy(2,8);
    printf("Chemistry: ");
    gotoxy(2,10);
    printf("Mathamatics: ");
    gotoxy(2,12);
    printf("Biology: ");
    gotoxy(2,14);
    printf("English: ");


    //subject marks input
    gotoxy(12,6);
    int ph,pph;
    scanf("%d",&ph);
    gotoxy(15,8);
    int ch,pch;
    scanf("%d",&ch);
    gotoxy(16,10);
    int ma,pma;
    scanf("%d",&ma);
    gotoxy(12,12);
    int bi,pbi;
    scanf("%d",&bi);
    gotoxy(10,14);
    int en;
    scanf("%d",&en);

    //practical
    system("cls");
    system("color F9");
    gotoxy(2,4);
    printf("*****PRACTICAL MARKS*****");
    system("color F4");
    gotoxy(2,6);
    printf("Physics: ");
    gotoxy(2,8);
    printf("Chemistry: ");
    gotoxy(2,10);
    printf("Mathamatics: ");
    gotoxy(2,12);
    printf("Biology: ");


    //practical marks input
    gotoxy(12,6);
    scanf("%d",&pph);
    gotoxy(15,8);
    scanf("%d",&pch);
    gotoxy(16,10);
    scanf("%d",&pma);
    gotoxy(12,12);
    scanf("%d",&pbi);

    //loading..
    system("cls");
    gotoxy(20,2);
    printf("DATA RECORDED SUCCESSFULLY!!!!");
    gotoxy(32,11);
    system("color F2");
    printf("*******************");
    gotoxy(32,13);
    printf("LOADING THE MARKSHEET");
    gotoxy(32,15);
    printf("*******************");
    gotoxy(32,20);
    delay(2);
    system("cls");

    system("color F0");
    gotoxy(25,4);
    printf("Loading the marksheet ");
    delay(0.5);
    printf(". ");
    delay(0.5);
    printf(". ");
    delay(0.5);
    printf(". ");
    delay(0.5);
    printf(". ");

    system("color F5");
    gotoxy(25,12);
	printf("20% \tcompleted..\n\n");
	delay(1);
	gotoxy(25,14);
	printf("40% \tcompleted...\n\n");
	delay(1);
	gotoxy(25,16);
	printf("60% \tcompleted....\n\n");
	delay(1);
	gotoxy(25,18);
	printf("80% \tcompleted.....\n\n");
	delay(1);
	gotoxy(25,20);
	printf("100 % \tcompleted......\n\n");
	delay(1);
	

    //result
    system("cls");
    system("color F4");
    gotoxy(2,2);
    for(int i=0;i<100;i++){
        printf("_");
    }
    printf("\n\n");
    system("color F0");
    printf("\t\t\t\t\t XYZ HIGH SCHOOL \t\t\n\n");
    for(int i=0;i<100;i++){
        printf("_");
    }
    printf("\n");
    for(int i=0;i<100;i++){
        printf("-");
    }
    printf("\n");
    printf("\t\t\t\t\t RESULT OF FINAL EXAM \t\t\n");
    gotoxy(6,10);
    printf("Name: %s",name);
    gotoxy(66,10);
    printf("Roll No: %d",rol);
    gotoxy(6,12);
    printf("DOB: %d%c%d%c%d",D,a,M,a,Y);
    gotoxy(66,12);
    printf("Branch: %s",branch);
    printf("\n");
    for(int i=0;i<100;i++){
        printf("-");
    }
    printf("\n");

    //mark output HEADING
    for(int i=0;i<100;i++){
        printf("_");
    }
    printf("\n\n");
    gotoxy(1,16);
    printf("Subject");
    gotoxy(26,16);
    printf("Theory Marks");
    gotoxy(51,16);
    printf("Practical");
    gotoxy(76,16);
    printf("Total");
    printf("\n");
    for(int i=0;i<100;i++){
        printf("_");
    }

    //Physics
    gotoxy(5,19);
    printf("Physics");
    gotoxy(31,19);
    printf("%d",ph);
    gotoxy(56,19);
    printf("%d",pph);
    gotoxy(81,19);
    printf("%d",ph+pph);

    //Chemistry
    gotoxy(5,21);
    printf("Chemistry");
    gotoxy(31,21);
    printf("%d",ch);
    gotoxy(56,21);
    printf("%d",pch);
    gotoxy(81,21);
    printf("%d",ch+pch);

    //maths
    gotoxy(5,23);
    printf("Mathematics");
    gotoxy(31,23);
    printf("%d",ma);
    gotoxy(56,23);
    printf("%d",pma);
    gotoxy(81,23);
    printf("%d",ma+pma);

    //bio
    gotoxy(5,25);
    printf("Biology");
    gotoxy(31,25);
    printf("%d",bi);
    gotoxy(56,25);
    printf("%d",pbi);
    gotoxy(81,25);
    printf("%d",bi+pbi);
    printf("\n");
    //eng
    gotoxy(5,27);
    printf("English");
    gotoxy(31,27);
    printf("%d",en);
    gotoxy(56,27);
    printf("---");
    gotoxy(81,27);
    printf("%d",en);
    printf("\n\n");
    gotoxy(1,29);
    for(int i=0;i<100;i++){
        printf("_");
    }
    printf("\n");
    system("pause");

    //end
    system("cls");
    system("color E5");
    printf("\n\n\t\t\t\t THANK YOU!! \t\t\t\n");




    system("pause");


    return 0;
}