Proceso sin_titulo
	
	Escribir "Matriz 1";
	Dimension Matriz1[3,3];
	Dimension transpuesta[3,3];
	definir i, j Como Real;
	definir matriz1, transpuesta Como Real;
	i <- 1;
	
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir "Escribe un numero: Fila ", i, ", columna ", j, ":";
			Leer Matriz1[i-1, j-1];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			transpuesta[j-1, i-1] <- Matriz1[i-1, j-1];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	Escribir "";
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir transpuesta[i-1, j-1], " ";
			j <- j + 1;
		FinMientras
		Escribir "";
		i <- i + 1;
	FinMientras
	
FinProceso
