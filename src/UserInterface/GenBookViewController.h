//
//  GenBookViewController.h
//  MacSword
//
//  Created by Manfred Bergmann on 25.08.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CocoLogger/CocoLogger.h>
#import <CocoPCRE/CocoPCRE.h>
#import <HostableViewController.h>
#import <ModuleViewController.h>
#import <ProtocolHelper.h>

@class SwordBook, ExtTextViewController;

#define GENBOOKVIEW_NIBNAME   @"GenBookView"

/** the view of this view controller is a ScrollSynchronizableView */
@interface GenBookViewController : ModuleViewController <NSCoding> {
    IBOutlet NSPopUpButton *modulePopBtn;
    IBOutlet NSOutlineView *entriesOutlineView;
    
    NSMutableArray *selection;
}

// ---------- initializers ---------
- (id)initWithModule:(SwordBook *)aModule;
- (id)initWithModule:(SwordBook *)aModule delegate:(id)aDelegate;
- (id)initWithDelegate:(id)aDelegate;

// ---------- methods --------------
// selector called by menuitems
- (void)moduleSelectionChanged:(id)sender;

// NSCoding
- (id)initWithCoder:(NSCoder *)decoder;
- (void)encodeWithCoder:(NSCoder *)encoder;

// actions
- (IBAction)moduleSelectionChanged:(id)sender;

@end
