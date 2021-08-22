# push_swap

Goal: write a program named push_swap which will receive as an argument a list of integers. 

• The program must display the smallest list of instructions possible to sort the stack A, the smallest number being at the top.
• Instructions must be separated by a ’\n’.
• The goal is to sort the stack with the minimum possible number of operations.

• In case of error, the program must display Error followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer, and/or there are duplicates.

Functions allowed:
◦ write
◦ read
◦ malloc
◦ free
◦ exit

Example:
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>

#### FYI: this push_swap can sort any list but it is optimized for sorting a list of 3, 5, 100 or 500  ###
