/**************************************************************************************************/
/* Copyright (C) zoujia, SSE@USTC, 2014-2015                                                      */
/*                                                                                                */
/*  FILE NAME             :  zoujia_menu_function.c                                               */
/*  PRINCIPAL AUTHOR      :  Zoujia                                                               */
/*  SUBSYSTEM NAME        :  zoujia_menu_function                                                 */
/*  MODULE NAME           :  zoujia_menu_function                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/12                                                           */
/*  DESCRIPTION           :  This is a menu program                                               */
/**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "linklist.h"

tDataNode* FindCmd(tDataNode *head, char *cmd)
{
    if( head == NULL || cmd == NULL )
    {
        return NULL;
    }
    tDataNode *p = head;
    while( p != NULL )
	{
        if( !strcmp( p -> cmd, cmd ) )
        {
            return p;
        }
        p = p -> next;
	}
    return NULL;
}
 
int ShowAllCmd(tDataNode *head)
{
    printf("cmd list:\n");
    tDataNode *p = head;
    while( p != NULL)
    {
        printf("%s %s\n",p -> cmd,p -> desc);
        p = p -> next;
    }	
    return 0;
}