Proceso sin_titulo
	Definir sumaC Como entero;
	Definir promedio Como Real;
	Definir calificaciones Como Entero;
	Definir i como real;
	
	sumaC <- 0;
	i <-1;
	
	Mientras i <= 10 Hacer
		Escribir "Escribe la calificacon ", i;
		leer calificaciones;
		sumaC <- sumaC + calificaciones;
		i <- i +1;
	FinMientras
	
	promedio <- sumaC/10;
	Escribir "el promedio es: ", promedio;
	
FinProceso
