/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@class AVAsset, AVVideoComposition, NSDictionary, NSError, NSNumber, NSProgress, NSURL, PICompositionController, PLLivePhotoEditSource, UIImage;

@interface PXAssetVariationRenderingOperation : NSOperation

{
    _Bool _renderAllResources;
    _Bool _succeeded;
    long long _variationType;
    PLLivePhotoEditSource *_editSource;
    PLLivePhotoEditSource *_overcaptureEditSource;
    NSDictionary *_analysisResult;
    PICompositionController *_baseCompositionController;
    CDUnknownBlockType _startHandler;
    NSURL *_outputImageURL;
    UIImage *_outputImage;
    NSURL *_outputVideoURL;
    PICompositionController *_adjustedCompositionController;
    AVAsset *_outputAVAsset;
    AVVideoComposition *_outputVideoComposition;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) long long variationType;
@property (nonatomic, readonly) PLLivePhotoEditSource *editSource;
@property (nonatomic, readonly) PLLivePhotoEditSource *overcaptureEditSource;
@property (copy, nonatomic, readonly) NSDictionary *analysisResult;
@property (copy, nonatomic, readonly) PICompositionController *baseCompositionController;
@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) _Bool renderAllResources;
@property (copy, nonatomic) CDUnknownBlockType startHandler;
@property (nonatomic, readonly) NSURL *outputImageURL;
@property (nonatomic, readonly) UIImage *outputImage;
@property (nonatomic, readonly) NSURL *outputVideoURL;
@property (copy, nonatomic, readonly) PICompositionController *adjustedCompositionController;
@property (nonatomic, readonly) AVAsset *outputAVAsset;
@property (nonatomic, readonly) AVVideoComposition *outputVideoComposition;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) _Bool succeeded;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSNumber *duration;

- (id)init;
- (void)cancel;
- (void)main;
- (void)_timeout;
- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 variationType:(long long)arg3 analysisResult:(id)arg4 baseCompositionController:(id)arg5 outputImageURL:(id)arg6 outputVideoURL:(id)arg7 targetSize:(struct CGSize)arg8 renderAllResources:(_Bool)arg9;
- (void)_incrementProgressWithStartDate:(id)arg1;

@end
