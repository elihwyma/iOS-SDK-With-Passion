/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isBlockedForThermal) _Bool blockedForThermal;
@property (retain, nonatomic, getter=isPendingDeviceWipe) NSNumber *pendingDeviceWipe;
@property (retain, nonatomic, getter=isBlockedForPasscode) NSNumber *blockedForPasscode;
@property (retain, nonatomic) NSNumber *numberOfFailedPasscodeAttempts;
@property (retain, nonatomic) NSNumber *unblockTimeFromReferenceDate;
@property (retain, nonatomic) NSNumber *blockStateGeneration;
@property (nonatomic, readonly, getter=isDeviceWipeEnabled) _Bool deviceWipeEnabled;
@property (nonatomic, readonly) _Bool dontLockEver;
@property (nonatomic, readonly) _Bool allowLockAndUnlockWithCase;
@property (nonatomic, readonly) _Bool enableLayerBasedViewSecurity;
@property (nonatomic, readonly) _Bool reportSecureDrawViolations;

- (void)_bindAndRegisterDefaults;
- (id)deviceLockDefaultForKey:(id)arg1;
- (void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2;

@end
