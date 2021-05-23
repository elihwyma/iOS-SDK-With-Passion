/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDBaseClient.h>

@class ASDCheckQueueRequestOptions, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDCheckQueueRequest : ASDBaseClient

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDCheckQueueRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOptions:(id)arg1;
- (void)_setupConnection;
- (void)_makeAutomaticQueueRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_makeRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkAutomaticCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkPendingCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendRequestCompletionBlock:(CDUnknownBlockType)arg1;

@end
