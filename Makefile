prog: compiler.l compiler.y symbol_table.c
	bison -d compiler.y
	flex compiler.l
	gcc -o prog compiler.tab.c lex.yy.c symbol_table.c

clean:
	rm lex.* compiler.tab.* prog
