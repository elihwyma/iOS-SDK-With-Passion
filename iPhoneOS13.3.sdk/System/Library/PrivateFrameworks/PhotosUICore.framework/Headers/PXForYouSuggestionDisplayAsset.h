//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoKitAdjustedDisplayAsset-Protocol.h>

@class NSDate, NSString, PHAsset;
@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset>
{
    BOOL _shouldInvert;
    PHAsset *_photoKitAsset;
    NSString *_adjustedContentIdentifier;
    id <PXDisplaySuggestion> _suggestion;
    id <PXDisplayAsset> _keyAsset;
}

@property(readonly, nonatomic) BOOL shouldInvert; // @synthesize shouldInvert=_shouldInvert;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) id <PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) NSString *adjustedContentIdentifier; // @synthesize adjustedContentIdentifier=_adjustedContentIdentifier;
@property(readonly, nonatomic) PHAsset *photoKitAsset; // @synthesize photoKitAsset=_photoKitAsset;
// - (void).cxx_destruct;
- (id)_computedPortraitEffectSettingsForCompositionController:(id)arg1;
- (id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
@property(readonly, nonatomic) BOOL wantsAdjustments;
@property(readonly, nonatomic) BOOL isAnimatedImage;
@property(readonly, nonatomic) BOOL canPlayPhotoIris;
@property(readonly, nonatomic) BOOL canPlayLoopingVideo;
- (CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
- (BOOL)isEqualToSuggestionDisplayAsset:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) NSUInteger thumbnailIndex;
@property(readonly, nonatomic) NSUInteger pixelHeight;
@property(readonly, nonatomic) NSUInteger pixelWidth;
@property(readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property(readonly, nonatomic) BOOL isInCloud;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) BOOL isApplied;
- (id)inverseSuggestionAsset;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(BOOL)arg3;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2;

@end

