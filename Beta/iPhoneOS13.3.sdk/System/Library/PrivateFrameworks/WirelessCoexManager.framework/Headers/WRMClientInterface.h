/*
 Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface WRMClientInterface : NSObject

{
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mNotificationBlock;
}

- (id)init;
- (void)dealloc;
- (void)unregisterClient;
- (void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(CDUnknownBlockType)arg3;

@end
