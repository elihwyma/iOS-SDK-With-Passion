/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@protocol SBUIBiometricResource <Swift>

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

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)acquireMatchingAssertionWithMode:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeMatchingAdvisory: /* Error: Ran out of types for this method. */;
- (unsigned short)acquireFingerDetectionWantedAssertionForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)acquireFingerDetectionWantedAssertionForReason:HIDEventsOnly: /* Error: Ran out of types for this method. */;
- (unsigned short)acquireFaceDetectionWantedAssertionForReason: /* Error: Ran out of types for this method. */;
- (unsigned short)acquireSimulatedLockoutAssertionWithLockoutState:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshMatchMode;
- (unsigned short)resumeMatchingForAssertion:advisory: /* Error: Ran out of types for this method. */;

@end
