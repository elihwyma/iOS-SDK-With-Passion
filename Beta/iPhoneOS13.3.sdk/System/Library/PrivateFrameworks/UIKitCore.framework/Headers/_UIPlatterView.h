/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSValue, _DUIPreview, _UIPlatterSoftShadowView, _UIPortalView, _UIShapeView;

@interface _UIPlatterView : UIView

{
    _Bool _constrainSize;
    _Bool _lifted;
    _Bool _backgroundVisible;
    _Bool _shadowVisible;
    _Bool _appliesOriginalRotation;
    _Bool _constrainSizeWhenNotLifted;
    _Bool _transformAppliedExternally;
    _Bool _flipped;
    _Bool _precisionMode;
    _DUIPreview *_preview;
    double _orientationRotation;
    double _rotation;
    UIView *_componentView;
    double _stackRotation;
    NSValue *_anchorPointValueToAdjustToOnMoveToWindow;
    UIView *_backgroundView;
    _UIShapeView *_platterMaskView;
    _UIShapeView *_portalMaskView;
    _UIPortalView *_portalView;
    UIView *_portalWrapperView;
    _UIPlatterSoftShadowView *_shadowView;
    struct CGPoint _offset;
    struct CGSize _overrideSize;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _additionalTransform;
    struct CGAffineTransform _containerCounterScaleTransform;
    struct CGAffineTransform _containerCounterRotationTransform;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) _UIShapeView *platterMaskView;
@property (nonatomic, readonly) _UIShapeView *portalMaskView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (nonatomic, readonly) UIView *portalWrapperView;
@property (nonatomic, readonly) _UIPlatterSoftShadowView *shadowView;
@property (nonatomic) struct CGAffineTransform containerCounterScaleTransform;
@property (nonatomic) struct CGAffineTransform containerCounterRotationTransform;
@property (copy, nonatomic, readonly) _DUIPreview *preview;
@property (nonatomic, readonly) struct CGPoint badgeLocation;
@property (nonatomic) _Bool constrainSize;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) struct CGPoint contentOffset;
@property (nonatomic, getter=isLifted) _Bool lifted;
@property (nonatomic, getter=isBackgroundVisible) _Bool backgroundVisible;
@property (nonatomic, getter=isShadowVisible) _Bool shadowVisible;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) double orientationRotation;
@property (nonatomic) struct CGSize overrideSize;
@property (nonatomic) _Bool appliesOriginalRotation;
@property (nonatomic) double rotation;
@property (weak, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *componentView;
@property (nonatomic) double stackRotation;
@property (retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow;
@property (nonatomic) _Bool constrainSizeWhenNotLifted;
@property (nonatomic) struct CGAffineTransform additionalTransform;
@property (nonatomic, readonly) struct CATransform3D targetTransform;
@property (nonatomic) _Bool transformAppliedExternally;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, getter=isFlipped) _Bool flipped;
@property (nonatomic) _Bool precisionMode;

- (double)scaleFactor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithDUIPreview:(id)arg1;
- (void)takeCounterTransformsToAddToContainer:(id)arg1;
- (void)updateTransform;
- (struct CATransform3D)scaleTransform;
- (id)initWithDUIPreview:(id)arg1 imageComponent:(id)arg2;
- (id)initWithPreview:(id)arg1;
- (id)initWithDroppedItem:(id)arg1;
- (void)setComponentViews:(id)arg1;
- (void)_unmaskPlatterView;

@end
