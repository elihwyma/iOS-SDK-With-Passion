/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBLockScreenLockingAndUnlocking <Swift>

@property (nonatomic, getter=isAuthenticated) _Bool authenticated;

- (unsigned short)jiggleLockIcon;
- (unsigned short)isUnlockDisabled;
- (unsigned short)willUIUnlockFromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForUIUnlock;
- (unsigned short)prepareForUILock;
- (unsigned short)finishUIUnlockFromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)canBeDeactivatedForUIUnlockFromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldUnlockUIOnKeyDownEvent;

@end
