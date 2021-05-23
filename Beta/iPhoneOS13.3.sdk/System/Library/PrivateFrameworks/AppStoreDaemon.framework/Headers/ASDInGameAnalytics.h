/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDInGameAnalytics : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)interface;
+ (id)_sharedInstance;
+ (void)sendHeartbeatForSessionWithID:(id)arg1;
+ (void)gamePlayDidBeginWithCompletion:(CDUnknownBlockType)arg1;
+ (void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2;

- (id)init;
- (void)_connect;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
