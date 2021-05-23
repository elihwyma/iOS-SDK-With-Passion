/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@class SBUIProudLockContainerViewController;

@protocol SBUIPasscodeLockView_Internal <Swift>

@property (retain, nonatomic) SBUIProudLockContainerViewController *overrideProudLockContainerViewController;
@property (nonatomic) CDStruct_29b32c11 proudLockConfiguration;
@property (nonatomic) _Bool confirmedNotInPocket;
@property (nonatomic) _Bool canSuggestSwipeToRetry;

- (unsigned short)updateTransitionWithProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)_overrideBiometricMatchingEnabled:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)_resumeBiometricMatchingAdvisory: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTransitionToState: /* Error: Ran out of types for this method. */;
- (unsigned short)willEndTransitionToState: /* Error: Ran out of types for this method. */;
- (unsigned short)didEndTransitionToState: /* Error: Ran out of types for this method. */;

@end
