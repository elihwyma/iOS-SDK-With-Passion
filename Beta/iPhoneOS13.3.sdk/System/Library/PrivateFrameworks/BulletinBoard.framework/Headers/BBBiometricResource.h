/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BKDevice;

@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject

{
    _Bool _isPasscodeSet;
    _Bool _isBiometricUnlockAllowed;
    _Bool _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) _Bool hasPearlCapability;
@property (nonatomic, readonly) _Bool isPearlEnabledAndEnrolled;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_updateIsPasscodeSet;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_registerForBKEnrollmentChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void)_registerForPasscodeChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_unregisterForBiometricUnlockAllowedChange;

@end
