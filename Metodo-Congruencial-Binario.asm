.data  
	space: .asciiz "\n"

.text 

main:
	
	###li $t0, 1111
	addi $t0,$zero, 1111
	
	###li $t7, 15
	addi $t7,$zero, 15
	
	while:
	
		beqz $t7,exit
	
		div $t1, $t0, 10
		rem $t2, $t0, 10
	
		rem $t4, $t1, 10
	
		xor $t5, $t2, $t4
	###li $t3, 1000
		addi $t3,$zero,1000

		mult $t5, $t3

		mflo $t5

		div $t6, $t0, 10

		add $t0, $t5, $t6
	
		sub $t7, $t7, 1
	

	###li $v0,1
		addi $v0,$zero,1
		add $a0, $zero, $t0
		syscall
	###li $v0, 4
		addi $v0,$zero,4
		la $a0, space
		syscall
	
		j while

	exit:
	###li $v0,10 # exit
	addi $v0,$zero,10
	syscall
