/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)allowInSetup;

@end
