#include<stdio.h>
void print(int a){
	if(a==2) printf ("| |");if(a==1) printf ("|X|");if(a==3) printf ("|O|");
}
void prtictactoe(int ar[3][3]){
    print(ar[0][0]);print(ar[0][1]);print(ar[0][2]);printf("\n");

    print(ar[1][0]);print(ar[1][1]);print(ar[1][2]);printf("\n");

    print(ar[2][0]);print(ar[2][1]);print(ar[2][2]);printf("\n");

}
void changeboard1(int ar[3][3]){
    int a;
    do{printf("Enter the number of Position for Player1 : "); scanf("%d",&a);
    if(ar[(a-1)/3][(a-1)%3]==2) {ar[(a-1)/3][(a-1)%3]--;break;}
    printf("Enter Valid Position\n");printf("|1|");printf("|2|");printf("|3|");printf("\n");printf("|4|");printf("|5|");printf("|6|");printf("\n");printf("|7|");printf("|8|");printf("|9|");printf("\n");}
    while(ar[(a-1)/3][(a-1)%3]!=1);
}
void changeboard2(int ar[3][3]){
    int a;
    do{printf("Enter the number of Position for Player2 : "); scanf("%d",&a);
    if(ar[(a-1)/3][(a-1)%3]==2) {ar[(a-1)/3][(a-1)%3]++;break;}
    printf("Enter Valid Position\n");printf("|1|");printf("|2|");printf("|3|");printf("\n");printf("|4|");printf("|5|");printf("|6|");printf("\n");printf("|7|");printf("|8|");printf("|9|");printf("\n");}
    while(ar[(a-1)/3][(a-1)%3]!=3);
}
int board(int ar[3][3]){
   int a1 = ar[0][0]*ar[0][1]*ar[0][2];
    int a2 = ar[1][0]*ar[1][1]*ar[1][2];
    int a3 = ar[2][0]*ar[2][1]*ar[2][2];
    int a4 = ar[0][0]*ar[1][0]*ar[2][0];
    int a5 = ar[0][1]*ar[1][1]*ar[2][1];
    int a6 = ar[0][2]*ar[1][2]*ar[2][2];
    int a7 = ar[0][0]*ar[1][1]*ar[2][2];
    int a8 = ar[0][2]*ar[1][1]*ar[2][0];
        if(a1==1||a2==1||a3==1||a4==1||a5==1||a6==1||a7==1||a8==1){return 1;}
        if(a1==27||a2==27||a3==27||a4==27||a5==27||a6==27||a7==27||a8==27){return 2;}
        if((a1==3||a1==6||a1==9)&&(a2==3||a2==6||a2==9)&&(a3==3||a3==6||a3==9)&&(a4==3||a4==6||a4==9)&&(a5==3||a5==6||a6==9)&&(a7==3||a7==6||a7==9)&&(a8==3||a8==6||a8==9)){return 0;}
}
int main(){
    int ar[3][3];
    int z=0;
         for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
                ar[i][j]=2;
        }    }
         prtictactoe(ar);
        { printf("|1|");printf("|2|");printf("|3|");printf("\n");printf("|4|");printf("|5|");printf("|6|");printf("\n");printf("|7|");printf("|8|");printf("|9|");printf("\n");}
    while(1){
           changeboard1(ar);
           prtictactoe(ar);
               if( board(ar)==1){printf("Player 1 Won"); break;}
               if( board(ar)==0){printf("Itz a draw "); break;}

           changeboard2(ar);
           prtictactoe(ar);
                if( board(ar)==2){printf("Player 2 Won"); break;}
                if( board(ar)==0){printf("Itz a draw "); break;}
    }
    return 0;
}