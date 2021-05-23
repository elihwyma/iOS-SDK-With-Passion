/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class ICMediaRedownloadRequest, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject;

@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICMediaRedownloadRequest *_mediaDownloadRequest;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id)init;
- (void)cancel;
- (void)execute;

@end
