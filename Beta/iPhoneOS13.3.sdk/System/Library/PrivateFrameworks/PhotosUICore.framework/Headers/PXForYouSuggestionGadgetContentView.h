/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSError, NSString, PXDisplayAssetUIView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUIAssetBadgeView, PXUIMediaProvider, UIImage, UILabel;

@protocol PXDisplayAsset, PXDisplaySuggestion;

@interface PXForYouSuggestionGadgetContentView : UIView

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _forceAssetContentReload;
    _Bool _assetContentHidden;
    _Bool _blursDegradedContent;
    id <PXDisplaySuggestion> _suggestion;
    id <PXDisplayAsset> _keyAsset;
    NSString *_title;
    NSString *_subtitle;
    PXUIMediaProvider *_mediaProvider;
    PXGadgetSpec *_gadgetSpec;
    long long _mode;
    PXDisplayAssetUIView *_assetView;
    PXUIAssetBadgeView *_badgeView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXRoundedCornerOverlayView *_roundedOverlayView;
    NSString *_caption;
    unsigned long long _badgeTypes;
}

@property (retain, nonatomic) PXDisplayAssetUIView *assetView;
@property (retain, nonatomic) PXUIAssetBadgeView *badgeView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) unsigned long long badgeTypes;
@property (retain, nonatomic) id <PXDisplaySuggestion> suggestion;
@property (retain, nonatomic) id <PXDisplayAsset> keyAsset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) struct CGRect assetContentsRect;
@property (nonatomic, readonly) UIImage *currentAssetImage;
@property (nonatomic) _Bool assetContentHidden;
@property (nonatomic) long long mode;
@property (nonatomic) _Bool blursDegradedContent;
@property (nonatomic, readonly) _Bool isDisplayingFullQualityContent;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct UIFont *)titleLabelFont;
+ (id)_gaussianBlurFilter;
+ (void)preloadResources;
+ (id)darkPlaceholderFilters;
+ (id)lightPlaceholderFilters;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withSuggestion:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
+ (double)scaledSuggestionBaselineDistance;
+ (double)scaledTitleBaselineDistance;
+ (double)scaledTitleWithSuggestionBaselineDistance;
+ (double)scaledSubtitleBaselineDistance;
+ (struct UIFont *)suggestionLabelFont;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateTitleFont;
- (void)_updateRoundedCornerOverlayView;
- (struct CGRect)_assetFrameInBounds:(struct CGRect)arg1;
- (struct CGSize)_calculateLayoutWithInputSize:(struct CGSize)arg1 apply:(_Bool)arg2;
- (struct CGRect)assetContentBoundsInCoordinateSpace:(id)arg1;
- (void)_updateBadgeViews;
- (void)_updateAssetView;
- (void)_updateAssetViewAnimatedContentEnabled;
- (id)previewAssetView;
- (void)_updateAssetViewPlaceholderFilters;
- (void)_updateBadgeContents;
- (void)_handleChangedAsset:(id)arg1;

@end
