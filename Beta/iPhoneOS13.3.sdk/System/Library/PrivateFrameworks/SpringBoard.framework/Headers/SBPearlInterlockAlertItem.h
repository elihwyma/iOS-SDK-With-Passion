/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBPearlInterlockAlertItem : SBAlertItem

- (id)_title;
- (id)_message;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)reappearsAfterLock;

@end
