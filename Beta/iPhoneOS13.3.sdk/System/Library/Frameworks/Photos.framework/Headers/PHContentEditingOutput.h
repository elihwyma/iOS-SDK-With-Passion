/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSURL, PHAdjustmentData;

@interface PHContentEditingOutput : NSObject

{
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
    _Bool _isSubstandardRender;
    _Bool _loopingLivePhoto;
    _Bool _isAsyncAdjustment;
    _Bool _isSwappingFullSizeRenderWithAlternateRender;
    NSURL *_renderedContentURL;
    NSNumber *_originalResourceChoice;
    long long _fullSizeRenderWidth;
    long long _fullSizeRenderHeight;
    NSData *_penultimateRenderedJPEGData;
    NSURL *_penultimateRenderedVideoContentURL;
    NSURL *_renderedVideoPosterURL;
    NSURL *_renderedVideoComplementContentURL;
    NSURL *_penultimateRenderedVideoComplementContentURL;
    NSURL *_editorBundleURL;
    long long _mediaType;
    NSURL *_renderedPreviewContentURL;
    NSNumber *_playbackVariation;
    NSNumber *_videoDuration;
    NSNumber *_reframeVariation;
}

@property long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (nonatomic) _Bool isSubstandardRender;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) long long fullSizeRenderHeight;
@property (copy) NSURL *renderedContentURL;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoContentURL;
@property (copy) NSURL *renderedVideoPosterURL;
@property (copy) NSURL *renderedVideoComplementContentURL;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain) NSURL *editorBundleURL;
@property (readonly) long long mediaType;
@property (readonly, getter=isLoopingLivePhoto) _Bool loopingLivePhoto;
@property (retain, nonatomic) NSURL *renderedPreviewContentURL;
@property (nonatomic) _Bool isAsyncAdjustment;
@property (retain, nonatomic) NSNumber *playbackVariation;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (nonatomic) _Bool isSwappingFullSizeRenderWithAlternateRender;
@property (retain, nonatomic) NSNumber *reframeVariation;
@property (retain) PHAdjustmentData *adjustmentData;

+ (_Bool)supportsSecureCoding;
+ (id)renderURLWithExtensionForMediaType:(long long)arg1;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1 withOptions:(id)arg2;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2;
- (id)renderURLWithExtensionForMediaType:(long long)arg1;
- (void)clearRenderedContentURL;
- (void)setRenderedJPEGData:(id)arg1;
- (id)assetAdjustmentsWithEditorBundleID:(id)arg1;
- (_Bool)isOnlyChangingOriginalChoice;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg1 options:(id)arg2;

@end
