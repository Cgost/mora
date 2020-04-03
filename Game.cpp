#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //sleep(sec);

void login();
void display(int );
void game(int );
void resurection(int ,int );
void record(int );

int win = 1,score=0;
char user[50];

int main(){
	
	int com,cheat;
	
	//seed
	    srand(time(NULL));
	//login
	    login();
	//read
	    record(0);
	while(1){
		win = 0;
		//display 1
		display(1);
		//start
		com = rand()%3;
		game(com);
		
		//rescurection
		if(win == 0){
			cheat = rand()%2;
			resurection(cheat, com);
		}
		
		system("pause");
		//store record
		record(0);
		
		system("cls");
	}
		
		
}
//////////   //      //   //      //   //////////   //////////   //////////   //      //
//           //      //   ////    //       //           //       //      //   ////    //
//           //      //   // //   //       //           //       //      //   // //   // 
////////     //      //   //  //  //       //           //       //      //   //  //  //
//           //      //   //   // //       //           //       //      //   //   // //
//           //      //   //    ////       //           //       //      //   //    ////
//           //////////   //      //       //       //////////   //////////   //      //
void display(int type){
	if(type == 1){
		system("color fc");
		printf("\nname:%s\n",user);
		printf("score:%d\n\n",score);
	    printf("                                           =================================\n");
	    printf("                                           ==    you der me der 遊樂場    ==\n");
	    printf("                                           ==                             ==\n");
	    printf("                                           ==     (1)剪刀(2)石頭(3)布     ==\n");
        printf("                                           =================================\n\n\n\n");
	}else if(type == 2){
		system("color 0f");
		printf("\nname:%s\n",user);
		printf("score:%d\n\n",score);
	    printf("                                           =================================\n");
	    printf("                                           ==    little bad bad 遊樂場    ==\n");
	    printf("                                           ==                             ==\n");
	    printf("                                           ==     (1)剪刀(2)石頭(3)布     ==\n");
        printf("                                           =================================\n\n\n\n");
	}else if(type == 3){
		printf("------------------------------------------------------------------------------------------------------------------------");
	    printf("----------------------==------==---==========---==-----------==-----------===========-----------------------------------");
	    printf("----------------------==------==---==-----------==-----------==-----------==-------==-------==--------------------------");
	    printf("----------------------==========---==========---==-----------==-----------==-------==-----==--==--==--------------------");
	    printf("----------------------==------==---==-----------==-----------==-----------==-------==-----------==----------------------");
	    printf("----------------------==------==---==========---==========---==========---===========-----------------------------------");
	    printf("------------------------------------------------------------------------------------------------------------------------");
	}
}

void login(){
	//char user[50];
	printf("                                          HELLO~~\n");
	// \n*7
	printf("                                           匿名:");
	scanf("%s",&user);
	system("cls");
	printf("\n\n\n                                                 Wellcome %s\n\n                                                 ",user);
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	//sleep(1);
	
	system("cls");
}

void game(int com){
	int ans;
	com++;
	printf("Enter numbers to continue:");
	scanf("%d",&ans);
	//pk (1)剪刀(2)石頭(3)布
	
	if(0){//ans == 123
		//show record
		record(1);
		win = 1;
	}else if(com == 1){
		printf("computer select 1\n");
		if(ans == 1){
			printf("\nFalt\n\n");
		}else if(ans == 2){
			printf("\nWin\n\n");
			win = 1;
			score += 10;
		}else if(ans == 3){
			printf("\nLose\n\n");
			score -= 10;
		}else{
			printf("\nyour choise is wrong");
			sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        printf("\n\n");
	        win = 1;
		}
	}else if(com == 2){
		printf("computer select 2\n");
		if(ans == 1){
			printf("\nLose\n\n");
			score -= 10;
		}else if(ans == 2){
			printf("\nFalt\n\n");
		}else if(ans == 3){
			printf("\nWin\n\n");
			win = 1;
			score += 10;
		}else{
			printf("\nyour choise is wrong");
			sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        printf("\n\n");
	        win = 1;
		}
	}else if(com == 3){
		printf("computer select 3\n");
		if(ans == 1){
			printf("\nWin\n\n");
			win = 1;
			score += 10;
		}else if(ans == 2){
			printf("\nLose\n\n");
			score -= 10;
		}else if(ans == 3){
			printf("\nFalt\n\n");
		}else{
			printf("\nyour choise is wrong");
			sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        sleep(1);
	        printf(".");
	        printf("\n\n");
	        win = 1;
		}
	}
	
}

