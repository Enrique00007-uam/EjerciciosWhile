Proceso sin_titulo
	
	// Desarrolla un programa que solicite al usuario ingresar dos vectores
	// de igual longitud y luego calcule la suma de ambos vectores. El
	// resultado debe mostrarse en un tercer vector
	
	Definir n, i Como Entero; 
	Dimension vector1[1000], vector2[1000];
	Definir vector1 Como Real;
	Definir vector2 Como Real;
	Definir producto Como Real;
	
	Escribir "Ingrese la longitud de los vectores:";
	Leer n;
	
	Escribir "Ingrese los valores del primer vector:";
	i <- 1;
	Mientras i <= n Hacer
		Leer vector1[i];
		i <- i + 1;
	FinMientras
	
	Escribir "Ingrese los valores del segundo vector:";
	i <- 1;
	Mientras i <= n Hacer
		Leer vector2[i];
		i <- i + 1;
	FinMientras
	
	i <- 1;
	producto <- 0;
	Mientras i <= n Hacer
		
		i <- i + 1;
	FinMientras
	
	Escribir "La suma de los vectores es:";
	i <- 1;
	Mientras i <= n Hacer
		producto <- producto +vector1[i] * vector2[i];
		i <- i + 1;
	FinMientras
	Escribir "El producto punto de los vectores es:";
	
	Escribir producto;
FinProceso
