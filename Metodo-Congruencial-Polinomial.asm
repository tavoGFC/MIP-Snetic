.data

space: .asciiz "\n"


.text

	main:
	
		addi $t9, $zero, 1

		addi $s0, $zero, 0	#semilla
		
		
		addi $t6, $zero, 51   	#constante multiplicativa
        	addi $t7, $zero, 237   	#constante sumativa
        	addi $t8,$zero, 7    	#constante multiplicativa
        		

		while:
			#condicion para salir
			#cambiar el numero para generar
			#para generar esa cantidad aleatorios
			bgt $t9, 10, exit
			
	
			mult $s0, $s0 	# se eleva al cuadrado la semilla
			mflo $t0
			
       			mult $t6, $t0 	# se multiplica 51 * semilla^2
       			mflo $t1
       			
       			mult $t8, $s0	# se multiplica 7 * semilla
       			mflo $t2
       			
       			add $t3, $t1, $t2	# se sumal las dos multiplicaciones
			
			add $t4, $t3, $t7	# se suma la constante
			
			#modulo#
			add $t5, $zero, 100
			div $s1, $t4, $t5

			mult $s1, $t5
			mflo $s2
			sub $s3, $t4, $s2
	
			abs $s3, $s3	#resultado se guarde en $s3
			
			move $s0, $s3	#cambiamos la semilla por el resultado anterior
			
			### imprimir ###
			li $v0, 1

			add $a0, $zero, $s3
			syscall
	
			li $v0, 4
			la $a0, space
			syscall
			
			##sumar 1 a la condicion para hasta que llegue a 10
			addi $t9, $t9, 1
	
		        j while
		        
		exit:
	  li $v0, 10
	  syscall
