#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <stdlib.h>
#include "Jukebox.h"
int main(){
    system("cls");
	welcome();
	getch();
	system("cls");
	intro();
	choice();
	getch();
	thanks();
	getch();
	system("cls");
	return(0);
	}

void welcome(){
		int i;
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t");
		printf(" _      _     _ ");
		printf("\n");
	 for(i=1;i<=3;i++) {printf("\t\t\t\t");
				printf("| |    | |   | |");
				printf("\n");
				}
		printf("\t\t\t\t");
		printf("| |____| |   | |");
		printf("\n");
		printf("\t\t\t\t");
		printf("|  ____  |   | |");
		printf("\n");
		for(i=1;i<=3;i++) {printf("\t\t\t\t");
				printf("| |    | |   | |");
				printf("\n");
				}
		printf("\t\t\t\t");
		printf("|_|    |_|   |_|");
		printf("\n\n\n\n\n\n\n\n");
		 }
void intro(){
		printf("\t\t\t");
		printf("Welcome to Abhishek's Jukebox.");
		getch();
		printf("\n\n");
		printf("So whats so great about this?");
		printf("\n");
		printf("Why would you care about this simple program when you have a ton of awesome");
		printf("\n");
		printf("music players?");
		getch();
		printf("\n\nThe thing is..\nThis doesnt play songs from a file stored on this pc..\nIt plays songs,rather simple tunes which i have MADE with only C programming.\n");
		printf("It might not seem to be a big deal...but think about what this means..\n");
		getch();
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\tIt shows the Power that programming gives to you.\n\t\tThe power to DO almost anything you want to in \n\t\tthe world that your pc is.\n\n\n");
		printf("\t\t\t");
		printf("It gives you power to play ");
		printf("GOD");
		printf(".");
		getch();
		}
void choice(){
		char c;
		system("cls");
		printf("\t\t\t\t");
		printf("Playlist");
		printf("\n1)Sparkling Stella\n2)Old McDonald Had A Farm\n3)Frolic\n4)Buffalo Gals\n");
		printf("Choose the tune that you want to play:\n");
		scanf("%c",&c);
		switch(c){
		case '1':{
			system("cls");
			twinkle();
			break;
			}
		case '2':{
			system("cls");
			oldMc();
			break;
			}
		case '3':{
			system("cls");
			frolic();
			break;
			}
		case '4':{
			system("cls");
			buffalo();
			break;
			}
		default:{
			choice();
			}
		};
		}
void twinkle(){
		void Tline1();
		void Tline2();
		void pattern();
		printf("\n\n");
		printf("\t\t\t");
		printf("Twinkle Twinkle Little Star!");
		printf("\n");
		pattern();
		Tline1();
		Tline2();
		Tline1();
		}

void pattern(){
		int i,j,k=0,l;
		for(i=1;i<=12;i++){
		for(j=1;j<=16;j++){
                    printf("*    ");
					}
			  if(i!=12){
			  printf("\n");}
				  }
	      }

void Tline1(){
   int i=300,j=100,k;
   for(k=1;k<=2;k++){ Beep(196,i);
		Sleep(j);
		}
   for(k=1;k<=2;k++){ Beep(294,i);
		Sleep(j);
		}
   for(k=1;k<=2;k++){ Beep(330,i);
		Sleep(j);
		}
   Beep(294,2*i);


   Sleep(j);

   for(k=1;k<=2;k++){ Beep(262,i);


		Sleep(j);
		}
   for(k=1;k<=2;k++){ Beep(247,i);


		Sleep(j);
		}
   for(k=1;k<=2;k++){ Beep(220,i);

		Sleep(j);
		}
	Beep(196,2*i);


	Sleep(j);
	}
void Tline2(){
	int i=300,j=100,k,l;
	for(l=1;l<=2;l++){
	for(k=1;k<=2;k++){ Beep(294,i);


			Sleep(j);
			}
	for(k=1;k<=2;k++){ Beep(262,i);


			Sleep(j);
			}
	for(k=1;k<=2;k++){ Beep(247,i);


			Sleep(j);
			}
	Beep(220,2*i);


	Sleep(j);
	       }

	       }
