/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDSRemoteServiceProviderAssertionDelegate <Swift>

- (unsigned short)remoteServiceProvider:takeModeAssertionWithDetails:clientIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteServiceProvider:invalidateModeAssertionForClientIdentifier:reason:reasonOverride:details:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteServiceProvider:assertionWithClientIdentifer:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteServiceProvider:latestInvalidationWithClientIdentifer:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteServiceProvider:invalidateAllModeAssertionsTakenBeforeDate:forReason:clientIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteServiceProvider:invalidateModeAssertionWithUUID:reason:reasonOverride:error: /* Error: Ran out of types for this method. */;

@end
