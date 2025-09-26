 #include <stdio.h>
 int main (){
 	
 int op;
 int edad;
 int x;
    printf("Elija una opcion:\n");
    printf("1:  par o impar\n");
    printf("2: pon tu edad\n");
    printf("Opcion: ");
    switch(op){
        case 1:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            if(x % 2 == 0)
                printf("El numero es par\n");
            else
                printf("El numero es impar\n");
            break;
        case 2:
            printf("Ingrese su edad: ");
            scanf("%d", &edad);
            if(edad >= 65)
                printf("Adulto mayor\n");
            else if(edad >= 18)
                printf("Adulto\n");
            else
                printf("Menor de edad\n");
            break;
        default:
            printf("No se eligio  nadota\n");
    }
    return 0;
}
