#include <stdio.h>

    int Plus(int a,int b);
    int Minus(int a,int b);
    int Mal(int a,int b);
    int Geteilt(int a,int b);
    int Hoch(int a,int b);
    int Mod(int a,int b);


    int main() {
        int a = 0;
        int b = 0;
        double Loesung=0;
        int Rechenart=0;
        printf("Rechenart 1:a+b 2:a-b 3:a*b 4:a/b 5:a^b 6:a mod b ");
        scanf("%d",&Rechenart);
        printf("a:");
        scanf("%d",&a);
        printf("b:");
        scanf("%d",&b);
        switch (Rechenart)
        {
        case 1:
            Loesung=Plus(a,b);
            break;
        
        case 2:
            Loesung=Minus(a,b);
            break;
        case 3:
            Loesung=Mal(a,b);
            break;
        case 4:
            Loesung=Geteilt(a,b);
            break;
        case 5:
            Loesung=Hoch(a,b);
            break; 
        case 6:
            Loesung=Mod(a,b);
            break;  
        default:
             printf("Keine Rechnung");
            break;
        }
        
        printf("Loesung: %f" , Loesung);
    }
    int Plus(int a,int b){
        double Loesung = 0;
        Loesung = a + b;
        return Loesung;
    }
    int Minus(int a,int b){
        double Loesung = 0;
        Loesung = a - b;
        return Loesung;
    }
    int Mal(int a,int b){
        double Loesung = 0;
        Loesung = a * b;
        return (Loesung);
    }
    int Geteilt(int a,int b){
        double Loesung = 0;
        Loesung = (double) a / b;
        return (Loesung);
    }
    int Hoch(int a,int b){
        double Loesung  = 1;
        while(b>=1){
            Loesung = Loesung*a;
            b= b-1;
        }
        return (Loesung);
    }
    int Mod(int a,int b){
        double Loesung  = 1;
        while(a>=b){
            a= a-b;            
        }
        Loesung = a;
        return (Loesung);
    }