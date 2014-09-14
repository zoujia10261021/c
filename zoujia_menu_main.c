/**************************************************************************************************/
/* Copyright (C) zoujia, SSE@USTC, 2014-2015                                                      */
/*                                                                                                */
/*  FILE NAME             :  zoujia_menu_main.c                                                   */
/*  PRINCIPAL AUTHOR      :  Zoujia                                                               */
/*  SUBSYSTEM NAME        :  zoujia_menu_main                                                     */
/*  MODULE NAME           :  zoujia_menu_main                                                     */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/12                                                           */
/*  DESCRIPTION           :  This is a menu program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Zoujia, 2014/09/12
 *
 */
 
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"
 
#define CMD_MAX_LEN 128

int Help();
  
static tDataNode head[] =
{	
	{"help",    "- This is help menu",       Help, &head[1]},
	{"version", "- menu program v1 version", NULL, NULL}    		
};
 
main()
{
    tDataNode* p;
 	char cmd[CMD_MAX_LEN];
    while(1)
    { 	
    	printf("Intput a cmd >");
     	scanf("%s", cmd);
     	p = FindCmd(head,cmd);
     	if(p)
     	{
     		if(p -> handler )
     		{
                p -> handler();
     		}
     		else
     		{
                printf("%s %s\n",p -> cmd,p -> desc);
     		}
     	}
     	else
     	{
            printf("This is a wrong cmd\n");
     	}
     }	
 }

int Help()
{
	printf("%s %s\n",head -> cmd,head -> desc);
 	ShowAllCmd(head);
 	return 0;
}