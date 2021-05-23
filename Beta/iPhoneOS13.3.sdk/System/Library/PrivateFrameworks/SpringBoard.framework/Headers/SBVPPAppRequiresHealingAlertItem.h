/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBVPPAppRequiresHealingAlertItem : SBAlertItem

{
    SBApplication *_application;
}

- (_Bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;

@end
