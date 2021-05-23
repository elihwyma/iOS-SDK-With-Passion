/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSError, NSProgress, NSString, PXAssetEditOperationManager, PXAssetVariationOption, PXAssetVariationRenderProvider, PXAssetVariationRenderResult, PXLoadingFailureBadgeView, PXRoundProgressView, PXWidgetSpec, UIColor, UIImage, UILabel, UIView;

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool titleLabel;
        _Bool variationView;
        _Bool progressView;
        _Bool selectedView;
        _Bool error;
        _Bool failureView;
        _Bool renderProgress;
    } _needsUpdateFlags;
    UILabel *_titleLabel;
    UIView *_backgroundView;
    UIView *_variationView;
    UIView *_selectedDecorationView;
    PXLoadingFailureBadgeView *_failureView;
    PXRoundProgressView *_loadingProgressView;
    _Bool _playbackAllowed;
    PXAssetVariationRenderProvider *_renderProvider;
    PXAssetVariationRenderResult *_renderResult;
    PXAssetVariationOption *_variationOption;
    PXAssetEditOperationManager *_editOperationManager;
    PXWidgetSpec *_spec;
    NSError *_error;
    UIImage *_placeholderImage;
    UIColor *_titleColor;
    UIColor *_selectedTitleColor;
    double _placeholderOverlayAlpha;
    long long _assetVariationContentMode;
    NSProgress *__renderProgress;
}

@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setRenderProgress:) NSProgress *_renderProgress;
@property (nonatomic, readonly) PXAssetVariationRenderProvider *renderProvider;
@property (nonatomic, readonly) PXAssetVariationRenderResult *renderResult;
@property (nonatomic, readonly) PXAssetVariationOption *variationOption;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (nonatomic, readonly) PXWidgetSpec *spec;
@property (nonatomic, readonly, getter=isPlaybackAllowed) _Bool playbackAllowed;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIColor *selectedTitleColor;
@property (nonatomic, readonly) double placeholderOverlayAlpha;
@property (nonatomic, readonly) long long assetVariationContentMode;
@property (nonatomic, readonly) double distanceBetweenLastBaselineAndBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)preloadResources;
+ (id)placeholderFiltersWithOverlayWhite:(double)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setTitleColor:(id)arg1;
- (_Bool)_needsUpdate;
- (void)setSpec:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)updateError;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;
- (void)setRenderResult:(id)arg1;
- (void)setRenderProvider:(id)arg1;
- (void)setVariationOption:(id)arg1;
- (void)setEditOperationManager:(id)arg1;
- (void)setAssetVariationContentMode:(long long)arg1;
- (void)setSelectedTitleColor:(id)arg1;
- (void)setPlaybackAllowed:(_Bool)arg1;
- (void)setPlaceholderOverlayAlpha:(double)arg1;
- (void)_PXAssetVariationCollectionViewCellCommonInit;
- (id)loadVariationView;
- (void)updateVariationView;
- (struct CGSize)sizeThatFitsPreviewSize:(struct CGSize)arg1;
- (double)distanceBetweenPreviewBottomAndLastBaseline;
- (void)_invalidateRenderProgress;
- (void)_updateRenderProgressIfNeeded;
- (void)_invalidateError;
- (void)_updateErrorIfNeeded;
- (void)_invalidateSelectedView;
- (void)_updateSelectedViewIfNeeded;
- (void)_invalidateTitleLabel;
- (void)_updateTitleLabelIfNeeded;
- (void)_invalidateVariationView;
- (void)_updateVariationViewIfNeeded;
- (void)_invalidateProgressView;
- (void)_updateProgressViewIfNeeded;
- (void)_invalidateFailureView;
- (void)_updateFailureViewIfNeeded;

@end
