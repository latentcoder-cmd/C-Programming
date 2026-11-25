#include <stdio.h>
int main()
{
    char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}},mark;
    int turn,place,i,j,player,b=0;
   
    
        printf("Welcome to tic tac toe \n");
        printf("Player 1--> X\n");
        printf("Player 2--> O\n");
        start:
        for(turn=1;turn<10;turn++)
        {
        	printf(" %c | %c | %c \n",a[0][0],a[0][1],a[0][2]);
            printf("---|---|---\n");
        	printf(" %c | %c | %c \n",a[1][0],a[1][1],a[1][2]);
        	printf("---|---|---\n");
        	printf(" %c | %c | %c \n",a[2][0],a[2][1],a[2][2]);
        	
        	if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]){
        	b=1;	
            printf("player %d wins\n",player);
			break;}
		    if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]){
		    b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]){
			b=1;
            printf("player %d wins\n",player);
			break;}
			
			
			
            if(turn%2==1){
            player=1;
            mark='X';
            
            }
            else{
                player=2;
                mark='O';
                
            }
            
            printf("Player %d plays\n",player);
            printf("Enter the box number\n");
            scanf("%d",&place);
            switch(place){
                case 1:
                i=0;
                j=0;
                break;
                case 2:
                i=0;
                j=1;
                break;
                case 3:
                i=0;
                j=2;
                break;
                case 4:
                i=1;
                j=0;
                break;
                case 5:
                i=1;
                j=1;
                break;
                case 6:
                i=1;
                j=2;
                break;
                case 7:
                i=2;
                j=0;
                break;
                case 8:
                i=2;
                j=1;
                break;
                case 9:
                i=2;
                j=2;
                break;
                default:
                printf("Enter valid box number\n");
                goto start;
            }
            if(a[i][j]=='X'||a[i][j]=='O'){
                printf("Box already filled\n");
                goto start;
            }
        
            a[i][j]=mark;
            }
            if(b==0){
            printf("Game Draw\n");
            printf("Restart Again\n");
		}
			
            else{
            int c;
            printf("choose one \n");
            printf("1.Restart\n");
            printf("2.Exit\n");
            scanf("%d",&c);
            switch(c)
            {
            	case 1:
            		a[0][0]='1';
            		a[0][1]='2';
            		a[0][2]='3';
            		a[1][0]='4';
            		a[1][1]='5';
            		a[1][2]='6';
            		a[2][0]='7';
            		a[2][1]='8';
            		a[2][2]='9';
            		goto start;
            		break;
            	case 2:
            		printf("Thank you\n");
            		break;
            	default:
            		printf("fuck you Nigga\n");
			}
        }
        }

    

