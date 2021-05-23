/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PHAsset;

@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionDisplayAsset : NSObject

{
    _Bool _shouldInvert;
    PHAsset *_photoKitAsset;
    NSString *_adjustedContentIdentifier;
    id <PXDisplaySuggestion> _suggestion;
    id <PXDisplayAsset> _keyAsset;
}

@property (nonatomic, readonly) _Bool shouldInvert;
@property (nonatomic, readonly) id <PXDisplaySuggestion> suggestion;
@property (nonatomic, readonly) id <PXDisplayAsset> keyAsset;
@property (nonatomic, readonly) _Bool isAnimatedImage;
@property (nonatomic, readonly) _Bool canPlayPhotoIris;
@property (nonatomic, readonly) _Bool canPlayLoopingVideo;
@property (nonatomic, readonly) _Bool isApplied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) _Bool isInCloud;
@property (nonatomic, readonly) _Bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) _Bool wantsAdjustments;
@property (nonatomic, readonly) NSString *adjustedContentIdentifier;
@property (nonatomic, readonly) PHAsset *photoKitAsset;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (long long)isContentEqualTo:(id)arg1;
- (id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(_Bool)arg3;
- (id)inverseSuggestionAsset;
- (_Bool)isEqualToSuggestionDisplayAsset:(id)arg1;
- (id)_computedPortraitEffectSettingsForCompositionController:(id)arg1;

@end
