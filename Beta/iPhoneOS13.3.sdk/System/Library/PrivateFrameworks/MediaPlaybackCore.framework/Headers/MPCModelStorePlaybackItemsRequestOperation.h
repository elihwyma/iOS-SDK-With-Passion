/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelStorePlaybackItemsRequest, NSObject, NSOperationQueue, NSProgress;

@protocol OS_dispatch_queue;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation

{
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_activeProgressQueue;
    MPCModelStorePlaybackItemsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) MPCModelStorePlaybackItemsRequest *request;
@property (copy, nonatomic, readonly) CDUnknownBlockType responseHandler;

- (void)cancel;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_executeWithUserIdentity:(id)arg1;
- (void)_validateUserIdentityForRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
