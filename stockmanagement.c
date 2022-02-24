/* #include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<dos.h>
//#include<graphics.h>
int ch,i,id,age,rev=0,x,rem,yes,no,opt;
char sex,ms,password,npassword; */
 struct user{
        char fnames[50];
        char lnames[50];
        int phone[100];
        int email[50];
        char dep[50];
        char age[50];
        char ms[50];
        char id[50];
        char sex[50];
        char ac[50];
        //char password[50];
        //char npassword[50];
    };
    void exit(){
    	printf("Are you sure you want to exit?");
    	scanf("%d",&ch);
	}

main(){
	struct user usr;
    printf("********************************WELCOME TO OUR STOCK MANAGEMENT SYTEM!************************");
    printf("--------------------------------MENU---------------------------------------------");
    time_t now;
    time(&now);
    printf("\t\t\t\t%s",ctime(&now));
  /*  int askyear,year;
    printf("******ENTER A LEAP YEAR TO VERIFY IF YOU ARE A HUMAN!");
    printf("Enter the year to be tested!");
    scanf("%d",&askyear);
    if(leapyear(year)) calling a boolean function
        {
        	printf("Hey user,%d is a leapyear",askyear);
			*/
			/*int;=i=0,key,n,x, gd=DETECT ,gm;
			char a[10];
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			x=getmaxx()/2;
			settextstyle(SCRIPT_FONT, HORIZ_DIR,5);

			settextjustify(CENTER_TEXT,
			CENTER_TEXT );
			setcolor(YELLOW);
			outtextxy(x, 20,"CAPTCHA");
			settextstyle(SCRIPT_FONT, HORIZ_DIR,
			2);
			outtextxy(x, 125, "press any key to change the generated \"captcha\"");
			outtextxy(x, 150 ,"press the escape key to exit...");
			setcolor(WHITE);
			setviewport(100 ,200, 600,400, 1);
			setcolor(RED);
			randomize();

			while(1)
			{
				while(i<6)
				{
					n= random(3);
					if(n ==o)
					a[i]=65+random(26);
					else if(n ==1)
					a[i]=97+random(26);
					else
					a[i]=48+random(10);
					i++;
				}
				a[i='\0'];
				outtextxy(210,100,a);
				key getch();
				if(key==27)
				exit(0);
				clearviewport();
				i=0;
			}
		}

			*/
        	do{
    printf("\n\n 1.EMPLOYEMENT SEEKING MANAGEMENT SYSTEM\t");
    printf("\n\n 2.ITEM AND RAW MATERIALS SYSTEM\t");
    printf("\n\n 3.ORDERING MANAGEMENT SYSTEM\t");
    printf("\n\n 4.ACCOUNT FOR USER CONNECTIONS\t");
    printf("\n\n 5.PAYMENT METHODS(ATM)\t");
    printf("\n\n 0.EXIT FROM OUR SYSTEM\t");
    printf("\n\n Enter your choice\t");
    scanf("%d",&ch);
if(ch==1)
	{
		struct user usr;
	system("cls");
    printf("\n***********WELCOME*********** ");
    printf("\n Enter your first name:");
    scanf("%s",usr.fnames);
    printf("\n Enter your last name:");
     scanf("%s",usr.lnames);
    printf("\n Enter your phone number:");
    scanf("%s",usr.phone);
    x=id;
    while(x!=0);
    {
    	rev=x%10;
    	x=x/10;
    	rev=rev*10+rem;
    	printf("\n\nA display of your new id to use in interview! %d",rev);
	}
    printf("\n\n Enter your email");
    scanf("%s",usr.email);
    printf("\n\n Enter your department you want to be insured in.");
    scanf("%s",usr.dep);
    system("cls");
	printf("\n\n\t********Hey !%s You need to be verified for further access",usr.fnames);
	 printf("\n\n\nATTENTION!On sex if you are man enter 'M' else 'F'");
    printf("\n\n\n QUICK TIPS!On martial status if if you are married enter 'm' else 'u'");
    printf("\n\n Enter your age,sex and martial status");
    scanf("%d %c %c",&age,&sex,&ms);
   if((ms=='m')||(age>=30&&ms=='u'))
    {
    	printf("\nYou are insured to be our upcoming employee!");
    	printf("\n\n\nCongratulations!\n\t\tYour records have been registered!\n %s you will get the notification via %s and \nyou will get a schedule about interviews",usr.fnames,usr.email);
	}
	else
	printf("\nYou are not ensured to be our upcoming employee!");
	printf("\n\n\n\n\n");
	  exit();
 }
 if (ch==2)
 {
 	system("cls");
 	printf("\n\t\t\t*HEY USER WELCOME TO OUR SYSTEM OF NAVIGATION IN OUR ITEMS THAT WE SELL!*");
 	time_t now;
    time(&now);
    printf("\t\t\t\t%s",ctime(&now));
 	printf("\n\n Do You want to see our products? opt=yes/no");
 	scanf("%d %d",&yes,&no);
 	if(opt==yes);
 	{
 		printf("\n\n\nThank you let us continue!");

	 	printf("****\n\tFood based products!****");
	 	printf("\n\n 1 HUMBERGER");
	 	printf("\n\n 2 SNACKS");
	 	printf("\n\n 3  PIZZA");
	 	printf("\n\n 4 SAMBUSA");
	 	printf("\n\n 5 VARIOUS JUICES");
	 	printf("\n\n 6 DELIVERIES");
	 	printf("****\n\tClothes based products***!");
	 	printf("\n\n 1 PANTS");
	 	printf("\n\n 2 DRESSES");
	 	printf("\n\n 3 T-SHIRTS");
	 	printf("\n\n 4 MARVINS");
	 	printf("\n\n 5 HOODS");
	 	//system ("cls");
	 	printf("\n\nDO you want to order them via internet with shipping and easy payment modes?\n ****GO BACK TO OUR MENU****\n\n");
	 	while(ch==0);
	 	{
	 		exit();
		 }
	 	return 0;

	 }
}
system("cls");
if(ch==3)
{
	printf("******************** WELCOME TO OUR ORDERING SYSTEM*************************");
time_t now;
time(&now);
printf("\t\t\t\t\t%s",ctime(&now));
printf("\n\n\t***Login in your account first!***");
printf("\n\n 1.Login into your account!");
printf("\n\n 2 Create an account!");
printf("\n\nYour choice?");
scanf("%d",&opt);
if(opt==1)
{
	system("cls");
	printf("Enter your account email");
	scanf("%s",usr.email);
	printf("\n\nEnter your phone number:");
	scanf("%s",usr.phone);
	printf("\n\nEnter your  password:");
	scanf("%s",&password);
}
if(opt==2)
{
	system("cls");
	printf("Enter your account email:");
	scanf("%s",usr.email);
	printf("\n\nEnter your phone number:");
	scanf("%s",usr.phone);
	printf("\n\nEnter your new password:");
	scanf("%s",&password);
	printf("\n\nRenter your new password:");
	scanf("%s",&npassword);
	if(password==npassword)
	{
		printf("\n\nHey continue until the last step!\n\n");
		printf("\n\n\n Account has been successfully been created!\n\n");
	}
	if(password!=npassword)
		{
			printf("\n\nInvalid input password!\n\n");
			printf("\n\n\n Something went wrong please try again later!\n\n");
		}
}
}
if(ch==4)
{
	int op;
	//system("color #3F");
	
	time_t now;
	time(&now);
	printf("\n\n\t\t\t  %s",ctime(&now));
	printf("\n\t\t\t\t\t****** WELCOME TO THE PAYING STRATEGY ***********!");
	printf("\n\nHello %s Choose the payment method for buying",usr.fnames );
	printf("\n1. ATM FOR PAYMENT");
	printf("\n2. PAYPAL FOR PAYUMENT");
	int pin=1234,option,enteredPin,count=0,amount=1;
	float balance=5000;
	switch(op)
		case 1:
		{
	int continueTransaction=1; 
			if (pin!=enteredPin){
				printf("\n Please enter your Pin:");
				scanf("%d",enteredPin);
			}
				else (enteredPin!=pin);
				{
					Beep (610,500);
					printf("Invalid Pin!");
				}
			}
	
}
 }
while(ch==0);
{
exit();
}
return 0;
}
//}
/*leapyear(year)
int year;
{
    return(year%4==0 &&year%100!=0)||(year%400==0);
}
}
   else
    {
        printf("Hey user %d is not a leap year",askyear);
        exit();
    }

    system(cls);
*/

