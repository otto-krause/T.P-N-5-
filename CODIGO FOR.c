T.P N°5 Algoritmos y estadísticas de datos:
1) # incluye < stdio.h >
int main () {
para ( int i = 0 ; i < 10 ; i ++) {
printf ( " % d \ n " , i);
}
return 0 ;
}
2) # incluye < stdio.h >
int main () {
int input; // entrada por stdin
int total = 0 ; // suma del total
int mayor = - 2147483647 ; // contiene la variable de mayor valor
para ( int i = 1 ; i < 16 ; i ++) {
printf ( " ingrese el valor numero % d : " , i);
scanf ( " % d " , & entrada);
total + = entrada;
si (entrada> mayor) {
mayor = entrada;
}
}
printf ( " el promedio de los valores ingresados es: % d \ n " , total / 15 );
printf ( " el mayor valor es: % d \ n " , superior);
return 0 ;
}
3) # incluye < stdio.h >
int main () {
printf ( " ingrese dos numeros: " );
int a, b;
scanf ( " % d % d " , & a, & b);
int c = a;

si (a> b) {
a = b;
b = c;
}
para ( int i = a + 1 ; i <b; i ++) {
printf ( " % d \ n " , i);
}
return 0 ;
}
4) # incluye < stdio.h >
int main () {
printf ( " ingrese in valor natural: " );
int a;
int f = 1 ;
scanf ( " % d " , & a);
si (a < 0 ) {
printf ( " el valor ingresado no es natural \ n " );
return 1 ;
}
más si (a> 0 ) {
para ( int i = 1 ; i <= a; i ++) {
f = f * i;
}
}
printf ( " el factorial de % d es % d \ n " , a, f);
return 0 ;
}
5) # incluye < stdio.h >
int main () {
int base, exp ;
flotar r = 1 ;

printf ( " ingrese un numero y un exponente: " );
scanf ( " % d % d " , & base, & exp );
si ( exp > 0 ) {
para ( int i = 0 ; i < exp ; i ++) {
r = r * base;
}
}
más si ( exp < 0 ) {
para ( int i = 0 ; i> exp ; i -) {
r = r / ( flotante ) base;
}
}
printf ( " \ n el resultado es: % f \ n " , r);
}
6) # incluye < stdio.h >
int main () {
int input;
int a, t = 0 ;
para ( int i = 1 ; i < 31 ; i ++) {
printf ( " \ t Alumno % d \ n " , i);
a = 0 ;
para ( int f = 1 ; f < 11 ; f ++) {
printf ( " ingrese la nota de la materia % d : " , f);
scanf ( " % d " , & entrada);
a + = entrada;
t + = entrada;
}
printf ( " \ t El promedio del alumno % d es: % d \ n " , i, a / 10 );
}
printf ( " \ t \ t El promedio total de la clase es: % d \ n " , t / 300 );
}

7) # incluye < stdio.h >
int main () {
int input;
int total = 0 , mayor = 0 , v = 0 ;
para ( int i = 1 ; i < 21 ; i ++) {
printf ( " ingrese el total de unidades diarias del vendedor % d : " , i);
scanf ( " % d " , & entrada);
printf ( " se vendio un total de % d en 15 dias \ n " , ingrese * 15 );
total + = entrada * 15 ;
si (mayor <entrada) {
mayor = entrada;
v = yo;
}
}
printf ( " el total de vendidos es: % d \ n " , total);
printf ( " el mejor vendedor es el % d , con un total de % d unidades vendidas \ n " , v, mayor *
15 );
return 0 ;
}
8) # incluye < stdio.h >
int main () {
int positivo = 0 , cero = 0 , negativo = 0 ;
int input;
para ( int i = 1 ; i < 11 ; i ++) {
scanf ( " % d " , & entrada);
si (entrada> 0 ) {
positivo ++;
}
de lo contrario si (entrada < 0 ) {
negativo ++;
}

else {
cero ++;
}
}
printf ( " Hay % d positivos, % d negativos y % d ceros \ n " , positivo, negativo, cero);
return 0 ;
}
9) # incluye < stdio.h >
int main () {
int input;
int g = 0 ;
para ( int i = 1 ; i < 21 ; i ++) {
printf ( " ingrese el sueldo del empleado % d : " , i);
scanf ( " % d " , & entrada);
si (entrada> 2000 ) {
g ++;
}
}
printf ( " son % d los que ganan mas de 2000 y % d los que no \ n " , g, 20 -g);
}
