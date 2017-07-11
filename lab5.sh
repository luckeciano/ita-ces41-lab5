#!/bin/bash
flex lab5.l
yacc lab5.y
gcc y.tab.c main.c yyerror.c -o lab5 -ll
./lab5 < testIndexacaoLab5.dat
