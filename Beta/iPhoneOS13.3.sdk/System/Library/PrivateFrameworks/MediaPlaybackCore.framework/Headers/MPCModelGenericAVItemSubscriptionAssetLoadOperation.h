/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class ICMusicSubscriptionLeaseSession, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject;

@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _cancellationHandler;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    long long _operationType;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) long long operationType;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (retain, nonatomic) ICMusicSubscriptionLeaseSession *subscriptionLeaseSession;

- (id)init;
- (void)cancel;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)cancellationHandler;
- (void)execute;
- (id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id *)arg3;

@end
