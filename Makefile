prog: compiler.l compiler.y
	bison -d compiler.y
	flex compiler.l
	gcc -o cruby compiler.tab.c lex.yy.c

clean:
	rm lex.* compiler.tab.* cruby
