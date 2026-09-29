//Calculator
#include <stdio.h>
int main() {
    printf("Enter S to exit \n");
    double a;
    scanf("%lf",&a);
    char b=' ';
    double c;
    scanf(" %c",&b);
    scanf("%lf",&c);
    while(b!='S'){
        
        switch(b){
            case '+':
                a+=c;
                printf("%lf\n",a);
                break;
            case '-':
                a-=c;
                printf("%lf\n",a);
                break;
            case '*':
                a*=c;
                printf("%lf\n",a);
                break;
            case '/':
                a/=c;
                printf("%lf\n",a);
                break;
            default:
                printf("Invalid operator\n"); 
                break;
        }
        scanf(" %c",&b);
        scanf("%lf",&c);
    }
   printf("Program done \n");
   
}
