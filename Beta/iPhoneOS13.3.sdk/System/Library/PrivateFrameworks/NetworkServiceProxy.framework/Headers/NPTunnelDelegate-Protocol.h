/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/Swift-Protocol.h>

@protocol NPTunnelDelegate <Swift>

@property (readonly) _Bool isFirstTunnel;

- (unsigned short)tunnel:flowDidFallbackWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)tunnelDidConnect: /* Error: Ran out of types for this method. */;
- (unsigned short)tunnelIsReady: /* Error: Ran out of types for this method. */;
- (unsigned short)tunnelDidCancel: /* Error: Ran out of types for this method. */;

@end
