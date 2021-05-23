/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPhoneAlertItem.h>

@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem

- (id)initWithSlot:(long long)arg1;
- (id)lockLabel;
- (id)shortLockLabel;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (void)_showPrefs;

@end
