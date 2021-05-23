/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequestContext.h>

@class NSArray, NSMutableIndexSet, NSProgress, PAImageConversionServiceClient, PHAdjustmentDataRequest, PHContentEditingInputRequestOptions, PHContentEditingInputResult, PHImageRequest, PHImageResourceChooser, PHVideoRequest;

@interface PHContentEditingInputRequestContext : PHMediaRequestContext

{
    _Bool _useRAWAsUnadjustedBase;
    PHAdjustmentDataRequest *_adjustmentRequest;
    PHVideoRequest *_videoRequest;
    unsigned long long _imageBaseRequestIndex;
    PHImageRequest *_displayImageRequest;
    struct os_unfair_lock_s _lock;
    PHContentEditingInputResult *_contentEditingInputResult;
    unsigned long long _inflightMediaRequestCount;
    NSProgress *_adjustmentProgress;
    NSProgress *_videoProgress;
    NSProgress *_imageProgress;
    PHImageResourceChooser *_backupChooser;
    NSArray *_assetResources;
    NSMutableIndexSet *_requestIndexesOfAssetResourceRequests;
    PAImageConversionServiceClient *_imageConversionClient;
    PHContentEditingInputRequestOptions *_options;
}

@property (nonatomic, readonly) PHContentEditingInputRequestOptions *options;

+ (long long)type;

- (void)cancel;
- (CDUnknownBlockType)progressHandler;
- (_Bool)isNetworkAccessAllowed;
- (id)initialRequests;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;
- (id)progresses;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)_assetResources;
- (_Bool)_shouldRequestVideo;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (_Bool)_shouldRequestImage;
- (id)_lazyAdjustmentProgress;
- (id)_videoBehaviorSpecForBaseVersion:(long long)arg1;
- (id)_imageBehaviorSpecForBaseVersion:(long long)arg1;
- (long long)_adjustmentBaseVersionFromResult:(id)arg1 request:(id)arg2 canHandleAdjustmentData:(_Bool *)arg3;
- (void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(_Bool)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_baseMediaRequestsForBaseVersion:(long long)arg1 error:(id *)arg2;
- (void)_prepareAndAddMediaRequestsToChildRequests:(id)arg1;
- (_Bool)_canRenderMediaForResult:(id)arg1;
- (long long)_assetResourceTypeForImageWithBaseVersion:(long long)arg1;
- (id)_assetResourceForType:(long long)arg1;
- (id)_largestUnadjustedDerivativeImageResource;
- (_Bool)_hasAnyPenultimateResource;
- (id)_resourceRequestForAssetResource:(id)arg1 wantsURLOnly:(_Bool)arg2 progress:(id)arg3;
- (void)_prepareAndAddFlippingRenderURLRequestsToChildRequestsIfNeeded:(id)arg1 forBaseVersion:(long long)arg2;
- (void)_setVideoResourceURLsForFlippingRendersIfNeeded;
- (void)_finishIfAllCompleteWithRequest:(id)arg1;
- (id)_errorFromAssetMediaResult:(id)arg1;

@end
