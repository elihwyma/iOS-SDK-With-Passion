/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionProviderContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NEIPC, NSObject, NSString;

@protocol OS_dispatch_source;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <Swift>

{
    NEIPC *_ipc;
    NSObject<OS_dispatch_source> *_ipcIdleTimer;
}

@property (retain) NEIPC *ipc;
@property (retain) NSObject<OS_dispatch_source> *ipcIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelWithError:(id)arg1;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)establishIPCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didSetReasserting:(_Bool)arg1;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIPCDetached;
- (void)resetIPCIdleTimer;

@end
