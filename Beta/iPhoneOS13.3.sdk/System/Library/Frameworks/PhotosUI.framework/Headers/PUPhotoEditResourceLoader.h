/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PUEditableMediaProvider, PUPhotoEditResourceLoadRequest;

@protocol PUEditableAsset;

@interface PUPhotoEditResourceLoader : NSObject

{
    id <PUEditableAsset> _asset;
    PUEditableMediaProvider *_mediaProvider;
    long long _resourcesAvailability;
    PUPhotoEditResourceLoadRequest *_currentRequest;
    NSMutableArray *__enqueuedRequests;
    unsigned long long __contentEditingRequestID;
}

@property (nonatomic, setter=_setResourcesAvailability:) long long resourcesAvailability;
@property (retain, nonatomic) PUPhotoEditResourceLoadRequest *currentRequest;
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests;
@property (nonatomic, setter=_setContentEditingRequestID:) unsigned long long _contentEditingRequestID;
@property (nonatomic, readonly) id <PUEditableAsset> asset;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (nonatomic, readonly, getter=areResourcesAvailable) _Bool resourcesAvailable;
@property (nonatomic, readonly, getter=isDownloadingResources) _Bool downloadingResources;
@property (nonatomic, readonly, getter=isCheckingForResourceAvailability) _Bool checkingAvailability;

+ (id)compositionFromPHAdjustmentData:(id)arg1 error:(id *)arg2;

- (void)enqueueRequest:(id)arg1;
- (void)cancelAllRequests;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)_initiateRequest:(id)arg1;
- (long long)workImageVersionForContentEditingInput:(id)arg1;
- (void)_processLoadedContentEditingInput:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)_processContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (_Bool)_adjustmentDataIsSupported:(id)arg1;
- (void)_requestContentEditingInputForRequest:(id)arg1 networkAccessAllowed:(_Bool)arg2;
- (void)_handleSuccess:(_Bool)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)arg1;

@end
