.data

space: .asciiz "\n"


.text
# mismo caso que el metodo Mixto, este metodo sin constante aditiva y la semilla diferente a 0
# resultado = (multiplicador*semilla)(modulo)
# en el siguiente numero se sustituye la semilla por el resultado
# y asi sucesivamente en cada resultado

main:

addi $t9, $zero, 1

# semilla es $t0
# esta inicializada como 0
addi $s2, $zero, 13

while:
	#condicion para salir
	#cambiar el numero para generar
	#para generar esa cantidad aleatorios
	bgt $t9, 10, exit
	
##Generar numero aleatorio, Congruencial Mixto
	
	
	
	addi $t1, $zero, 66360   #constante multiplicativa

	mult $s2, $t1

	mflo $s0 		#resultado de multiplicacion

	addi $t3, $zero, 0	#constante aditiva

	add $t4, $s0, $t3  	#se agrega la constante al resultado

	####	MOD Modulo	###
	add $t5, $zero, 42949
	div $t6, $t4, $t5

	mult $t6, $t5
	mflo $s1
	sub $t8, $t4, $s1
	
	abs $t8, $t8

	move $s2, $t8
	### imprimir ###
	li $v0, 1

	add $a0, $zero, $s2
	syscall
	
	li $v0, 4
	la $a0, space
	syscall
	
	##sumar 1 a la condicion para hasta que llegue a 10
	addi $t9, $t9, 1
	
	j while

exit:
	

