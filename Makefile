all: a.out
	@echo "\n+++++++++++++++++++ Test 1 +++++++++++++++++++\n\n"
	./a.out < ass5_18CS10064_test1.c > ass5_18CS10064_quads1.out

	@echo "\n+++++++++++++++++++ Test 2 +++++++++++++++++++\n\n"
	./a.out < ass5_18CS10064_test2.c > ass5_18CS10064_quads2.out

	@echo "\n+++++++++++++++++++ Test 3 +++++++++++++++++++\n\n"
	./a.out < ass5_18CS10064_test3.c > ass5_18CS10064_quads3.out

	@echo "\n+++++++++++++++++++ Test 4 +++++++++++++++++++\n\n"
	./a.out < ass5_18CS10064_test4.c > ass5_18CS10064_quads4.out

	@echo "\n+++++++++++++++++++ Test 5 +++++++++++++++++++\n\n"
	./a.out < ass5_18CS10064_test5.c > ass5_18CS10064_quads5.out
	
	
	@echo "\nAll Test Case Successfully Translated !!\n"

a.out: lex.yy.o y.tab.o ass5_18CS10064_translator.o 
	g++ lex.yy.o y.tab.o ass5_18CS10064_translator.o 


y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass5_18CS10064.l y.tab.c
	flex ass5_18CS10064.l 

y.tab.c:	ass5_18CS10064.y
	yacc -dtv ass5_18CS10064.y 

ass5_18CS10064_translator.o: ass5_18CS10064_translator.h ass5_18CS10064_translator.cxx
	g++ -c ass5_18CS10064_translator.cxx

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.ass5_18CS10064_quads ass5_18CS10064_translator.o ass5_18CS10064_quads*.out
