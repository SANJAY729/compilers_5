all: a.out
	@echo "\n+++++++++++++++++++ Test 1 +++++++++++++++++++\n\n"
	./a.out < ass5_roll_test1.c > output1.txt

	@echo "\n+++++++++++++++++++ Test 2 +++++++++++++++++++\n\n"
	./a.out < ass5_roll_test2.c > output2.txt

	@echo "\n+++++++++++++++++++ Test 3 +++++++++++++++++++\n\n"
	./a.out < ass5_roll_test3.c > output3.txt

	@echo "\n+++++++++++++++++++ Test 4 +++++++++++++++++++\n\n"
	./a.out < ass5_roll_test4.c > output4.txt

	@echo "\n+++++++++++++++++++ Test 5 +++++++++++++++++++\n\n"
	./a.out < ass5_roll_test5.c > output5.txt
	
	
	@echo "\nAll Test Case Successfully Translated !!\n"

a.out: lex.yy.o y.tab.o ass5_roll_translator.o 
	g++ lex.yy.o y.tab.o ass5_roll_translator.o 


y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass5_roll.l y.tab.c
	flex ass5_roll.l 

y.tab.c:	ass5_roll.y
	yacc -dtv ass5_roll.y 

ass5_roll_translator.o: ass5_roll_translator.h ass5_roll_translator.cxx
	g++ -c ass5_roll_translator.cxx

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass5_roll_translator.o output*.txt
