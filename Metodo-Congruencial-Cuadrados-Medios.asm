.data

	space: .asciiz ", "  

.text
	main:
		li $t0, 445  #Semilla
		li $t1, 10  #divisor
		li $t2, 10 # multiplicador
		li $t3, 0  #Semilla temp
		li $t4, 0 # numExtremos
		li $t5, 0 # numExtremos aux
		li $s0, 0  # i como contador
		
		jal cuadrados	

		li $v0, 10
		syscall	
	
	cuadrados:
		mul $t0, $t0, $t0
		move $t3, $t0
		
		j contador
		
		jr $ra
	
		
	contador:
		beqz $t3, auxCuadrados
		div $t3, $t3, $t1
		addi $s0, $s0, 1
		
		j contador
	
	auxCuadrados:		
		sub $t4, $s0, 4
		div $t4, $t4, 2
		sub $t5, $s0, $t4
		
		j sigExt
		
		jr $ra
	
	sigExt:
		beq $t5, 1, noSigExt
		mul $t1, $t1, 10
		sub $t5, $t5, 1
		
		j sigExt
		
	noSigExt:
		beq $t4, 1, auxiliar2
		mul $t2, $t2, 10
		sub $t4, $t4, 1
		
		j noSigExt
		
	auxiliar2:
		div $t3, $t0, $t1
		mul $t3, $t3, $t1
		sub $t0, $t0, $t3
		
		div $t0, $t0, $t2
		
		li $v0, 1
		move $a0, $t0
		syscall
