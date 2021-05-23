/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, PUPhotosGridViewControllerSpec, PUPhotosPickerViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerSpec : NSObject

{
    unsigned short _squareThumbnailFastImageFormat;
    unsigned short _squareThumbnailQualityImageFormat;
    unsigned short _smallTileFastImageFormat;
    unsigned short _smallTileQualityImageFormat;
    unsigned short _smallTilePanoQualityImageFormat;
    unsigned short _mediumTileFastImageFormat;
    unsigned short _mediumTileQualityImageFormat;
    unsigned short _largeTileFastImageFormat;
    unsigned short _largeTileQualityImageFormat;
    unsigned short _veryLargeTileFastImageFormat;
    unsigned short _veryLargeTileQualityImageFormat;
    struct CGSize _squareThumbnailMaximumSize;
    struct CGSize _smallTileMaximumFittingSize;
    double _smallTilePanoAspectRatio;
    struct CGSize _mediumTileMaximumFillingSize;
    struct CGSize _largeTileMaximumFillingSize;
    _Bool _shouldUseAspectThumbnails;
    _Bool _shouldHideBarsInLandscape;
    _Bool _shouldShowInvitationsInPopover;
    _Bool _shouldUseFullscreenLayout;
    NSIndexSet *_qualityImageFormats;
    long long _largeNumberOfSubjectsForLikes;
    PUFeedViewControllerSpec *_popoverFeedViewControllerSpec;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerSpec;
    long long _promptStyle;
    double _collectionViewContentInset;
    double _standardSideMargins;
    struct CGSize _minimumVideoTileSize;
    struct CGSize _thumbnailSize;
}

@property (copy, nonatomic, setter=_setQualityImageFormats:) NSIndexSet *qualityImageFormats;
@property (nonatomic, readonly) struct CGSize minimumVideoTileSize;
@property (nonatomic, readonly) long long largeNumberOfSubjectsForLikes;
@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic, readonly) _Bool shouldUseAspectThumbnails;
@property (nonatomic, readonly) _Bool shouldHideBarsInLandscape;
@property (nonatomic, readonly) _Bool shouldShowInvitationsInPopover;
@property (nonatomic, readonly) PUFeedViewControllerSpec *popoverFeedViewControllerSpec;
@property (nonatomic, readonly) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerSpec;
@property (nonatomic, readonly) long long promptStyle;
@property (nonatomic, readonly) _Bool shouldUseFullscreenLayout;
@property (nonatomic, readonly) double collectionViewContentInset;
@property (nonatomic, readonly) double standardSideMargins;

- (id)init;
- (_Bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;
- (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg1;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (_Bool)canUseSimplePreheatManager;
- (struct UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)updateFormats;
- (void)getFastImageFormat:(out unsigned short *)arg1 qualityImageFormat:(out unsigned short *)arg2 forSourceSize:(struct CGSize)arg3 destinationSize:(struct CGSize)arg4 allowCrop:(_Bool)arg5;
- (void)setLayoutReferenceWidth:(double)arg1;
- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (double)textSpacingBetweenText:(id)arg1 detailText:(id)arg2;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2 date:(id)arg3;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2 date:(id)arg3;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2 date:(id)arg3;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (id)defaultSubTitleTextAttributesForCollectionViewType:(long long)arg1;
- (void)configureGradientCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;

@end
