/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDismissOnlyAlertItem.h>

@interface SBHomeScreenNagAlert : SBDismissOnlyAlertItem

- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;

@end
