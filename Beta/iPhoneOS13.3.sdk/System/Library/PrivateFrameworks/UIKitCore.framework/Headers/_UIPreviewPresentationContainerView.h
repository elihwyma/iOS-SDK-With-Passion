/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView

{
    _Bool _shouldLayoutForCommitPhase;
    UIView *_contentView;
    double _cornerRadius;
    _UIPreviewPresentationEffectView *_platterClippingView;
    UIView *_platterShadowView;
    UIView *_contentTransformView;
    _UIPreviewPresentationEffectView *_platterView;
    struct CGSize _preferredContentSize;
}

@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView;
@property (retain, nonatomic) UIView *platterShadowView;
@property (retain, nonatomic) UIView *contentTransformView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize preferredContentSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool shouldRasterizeForTransition;
@property (nonatomic) _Bool shouldLayoutForCommitPhase;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)initPlatterViewsIfNeeded;
- (struct CGSize)_standardPreferredContentSize;
- (struct CGRect)_preferredPlatterRectForContainerRect:(struct CGRect)arg1;

@end
