Proceso sin_titulo
	Definir sumaC Como entero;
	Definir promedio Como Real;
	Definir calificaciones Como Entero;
	Definir i como real;
	Definir N, alumAprobados, alumReprobados Como Entero;
	sumaC <- 0;
	N <- 70;
	alumAprobados <- 0;
	alumReprobados <- 0;
	i <- 1; 
	
	Mientras i <= 8 Hacer
		Escribir "Escribe la calificacon ", i;
		leer calificaciones;
		sumaC <- sumaC + calificaciones;
		Si calificaciones>=N Entonces
			alumAprobados <- alumAprobados+1;
		SiNo
			alumReprobados <-alumReprobados +1;
		FinSi
		i <- i+1;
	FinMientras
	
	
	
	promedio <- sumaC/8;
	Escribir "el promedio es: ", promedio;
	Escribir "la cantidad de alumnos aprobados es de: " ,alumAprobados;
	Escribir "la cantidad de alumnos reprobados es de: " , alumReprobados;
FinProceso
