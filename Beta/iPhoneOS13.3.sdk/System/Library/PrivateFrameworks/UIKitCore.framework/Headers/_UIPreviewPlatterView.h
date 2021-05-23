/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITargetedPreview, UIViewFloatAnimatableProperty, _UIPlatterSoftShadowView, _UIPlatterTransformView, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterView : UIView

{
    _Bool _expanded;
    _Bool _hideShadowWhenCollapsed;
    _Bool _hideChromeWhenCollapsed;
    _Bool _alwaysCompact;
    _Bool _preventPreviewRasterization;
    _Bool _shouldMorphContents;
    _Bool _frozen;
    _Bool _contentSizeDidChange;
    int _preferredMorphingAxis;
    UITargetedPreview *_collapsedPreview;
    UITargetedPreview *_expandedPreview;
    UIView *_collapsedClippingView;
    _UIPlatterTransformView *_collapsedTransformView;
    UIView *_expandedClippingView;
    _UIPlatterTransformView *_expandedTransformView;
    _UIPlatterSoftShadowView *_pathShadowView;
    _UIRoundedRectShadowView *_rectangularShadowView;
    UIViewFloatAnimatableProperty *_expansionProgress;
    UIViewFloatAnimatableProperty *_platterWidth;
    UIViewFloatAnimatableProperty *_platterHeight;
    UIViewFloatAnimatableProperty *_collapsedContentWidth;
    UIViewFloatAnimatableProperty *_collapsedContentHeight;
    UIViewFloatAnimatableProperty *_expandedContentWidth;
    UIViewFloatAnimatableProperty *_expandedContentHeight;
}

@property (retain, nonatomic) UIView *collapsedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *collapsedTransformView;
@property (retain, nonatomic) UIView *expandedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *expandedTransformView;
@property (retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView;
@property (retain, nonatomic) _UIRoundedRectShadowView *rectangularShadowView;
@property (nonatomic, getter=isFrozen) _Bool frozen;
@property (nonatomic) _Bool contentSizeDidChange;
@property (nonatomic) int preferredMorphingAxis;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expansionProgress;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *platterWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *platterHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentHeight;
@property (retain, nonatomic) UITargetedPreview *collapsedPreview;
@property (retain, nonatomic) UITargetedPreview *expandedPreview;
@property (nonatomic, readonly) _Bool bothViewsAreLikelyOpaque;
@property (nonatomic) _Bool expanded;
@property (nonatomic) _Bool hideShadowWhenCollapsed;
@property (nonatomic) _Bool hideChromeWhenCollapsed;
@property (nonatomic) _Bool alwaysCompact;
@property (nonatomic) _Bool allowsUserInteractionInExpandedPreview;
@property (nonatomic) _Bool preventPreviewRasterization;
@property (nonatomic) _Bool shouldMorphContents;

- (void)updateContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)freezeExpandedPreview;
- (void)_prepareAnimatableProperties;
- (void)_updatePathShadowTransform;
- (void)_updateClippingViews;
- (void)_modelUpdates;
- (void)_updateCollapsedChrome;
- (double)_rectangularShadowAlphaForExpansionProgress:(double)arg1;
- (double)_pathShadowAlphaForExpansionProgress:(double)arg1;
- (_Bool)_previewIsLikelyOpaque:(id)arg1;
- (void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3;
- (void)_updatePathShadow;
- (_Bool)_previewPrefersApplyingMask:(id)arg1;
- (id)_overrideTraitCollectionForView:(id)arg1 combinedWithTraits:(id)arg2;
- (void)didTearOffForDrag;

@end
