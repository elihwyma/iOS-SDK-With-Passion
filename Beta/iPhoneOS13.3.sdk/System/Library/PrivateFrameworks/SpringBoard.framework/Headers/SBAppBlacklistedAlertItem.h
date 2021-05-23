/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplicationIcon;

@interface SBAppBlacklistedAlertItem : SBAlertItem

{
    SBApplicationIcon *_icon;
}

- (_Bool)dismissOnLock;
- (id)initWithIcon:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;

@end
