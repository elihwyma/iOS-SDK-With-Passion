/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <CoreAccessories/Swift-Protocol.h>

@protocol ACCTransportXPCClientProtocol <Swift>

- (unsigned short)propertiesDidChange:forConnectionWithUUID:previousProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)propertiesDidChange:forEndpointWithUUID:previousProperties:connectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendOutgoingData:forEndpointWithUUID:connectionUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)authStateDidChange:forConnectionWithUUID:previousAuthState:authType:connectionIsAuthenticated:connectionWasAuthenticated: /* Error: Ran out of types for this method. */;

@end
