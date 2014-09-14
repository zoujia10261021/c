/**************************************************************************************************/
/* Copyright (C) zoujia, SSE@USTC, 2014-2015                                                      */
/*                                                                                                */
/*  FILE NAME             :  linklist.h                                                           */
/*  PRINCIPAL AUTHOR      :  Zoujia                                                               */
/*  SUBSYSTEM NAME        :  linklist                                                             */
/*  MODULE NAME           :  linklist                                                             */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/12                                                           */
/*  DESCRIPTION           :  linklist for menu program                                            */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Zoujia, 2014/09/12
 *
 */
 
 
typedef struct DataNode
{
    char*   cmd;
    char*   desc;
    int     (*handler)();
    struct  DataNode *next;
} tDataNode;
 
/* find the cmd that you inputed */  
tDataNode* FindCmd(tDataNode *head, char *cmd);

/* show all cmd */ 
int ShowAllCmd(tDataNode *head);
