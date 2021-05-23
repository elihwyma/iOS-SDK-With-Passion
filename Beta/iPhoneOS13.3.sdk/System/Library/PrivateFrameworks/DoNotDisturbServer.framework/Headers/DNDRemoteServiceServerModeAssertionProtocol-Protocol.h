/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDRemoteServiceServerModeAssertionProtocol <Swift>

- (unsigned short)takeModeAssertionWithDetails:requestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateActiveModeAssertionWithDetails:reasonOverride:requestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getActiveModeAssertionWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLatestModeAssertionInvalidationWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateAllActiveModeAssertionsWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForAssertionUpdatesWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;

@end
