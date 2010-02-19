//
//  WindowHostController+FullscreenDelegate.h
//  MacSword2
//
//  Created by Manfred Bergmann on 19.02.10.
//  Copyright 2010 Software by MABE. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WindowHostController.h>


@interface WindowHostController (FullscreenDelegate)

- (void)goingToFullScreenMode;
- (void)goneToFullScreenMode;
- (void)leavingFullScreenMode;
- (void)leftFullScreenMode;
- (IBAction)fullScreenModeOnOff:(id)sender;

@end
