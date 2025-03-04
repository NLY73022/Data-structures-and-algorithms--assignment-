//If we need to calculate the average of the marks obtained by a student in 3 subjects of math ,phy,chem ,with each having 4 tests of assignment,course work , midterm ,endof term
#include <stdio.h>
int main(){
    int math[4],phy[4],chem[4];
    int i;
    float avg_math,avg_phy,avg_chem;
    float avg_total;
    printf("Enter the marks of math\n");
    for(i=0;i<4;i++){
        scanf("%d",&math[i]);
    }
    printf("Enter the marks of phy\n");
    for(i=0;i<4;i++){
        scanf("%d",&phy[i]);
    }
    printf("Enter the marks of chem\n");
    for(i=0;i<4;i++){
        scanf("%d",&chem[i]);
    }
    avg_math=(math[0]+math[1]+math[2]+math[3])/4;
    avg_phy=(phy[0]+phy[1]+phy[2]+phy[3])/4;
    avg_chem=(chem[0]+chem[1]+chem[2]+chem[3])/4;
    avg_total=(avg_math+avg_phy+avg_chem)/3;
    printf("The average marks of math is %.2f\n",avg_math);
    printf("The average marks of phy is %f.2\n",avg_phy);
    printf("The average marks of chem is %f.2\n",avg_chem);
    printf(" The total average marks is %.2f\n",avg_total);
    return 0;
}