void resurection(int cheat,int com){
	int ans,yes;
	com++;
	printf("do you want to...(press 1 to cheat):");
	scanf("%d",&yes);
	system("cls");
	//display
	display(2);
	//pk (1)剪刀(2)石頭(3)布
	if(yes == 1){
		printf("computer select %d\n",com);
		printf("Enter numbers to continue:");
		scanf("%d",&ans);
			if(com == 1){
				if(ans == 2){
					if(cheat == 0){
						printf("you win ~~\n");
						score += 5;
					}else if(cheat == 1){
						printf("computer select 3\n");
						printf("computer cheat too\n");
						score -= 15;
					}
				}else{
					printf("are you serious? cheating still dosen't win\n\n");
					score -= 15;
					system("pause");
					system("cls");
					display(2);
					printf("are you ready to be punished?\n\n");
					system("pause");
					system("shutdown /sg /t 3 /c 'HaHaHa'");
					
					//system("pause");
					//system("shutdown -a");
				}
			}else if(com == 2){
				if(ans == 3){
					if(cheat == 0){
						printf("you win ~~\n");
						score += 5;
					}else if(cheat == 1){
						printf("computer select 1\n");
						printf("computer cheat too\n");
						score -= 15;
					}
				}else{
					printf("are you serious? cheating still dosen't win\n\n");
					score -= 15;
					system("pause");
					system("cls");
					display(2);
					printf("are you ready to be punished?\n\n");
					system("pause");
					system("shutdown /sg /t 3 /c 'HaHaHa'");
					
					//system("pause");
					//system("shutdown -a");
				}
			}else if(com == 3){
				if(ans == 1){
					if(cheat == 0){
						printf("you win ~~\n");
						score += 5;
					}else if(cheat == 1){
						printf("computer select 2\n");
						printf("computer cheat too\n");
						score -= 15;
					}
				}else{
					printf("are you serious? cheating still dosen't win\n\n");
					score -= 15;
					system("pause");
					system("cls");
					display(2);
					printf("are you ready to be punished?\n\n");
					system("pause");
					system("shutdown /sg /t 3 /c 'HaHaHa'");
					
					//system("pause");
					//system("shutdown -a");
				}
			}
	}else if(yes != 1){
		printf("Nice~\n");
		if(cheat == 0){
			score ++;
		}else if(cheat == 1){
			score += 0;
		}
	}
}

void record(int type){
	FILE *f1;
	char name[50];
	int fraction;
	
	if(type == 0){
		//store
		f1 = fopen("cor.conj","w");
		fprintf(f1,"User name:%s\n", user);
		fprintf(f1,"User score:%d\n", score);
		fclose(f1);
	}else if(type == 1){
		//show
		f1 = fopen("cor.conj","r");
		fscanf(f1,"User name:%s\n", user);
		printf("User name:%s\n",user);
		fscanf(f1,"User score:%d\n", score);
		printf("User score:%d\n", score);
		//fclose(f1);
	}else if(type == 2){
		//read
		f1 = fopen("cor.conj","r");
		fscanf(f1,"User name:%s\n", user);
		fscanf(f1,"User score:%d\n", score);
		fclose(f1);
	}
}

/*fun thing

int num = 0,word = 0;

while(num < 1 && word < 1){
		
		
		printf("choise one to continue:");
		scanf("%c",&ans);
		
		if((ans == 49) || (ans == 50) || (ans == 51) || (ans == '一') || (ans == '二') || (ans == '三')){
		    printf("誰說用數字了");
		    num++;
	    }
	    else if((ans == 77) || (ans == '石頭') || (ans == '布')){
		    printf("幹嘛那麼累");
		    word++;
	    }
	    else if(num != 0 || word != 0){
		    printf("such a stupid...");
	    }
	}

*/
