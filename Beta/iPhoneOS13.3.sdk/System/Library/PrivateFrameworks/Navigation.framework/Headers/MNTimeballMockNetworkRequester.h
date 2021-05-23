/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTimeballNetworkRequester.h>

@interface MNTimeballMockNetworkRequester : MNTimeballNetworkRequester

+ (void)setExpectedRouteUpdate:(id)arg1;

- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;

@end
