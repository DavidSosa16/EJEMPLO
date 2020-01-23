                    //POZOS GARCIA JESICA//

#include <stdio.h>
#include <math.h>

int main (void)
{int opc,repetir,x,i,num,cunt,fact,ro;
float a,b,c,d,g,h,alum,cont,seis,siete,ocho,nueve,diez,fatc,cal,rep;
do
{

    printf("Hola, eligue una opcion\n\n\n");
    printf("1.-RESISTENCIAS EN PARALELO\n");
    printf("2.-PROMEDIO DE CALIFICACIONES\n");
    printf("3.-FACTORIAL DE N NUMEROS\n");
    scanf("%d",&opc);
    system("cls");
    switch(opc)
        {
        case 1:
            printf("vamos a calcular resistecia");
            printf(" en parelelo\n\n");
            printf("cuantas resistencias vamos a calcular?\n");
            scanf("%f",&a);
            b=0;
            for(i=1; i<=a; i++)
                {
                    printf("dame la resistencia %d en Ohm\n",i);
                    scanf("%f",&c);
                    g=pow(c,-1);
                    b=b+g;
                }
            h=pow(b,-1);
            printf("RESISTENCIA TOTAL EN PARALELO=%f OHM\n\n",h);
            break;
        case 2:
            printf("CUANTOS ALUMNOS SON?\n");
            scanf("%f",&alum);
            seis=0;
            siete=0;
            ocho=0;
            nueve=0;
            diez=0;
            cont=0;
            rep=0;
            for(cont=1;cont<=alum;cont++)
            {
                printf("Dame la calificacion del alumno %.0f\n",cont);
                scanf("%f",&cal);
                if(cal==6)
                    seis++;
                if(cal==7)
                    siete++;
                if(cal==8)
                    ocho++;
                if(cal==9)
                    nueve++;
                if(cal==10)
                    diez++;
                if(cal<=5)
                    rep++;
            }
            printf(" alumnos que sacaron seis:%.0f\n",seis);
            printf(" alumnos que sacaron siete:%.0f\n",siete);
            printf(" alumnos que sacaron ocho:%.0f\n",ocho);
            printf(" alumnos que sacaron nueve:%.0f\n",nueve);
            printf(" alumnos que sacaron diez:%.0f\n",diez);
            printf("alumnos que reprobaron:%.0f\n",rep);
            break;
        case 3:
            printf("Cuantos factoriales vamos a calcular:\n");
            scanf("%d", &fact);
            for(cunt=fact; cunt>=1; cunt--)
                {
                     printf("Dime el numero %d a calcular:\n",cunt);
                     scanf("%d",&num);
                     fatc=1;
                     for(ro=num; ro>1; ro--)
                     {
                         fatc=fatc*ro;
                     }
                     printf("El Factorial de %d es igual a: %f\n\n\n", num,fatc);
                }
            break;

        }

    printf("\n\n\n\nSi quieres repetir el programa oprime 5\n");
    scanf("%d",&repetir);
     system("\n\n\n\ncls");
}
while(repetir==5);
return 0;
}
