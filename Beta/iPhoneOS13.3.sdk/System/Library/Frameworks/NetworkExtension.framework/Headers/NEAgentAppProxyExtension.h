/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAgentTunnelExtension.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegateInterface:(unsigned int)arg1;
- (void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)connectWithParameters:(id)arg1;
- (id)driverInterface;
- (int)requiredEntitlement;
- (id)managerInterface;

@end
