/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection;

@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)new;
+ (id)serviceName;
+ (id)serviceWithEndpoint:(id)arg1;
+ (id)serviceWithDefaultShellEndpoint;

- (id)init;
- (void)dealloc;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;
- (id)_initWithEndpoint:(id)arg1;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteTarget;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
