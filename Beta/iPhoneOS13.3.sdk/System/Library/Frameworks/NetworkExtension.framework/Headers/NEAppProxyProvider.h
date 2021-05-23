/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NETunnelProvider.h>

@interface NEAppProxyProvider : NETunnelProvider

- (_Bool)handleNewFlow:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelProxyWithError:(id)arg1;
- (_Bool)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2;

@end
