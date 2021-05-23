/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSVDirectUploadQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    int _daemonLaunchToken;
    SSXPCConnection *_inboundConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    SSXPCConnection *_outboundConnection;
    NSArray *_uploadKinds;
    NSMutableArray *_uploads;
}

@property (copy, readonly) NSArray *uploadKinds;

- (id)init;
- (void)dealloc;
- (id)initWithUploadKinds:(id)arg1;
- (void)_establishInboundConnection;
- (void)_sendSimpleMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_outboundConnection;
- (void)_handleInboundMessage:(id)arg1 connection:(id)arg2;
- (void)_sendObserversUploadsDidChange;
- (void)_handleAddUploadsMessage:(id)arg1;
- (void)_handleChangeUploadsMessage:(id)arg1;
- (void)_handleRemoveUploadsMessage:(id)arg1;
- (void)addUploadObserver:(id)arg1;
- (void)cancelAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pauseAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pauseUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeUploadObserver:(id)arg1;
- (void)resumeAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resumeUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
