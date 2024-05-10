Proceso sin_titulo
	
	Escribir "Matriz 1";
	Dimension Matriz1[3,3];
	Dimension Matriz2[3,3];
	Dimension Matriz3[3,3];
	definir i, j Como Real;
	definir matriz1, Matriz2, Matriz3 Como Real;
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
	
	Escribir "Matriz 2";
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir "Escribe un numero: Fila ", i, ", columna ", j, ":";
			Leer Matriz2[i-1, j-1];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Matriz3[i-1,j-1] <- Matriz1[i-1,0] * Matriz2[0,j-1] + Matriz1[i-1,1] * Matriz2[1,j-1] + Matriz1[i-1,2] * Matriz2[2,j-1];
			j <- j + 1;
		FinMientras
		i <- i + 1;
	FinMientras
	
	Escribir "";
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir Matriz1[i-1, j-1], " ";
			j <- j + 1;
		FinMientras
		Escribir "";
		i <- i + 1;
	FinMientras
	
	Escribir "";
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir Matriz2[i-1, j-1], " ";
			j <- j + 1;
		FinMientras
		Escribir "";
		i <- i + 1;
	FinMientras
	
	Escribir "";
	i <- 1;
	Mientras i <= 3 Hacer
		j <- 1;
		Mientras j <= 3 Hacer
			Escribir Matriz3[i-1, j-1], " ";
			j <- j + 1;
		FinMientras
		Escribir "";
		i <- i + 1;
	FinMientras
	
FinProceso
