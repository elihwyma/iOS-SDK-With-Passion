/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEAppProxyProvider;

@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;

@interface NEAppProxyProviderContainer : NSObject

{
    unsigned int _delegateInterfaceIndex;
    NEAppProxyProvider *_provider;
    id <NEAppProxyProviderContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector *_director;
    CDUnknownBlockType _stopCompletionHandler;
}

@property (retain) id <NEAppProxyProviderContainerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property struct _NEFlowDirector *director;
@property unsigned int delegateInterfaceIndex;
@property (copy) CDUnknownBlockType stopCompletionHandler;
@property (readonly) NEAppProxyProvider *provider;

- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setConfiguration:(id)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;
- (void)flowDivertOpenControlSocket;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 auditToken:(struct __CFData *)arg2 signingIdentifier:(struct __CFString *)arg3;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setInitialFlowDivertControlSocket:(id)arg1;

@end
