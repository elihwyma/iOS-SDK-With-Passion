/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/Swift-Protocol.h>

@protocol IXClientDelegateProtocol <Swift>

- (unsigned short)_client_coordinatorShouldPrioritizeWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorShouldResumeWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorShouldPauseWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorWithUUID:configuredPromiseDidBeginFulfillment: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorShouldBeginRestoringUserDataWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorDidInstallPlaceholderWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorDidCompleteSuccessfullyWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_coordinatorWithUUID:didCancelWithReason:client: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_promiseDidCompleteSuccessfullyWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)_client_promiseWithUUID:didCancelWithReason:client: /* Error: Ran out of types for this method. */;

@end
