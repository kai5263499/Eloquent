//
//  ModuleManager.h
//  Eloquent
//
//  Created by Manfred Bergmann on 26.12.07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <ObjCSword/ObjCSword.h>

@class ModuleManageViewController;

@interface ModuleManager : NSWindowController <NSToolbarDelegate> {
    // the module view controller
    ModuleManageViewController *moduleViewController;
    
	// we need a dictionary for all our toolbar identifiers
	NSMutableDictionary *tbIdentifiers;
}

@property (strong, readwrite) id delegate;

- (id)initWithDelegate:(id)aDelegate;

- (void)setupToolbar;

@end
