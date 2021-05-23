/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSApplicationUtil : NSObject

{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (id)_connection;
- (void)restartApplication:(CDUnknownBlockType)arg1;

@end
