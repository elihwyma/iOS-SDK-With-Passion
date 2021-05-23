/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFMobileKeyBagState.h>

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (nonatomic) long long lockState;
@property (nonatomic) double backOffTime;
@property (nonatomic) unsigned long long failedAttemptCount;
@property (nonatomic) _Bool permanentlyBlocked;
@property (nonatomic) _Bool shouldWipe;
@property (nonatomic) _Bool recoveryEnabled;
@property (nonatomic) _Bool recoveryRequired;
@property (nonatomic) _Bool recoveryPossible;
@property (nonatomic) long long escrowCount;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMKBLockStateInfo:(id)arg1;
- (id)_mutableState;

@end
