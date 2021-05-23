/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBAppFreeDevProfileNotTrustedAlertItem : SBAlertItem

{
    SBApplication *_app;
}

- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (id)initWithApp:(id)arg1;

@end
