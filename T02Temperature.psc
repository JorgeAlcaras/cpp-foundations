Algoritmo T02Temperature
	Escribir "1.-Fahrenheit to Celsius 2.-Celsius to Fahrenheit"
	Leer option
	
	Segun option Hacer
		1:
			secuencia_de_acciones_1
		opcion_2:
			secuencia_de_acciones_2
		opcion_3:
			secuencia_de_acciones_3
		De Otro Modo:
			secuencia_de_acciones_dom
	Fin Segun
	
	Si option = 1 Entonces
		Escribir "1.- Fahrenheit to Celsius"
		Leer fahrenheit
		temperature = 5 / 9 * fehrenheit
	SiNo
		Escribir "2.- Celsius to Fahrenheit"
		Leer celsius
		temperature = 9 * celsius / 5 + 32
	FinSi
	Escribir

	temperature
	
FinAlgoritmo
