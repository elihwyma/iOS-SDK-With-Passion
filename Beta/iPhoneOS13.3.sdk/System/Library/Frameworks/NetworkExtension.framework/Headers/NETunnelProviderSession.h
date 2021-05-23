/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection

- (_Bool)startTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;
- (void)stopTunnel;
- (_Bool)sendProviderMessage:(id)arg1 returnError:(id *)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
