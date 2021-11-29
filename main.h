#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>
#include<readline/history.h>
#define MAXCOM 1000
#define MAXLIST 100
#define clear() printf("\033[H\033[J")
int takeInput(char *str);
void print_line(void);
void execArgs(char **parsed);
void execArgsPiped(char **parsed, char **parsedpipe);
int ownCmdHandler(char **parsed);
int parsePipe(char *str, char **strpiped);
void parseSpace(char *str, char **parsed);
int processString(char *str, char **parsed, char **parsedpipe);
#endif /* MAIN_H */
