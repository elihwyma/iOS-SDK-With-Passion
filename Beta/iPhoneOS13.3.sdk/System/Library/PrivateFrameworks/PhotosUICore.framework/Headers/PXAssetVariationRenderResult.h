/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVVideoComposition, NSDictionary, NSError, NSURL, PICompositionController, UIImage;

@interface PXAssetVariationRenderResult : NSObject

{
    _Bool _success;
    _Bool _fullsizeRender;
    long long _variationType;
    NSDictionary *_analysisResult;
    PICompositionController *_compositionController;
    NSError *_error;
    NSURL *_imageURL;
    UIImage *_image;
    NSURL *_videoURL;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic, getter=isFullsizeRender) _Bool fullsizeRender;
@property (nonatomic, readonly) long long variationType;
@property (copy, nonatomic, readonly) NSDictionary *analysisResult;
@property (nonatomic, readonly) _Bool success;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSURL *videoURL;

- (id)init;
- (id)description;
- (id)initWithVariationType:(long long)arg1 imageURL:(id)arg2 videoURL:(id)arg3 analysisResult:(id)arg4 compositionController:(id)arg5 success:(_Bool)arg6 error:(id)arg7;

@end
