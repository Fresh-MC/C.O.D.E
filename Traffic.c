#include<stdio.h>
#include<unistd.h>
int main(){
int r,y,g;
printf("Red Light Duration : ");
scanf("%d",&r);
printf("Yellow Light Duration : ");
scanf("%d",&y);
printf("Green Light Duration : ");
scanf("%d",&g);

int i;
for(i=0;i<3;i++){
printf("\nRed Light : ");
for(i=r;i>0;i--){
printf("\nTime remaining : %d",i);
sleep(1);
}
printf("\nYellow Light : ");
for(i=y;i>0;i--){
printf("\nTime remaining : %d",i);
sleep(1);
}
printf("\nGreen Light : ");
for(i=g;i>0;i--){
printf("\nTime remaining : %d",i);
sleep(1);
}
}
return 0;

}
