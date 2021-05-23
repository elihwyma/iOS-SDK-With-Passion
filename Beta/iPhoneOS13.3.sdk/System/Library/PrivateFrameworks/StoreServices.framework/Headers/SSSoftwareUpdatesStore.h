/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSSoftwareUpdatesStore : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    SSXPCConnection *_connection;
    _Bool _didMigration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_mobileCoreServices;
    _Bool _useLocalRead;
    _Bool _useLocalWrite;
}

- (id)init;
- (void)dealloc;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;

@end
