.data

space: .asciiz "\n"



.text

# resultado = (multiplicador*semilla + constAd)(modulo)
# en el siguiente numero se sustituye la semilla por el resultado
# y asi sucesivamente en cada resultado

main:

addi $t9, $zero, 1

while:
	#condicion para salir
	#cambiar el numero para generar
	#para generar esa cantidad aleatorios
	bgt $t9, 100, exit
	
##Generar numero aleatorio, Congruencial Mixto
	
	# semilla es $t0
	# esta inicializada como 0
	
	addi $t1, $zero, 515   #constante multiplicativa

	mult $t0, $t1

	mflo $s0 		#resultado de multiplicacion

	addi $t3, $zero, 1 	#constante aditiva

	add $t4, $s0, $t3  	#se agrega la constante al resultado

	####	MOD Modulo	###
	add $t5, $zero, 2147483648	
	div $t6, $t4, $t5

	mult $t6, $t5
	mflo $s1
	sub $t8, $t4, $s1
	
	abs $t8, $t8

	move $t0, $t8
	### imprimir ###
	li $v0, 1

	add $a0, $zero, $t8
	syscall
	
	li $v0, 4
	la $a0, space
	syscall
	
	##sumar 1 a la condicion para hasta que llegue a 10
	addi $t9, $t9, 1
	
	j while

exit:
	




