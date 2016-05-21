.data
   
   space: .asciiz "\n" #imprime los numeros con espacio
   
.text    
   
    main:
    
    addi $t9, $zero, 1 #condicion de terminacion del while
    
    
    
    addi $s1,$zero,2 #semilla 1
    addi $s2,$zero,1 #semilla 2
    
    while: 
    
    bgt $t9,100,exit #cundo llegue a 100 termina
    
    
    add $s3, $s1, $s2 #suma de los dos semillas
    
    
    #modulo 
    
    add $t3,$zero,231
    div $t4,$s3,$t3
    
    mult $t4,$t3
    mflo $s5
    sub $t8,$s3, $s5
    
    abs $t8,$t8
    
    move $s2, $s1
    move $s1, $t8
    
    ###########
    
    li $v0,1
    
    add,$a0,$zero,$t8  #se mueven los numeros a a0
    syscall
    
    li $v0,4
    la $a0,space  #se pasan a string para imprimir con espacios
    syscall
    
    addi $t9, $t9, 1 #se le va sumando 1 para condición de terminacioin
    
    j while
    
    exit:
	
	
 
