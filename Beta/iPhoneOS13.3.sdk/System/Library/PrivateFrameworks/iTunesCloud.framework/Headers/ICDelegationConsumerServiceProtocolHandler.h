/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ICDelegationConsumerServiceProtocolHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}

- (id)init;
- (void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
