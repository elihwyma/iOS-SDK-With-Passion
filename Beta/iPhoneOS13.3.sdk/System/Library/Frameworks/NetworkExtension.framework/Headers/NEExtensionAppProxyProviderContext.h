/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionTunnelProviderContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <Swift>

{
    unsigned int _delegateInterfaceIndex;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector *_director;
}

@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property struct _NEFlowDirector *director;
@property unsigned int delegateInterfaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (void)cancelWithError:(id)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)flowDivertOpenControlSocket;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 auditToken:(struct __CFData *)arg2 signingIdentifier:(struct __CFString *)arg3;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)openFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(_Bool)arg2;

@end