void buffalo(){
	system("cls");
	int i=400,j=0,k;
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t");
	printf("BUFFALO GALS");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	Beep(131,i);


	Sleep(j);
	Beep(147,i);


	Sleep(j);
	Beep(165,i);


	Sleep(j);
	Beep(175,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
	Beep(165,2*i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
	Beep(175,i);


	Sleep(j);
	Beep(147,2*i);


	Sleep(j);
	Beep(175,i);


	Sleep(j);
	Beep(165,i);


	Sleep(j);
	Beep(131,2*i);


	Sleep(j);
	Beep(131,i);


	Sleep(j);
	Beep(147,i);


	Sleep(j);
	Beep(165,i);


	Sleep(j);
	Beep(175,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
	for(k=1;k<=2;k++)
		{
		Beep(165,i);


		Sleep(j);
		}
	Beep(196,i);


	Sleep(j);
	Beep(175,i);


	Sleep(j);
	Beep(147,i);


	Sleep(j);
	Beep(247,i);


	Sleep(j);
	Beep(262,3*i);


	Sleep(j+i);

	Beep(262,i);


	Sleep(j);
	Beep(247,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);

for(k=1;k<=2;k++){Beep(196,i/2);


		Sleep(j);}
	Beep(165,2*i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
for(k=1;k<=2;k++){Beep(175,i/2);


		Sleep(j);}
	Beep(147,2*i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);
for(k=1;k<=2;k++){Beep(147,i/2);


		Sleep(j);}
	Beep(165,2*i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(247,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);
	Beep(196,i);


	Sleep(j);
	Beep(220,i);


	Sleep(j);

for(k=1;k<=2;k++){Beep(196,i/2);


		Sleep(j);}
for(k=1;k<=2;k++){
	Beep(165,i);


	Sleep(j);
	}
	Beep(196,i);


	Sleep(j);
for(k=1;k<=2;k++){Beep(175,i/2);


		Sleep(j);}
	Beep(147,i);


	Sleep(j);
	Beep(247,i);


	Sleep(j);
	Beep(262,3*i);


	Sleep(j+i);

	}

void frolic(){
	system("cls");
	int i=400,j=0,k,l;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t     ");
	printf("FROLIC");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);

	Beep(330,i);


	Sleep(j);
	Beep(392,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);

	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);

	Beep(330,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(294,2*i);


	Sleep(j);

	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);

	Beep(330,i);


	Sleep(j);
	Beep(392,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(247,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(262,2*i);


	Sleep(j);

	Beep(392,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(392,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);

	Beep(392,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(392,2*i);


	Sleep(j);

	Beep(392,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(392,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(349,i);


	Sleep(j);

	Beep(330,i);


	Sleep(j);
	Beep(294,i);


	Sleep(j);
	Beep(262,i);


	Sleep(j);
	Beep(330,i);


	Sleep(j);
	Beep(262,2*i);


	Sleep(j);
	}
void oldMc(){
	system("cls");
	int i=400,j=0,k,l;
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t     ");
	printf("Old MacDonald had a farm");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	for(k=1;k<=3;k++){ Beep(262,i);


			Sleep(j);
			}
	Beep(196,i);


	Sleep(j);
	for(k=1;k<=2;k++){ Beep(220,i);


			Sleep(j);
			}
	Beep(196,2*i);


	Sleep(j);

	for(k=1;k<=2;k++){ Beep(330,i);


			Sleep(j);
			}
	for(k=1;k<=2;k++){ Beep(294,i);


			Sleep(j);
			}
	Beep(262,3*i);


	Sleep(j);

	Beep(196,i);


	Sleep(j);

	for(k=1;k<=3;k++){ Beep(262,i);


			Sleep(j);
			}
	Beep(196,i);


	Sleep(j);
	for(k=1;k<=2;k++){ Beep(220,i);


			Sleep(j);
			}
	Beep(196,2*i);


	Sleep(j);

	for(k=1;k<=2;k++){ Beep(330,i);


			Sleep(j);
			}
	for(k=1;k<=2;k++){ Beep(294,i);


			Sleep(j);
			}
	Beep(262,3*i);


	Sleep(j);
	}

void thanks(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t    ");
	printf("Thank You!");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
