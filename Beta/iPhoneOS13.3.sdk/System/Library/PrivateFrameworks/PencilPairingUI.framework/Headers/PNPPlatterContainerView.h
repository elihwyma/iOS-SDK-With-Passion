/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSDate, PNPPlatterShadowView, UIVisualEffectView;

@interface PNPPlatterContainerView : UIView

{
    UIView *_contentViewContainerView;
    PNPPlatterShadowView *_shadowView;
    UIView *_dimmingView;
    UIVisualEffectView *_effectView;
    _Bool _presented;
    _Bool _dismissUsingAlpha;
    UIView *_contentView;
    CDUnknownBlockType _autoDismissBlock;
    NSDate *_autoDismissDate;
    unsigned long long _edge;
    double _preferredCornerRadius;
    long long _dimmingState;
    double _pencilOffset;
    struct CGAffineTransform _animationTranslation;
}

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) CDUnknownBlockType autoDismissBlock;
@property (retain, nonatomic) NSDate *autoDismissDate;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) double preferredCornerRadius;
@property (nonatomic) _Bool presented;
@property (nonatomic) long long dimmingState;
@property (nonatomic) double pencilOffset;
@property (nonatomic) _Bool dismissUsingAlpha;
@property (nonatomic) struct CGAffineTransform animationTranslation;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)presentedFrameForViewWithSize:(struct CGSize)arg1 edge:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (struct CGRect)dismissedFrameForViewWithSize:(struct CGSize)arg1 edge:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (struct CGAffineTransform)_dismissedTransformForEdge:(unsigned long long)arg1;
- (double)_dismissedAlphaForEdge:(double)arg1;
- (void)_updateShadowForCenteredPlatter:(_Bool)arg1;

@end
