/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCompositeMediaResult.h>

@class NSMutableDictionary, NSNumber, NSURL, PHAdjustmentData, PHImageResult;

@interface PHContentEditingInputResult : PHCompositeMediaResult

{
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
    _Bool _canHandleAdjustmentData;
    NSNumber *_baseVersionNeeded;
    NSURL *_overCapturePhotoURL;
    NSURL *_overCaptureVideoURL;
    NSURL *_frontSwappingImageRenderURL;
    NSURL *_backSwappingImageRenderURL;
    NSURL *_frontSwappingVideoRenderURL;
    NSURL *_backSwappingVideoRenderURL;
    PHAdjustmentData *_originalAdjustmentData;
}

@property (nonatomic) _Bool canHandleAdjustmentData;
@property (retain, nonatomic) NSNumber *baseVersionNeeded;
@property (retain, nonatomic) NSURL *overCapturePhotoURL;
@property (retain, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;

- (id)description;
- (id)error;
- (_Bool)isCancelled;
- (void)setError:(id)arg1;
- (void)setCancelled:(_Bool)arg1;
- (struct CGImage *)imageRef;
- (id)exifOrientation;
- (id)imageURL;
- (id)imageData;
- (id)adjustmentData;
- (id)videoURL;
- (_Bool)containsValidData;
- (id)imageUTI;
- (id)videoAdjustmentData;
- (id)imagePropertiesLoadIfNeeded:(_Bool)arg1;
- (void)setIsInCloud:(_Bool)arg1;
- (_Bool)isInCloud;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;
- (void)mergeInfoDictionaryFromResult:(id)arg1;
- (void)addAdjustmentDataResult:(id)arg1;
- (void)clearAdjustmentData;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2;

@end
