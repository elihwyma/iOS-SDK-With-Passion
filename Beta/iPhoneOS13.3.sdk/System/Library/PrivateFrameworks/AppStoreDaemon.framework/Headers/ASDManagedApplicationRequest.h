/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDBaseClient.h>

@class ASDManagedApplicationRequestOptions, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDManagedApplicationRequest : ASDBaseClient

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDManagedApplicationRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOptions:(id)arg1;
- (void)_setupConnection;
- (void)sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_sendRequestCompletionWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
