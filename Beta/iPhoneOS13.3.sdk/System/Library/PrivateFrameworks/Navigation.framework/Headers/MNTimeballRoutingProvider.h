/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTimeballCache, MNTimeballNetworkRequester;

@protocol OS_dispatch_queue;

@interface MNTimeballRoutingProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MNTimeballCache *_cache;
    MNTimeballNetworkRequester *_networkRequester;
}

- (id)initWithCache:(id)arg1;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 auditToken:(id)arg5 callbackBlock:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)_gotoNetworkForOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)_checkCacheForOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setNetworkRequester:(id)arg1;

@end
