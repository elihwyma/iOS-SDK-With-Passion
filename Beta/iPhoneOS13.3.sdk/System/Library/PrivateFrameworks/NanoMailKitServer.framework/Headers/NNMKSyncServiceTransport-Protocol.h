/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKSyncServiceTransport <Swift>

@property (nonatomic, readonly) unsigned long long connectivityState;
@property (nonatomic) _Bool forceFailureForAllRequests;
@property (nonatomic) _Bool simulateCloudConnectedOnly;

- (unsigned short)initWithServiceName:queue:delegate: /* Error: Ran out of types for this method. */;
- (unsigned short)sendProtobufData:type:priority:timeoutCategory:allowCloudDelivery: /* Error: Ran out of types for this method. */;
- (unsigned short)sendProtobufData:type:priority:timeout:allowCloudDelivery: /* Error: Ran out of types for this method. */;

@end
