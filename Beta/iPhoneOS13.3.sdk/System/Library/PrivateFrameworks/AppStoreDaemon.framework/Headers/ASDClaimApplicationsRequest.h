/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDBaseClient.h>

@class ASDClaimApplicationsRequestOptions, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDClaimApplicationsRequest : ASDBaseClient

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDClaimApplicationsRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOptions:(id)arg1;
- (void)_setupConnection;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
