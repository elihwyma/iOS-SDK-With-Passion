/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTimeballNetworkRequester : NSObject

- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)_makeDirectionsRequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)_makeETARequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;

@end
