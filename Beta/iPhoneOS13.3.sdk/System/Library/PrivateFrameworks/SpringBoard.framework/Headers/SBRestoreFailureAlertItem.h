/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBRestoreFailureAlertItem : SBAlertItem

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)allowInSetup;
- (_Bool)suppressForKeynote;
- (void)_rebootNow;
- (void)restartSystemEvent;

@end
