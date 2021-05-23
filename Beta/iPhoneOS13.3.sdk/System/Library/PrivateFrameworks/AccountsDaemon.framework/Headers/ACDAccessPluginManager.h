/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol OS_dispatch_queue;

@interface ACDAccessPluginManager : NSObject

{
    NSSet *_accessPlugins;
    NSObject<OS_dispatch_queue> *_accessPluginQueue;
}

- (id)init;
- (void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_authorizationPluginForAccountType:(id)arg1;

@end
