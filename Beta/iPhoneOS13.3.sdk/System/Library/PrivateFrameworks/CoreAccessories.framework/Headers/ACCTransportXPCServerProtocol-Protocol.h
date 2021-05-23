/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <CoreAccessories/Swift-Protocol.h>

@protocol ACCTransportXPCServerProtocol <Swift>

- (unsigned short)launchServer;
- (unsigned short)createConnectionWithType:andIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setProperties:forConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProperty:forConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)createEndpointWithTransportType:andProtocol:andIdentifier:forConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setAccessoryInfo:forEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setProperties:forEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProperty:forEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)publishConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)destroyEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)destroyConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)connectionUUIDForEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)endpointUUIDsForConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)authStatusForConnectionWithUUID:authType:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)isConnectionAuthenticatedForUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setConnectionAuthenticated:state: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryInfoForConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryInfoForEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)propertiesForConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)propertiesForEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)identifierForConnectionWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)identifierForEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)processIncomingData:forEndpointWithUUID:withReply: /* Error: Ran out of types for this method. */;

@end
