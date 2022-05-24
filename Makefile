all : exec

main.o : main.c game2.o
	gcc -c main.c -o main.o

game2.o : game2.c  print_table_V2.o verif_int.o verif_line.o verify_column.o print_rand_pieces.o
	gcc -c game2.c -o game2.o

print_rand_pieces.o : print_rand_pieces.c 
	gcc -c print_rand_pieces.c -o print_rand_pieces.o

print_table_V2.o : print_table_V2.c
	gcc -c print_table_V2.c -o print_table_V2.o

verif_int.o : verif_int.c
	gcc -c verif_int.c -o verif_int.o

verif_line.o : verif_line.c
	gcc -c verif_line.c -o verif_line.o

verify_column.o : verify_column.c
	gcc -c verify_column.c verify_column.o

exec : main.o
	gcc main.o -o exec

clean : 
	rm -f *.o
	rm exec
