/*  TiLP - Linking program for TI calculators
 *  Copyright (C) 2001-2003 Julien BLACHE <jb@tilp.info>
 *
 *  $Id$
 *
 *  Cocoa GUI for Mac OS X
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
#include "cocoa_sheets.h"
#include "cocoa_structs.h"
 
extern struct cocoa_objects_ptr *objects_ptr;

#import <Cocoa/Cocoa.h>
#import "SheetsController.h"
#import "TilpController.h"

// this function has nothing to do with msg sheets
void
cocoa_set_link_status(int status)
{
    id myTilpController;

    myTilpController = objects_ptr->myTilpController;
    
    [myTilpController setLinkStatus:status];
}


// we could use NSbeep(); on some boxes (dlgboxEntry maybe ?)
// and also request the user attention (ie. the app's icon will jump on the screen)
// see requestUserAttention()
 
void
create_cocoa_msg_sheet(const char *title, char *message)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;

    [mySheetsController msgSheet:[NSString stringWithCString:title]
                         message:[NSString stringWithCString:message]];
}

int
create_cocoa_msg2_sheet(const char *title, char *message)
{
    int ret;

    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;

    ret = [mySheetsController msg2Sheet:[NSString stringWithCString:title]
                                message:[NSString stringWithCString:message]];
                        
    return ret;
}
                                                    
 
int
create_cocoa_msg3_sheet(const char *title, char *message, const char *button1, const char *button2, const char *button3)
{
    int ret;

    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;

    ret = [mySheetsController msg3Sheet:[NSString stringWithCString:title]
                                message:[NSString stringWithCString:message]
                                button1:[NSString stringWithCString:button1]
                                button2:[NSString stringWithCString:button2]
                                button3:[NSString stringWithCString:button3]];

    return ret;
}
 
int
create_cocoa_msg4_sheet(const char *title, char *message)
{
    int ret;

    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;

    ret = [mySheetsController msg4Sheet:[NSString stringWithCString:title]
                                message:[NSString stringWithCString:message]];
                              
    return ret;
}

char *
create_cocoa_msg_entry(const char *title, const char *message, const char *content)
{
    char *ret;

    id mySheetsController;
    NSString *data;
    
    mySheetsController = objects_ptr->mySheetsController;

    data = [mySheetsController msgEntrySheet:[NSString stringWithCString:title]
                                     message:[NSString stringWithCString:message]
                                     content:[NSString stringWithCString:content]];
                               
    ret = strdup([data cString]);
    
    [data release];
    objects_ptr->dlgbox_data = nil;
    
    return ret;
}
 
void
create_cocoa_pbar_type2_sheet(const char *title, char *message)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
    
    [mySheetsController pbarType2:[NSString stringWithCString:message]];
}
 
 
void
create_cocoa_pbar_type1_sheet(const char *title)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
  
#if 0
    if ([NSThread isMultiThreaded])
      {
#ifdef OSX_DEBUG
          fprintf(stderr, "DEBUG: MULTITHREAD, issuing notification\n");
#endif
          [[NSNotificationCenter defaultCenter] postNotificationName:@"TilpThreadNeedsSheet"
                                                object:@"pbarType1"];
      }
    else
      {
#ifdef OSX_DEBUG
          fprintf(stderr, "DEBUG: NOT THREADED, spawning sheet\n");
#endif
#endif
          [mySheetsController pbarType1];
#if 0
      }
#endif
}
 
void
create_cocoa_pbar_type3_sheet(const char *title)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
    
    [mySheetsController pbarType3];
}
 
void
create_cocoa_pbar_type4_sheet(const char *title, char *text)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
    
    [mySheetsController pbarType4:[NSString stringWithCString:text]];
}
 
void
create_cocoa_pbar_type5_sheet(const char *title, char *text)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
    
    [mySheetsController pbarType5:[NSString stringWithCString:text]];
}

void
destroy_pbar(void)
{
    id mySheetsController;
    
    mySheetsController = objects_ptr->mySheetsController;
    
    [mySheetsController destroyPbar];
}
