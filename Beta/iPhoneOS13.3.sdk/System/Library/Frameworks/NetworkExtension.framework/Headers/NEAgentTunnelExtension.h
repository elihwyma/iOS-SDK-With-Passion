/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAgentExtension.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEAgentTunnelExtension : NEAgentExtension <Swift>

{
    _Bool _cancelCalled;
}

@property _Bool cancelCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)disconnectWithReason:(int)arg1;
- (void)connectWithParameters:(id)arg1;
- (void)attachIPCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)driverInterface;
- (void)extension:(id)arg1 didRequestSocket:(_Bool)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extension:(id)arg1 didSetStatus:(long long)arg2;
- (void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extensionDidDetachIPC:(id)arg1;
- (void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2;
- (void)handleCancel;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (id)managerInterface;
- (void)handleExtensionStartedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendExtensionFailed;

@end
