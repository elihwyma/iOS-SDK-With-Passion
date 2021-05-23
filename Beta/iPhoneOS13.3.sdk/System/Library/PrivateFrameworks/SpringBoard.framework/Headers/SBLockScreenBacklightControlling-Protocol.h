/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBLockScreenBacklightControlling <Swift>

@property (nonatomic) double backlightLevel;

- (unsigned short)setInScreenOffMode:forAutoUnlock:fromUnlockSource: /* Error: Ran out of types for this method. */;
- (unsigned short)isInScreenOffMode;
- (unsigned short)setInScreenOffMode: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldDisableALS;
- (unsigned short)startLockScreenFadeInAnimationForSource: /* Error: Ran out of types for this method. */;

@end
