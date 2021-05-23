/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider

{
    NSPManager *_manager;
}

@property (retain) NSPManager *manager;

- (id)init;
- (_Bool)handleNewFlow:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
