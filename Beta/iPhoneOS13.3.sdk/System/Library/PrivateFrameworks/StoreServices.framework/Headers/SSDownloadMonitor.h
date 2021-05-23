/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@protocol OS_dispatch_queue, SSDownloadMonitorDelegate;

@interface SSDownloadMonitor : NSObject

{
    SSXPCConnection *_connection;
    id <SSDownloadMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property id <SSDownloadMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)_copyItemsWithReply:(id)arg1 error:(id *)arg2;
- (void)getMonitorItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pauseMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prioritizeMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resumeMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_reloadForChangeNotification;

@end
