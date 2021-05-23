/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBUIBiometricResource;

@protocol SBUIPasscodeBiometricMatchingAssertionFactory;

@interface SBUIPasscodeBiometricResource : NSObject

{
    SBUIBiometricResource *_biometricResource;
    id <SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasEnrolledIdentities;
@property (nonatomic, readonly) _Bool hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly, getter=isFingerOn) _Bool fingerOn;
@property (nonatomic, readonly, getter=isFingerDetectEnabled) _Bool fingerDetectEnabled;
@property (nonatomic, readonly) _Bool hasMesaSupport;
@property (nonatomic, readonly) _Bool hasPearlSupport;
@property (nonatomic, readonly, getter=isPearlDetectEnabled) _Bool pearlDetectEnabled;
@property (nonatomic, readonly, getter=isMatchingEnabled) _Bool matchingEnabled;
@property (nonatomic, readonly, getter=isMatchingAllowed) _Bool matchingAllowed;
@property (nonatomic, readonly) unsigned long long biometricLockoutState;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)resumeMatchingAdvisory:(_Bool)arg1;
- (id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 HIDEventsOnly:(_Bool)arg2;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)refreshMatchMode;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(_Bool)arg2;

@end
