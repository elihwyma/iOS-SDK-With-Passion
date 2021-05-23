/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, NSArray, NSString, SBApplicationBlurContentView, SBFView, SBIcon, SBIconView, SBPortalView;

@interface SBAppPlatterDragPreview : UIView <Swift>

{
    _Bool _isBlurredPlatterReady;
    _Bool _hasAnimatedToBlurredPlatter;
    unsigned long long _platterViewAlphaAnimationCount;
    _Bool _flocked;
    _Bool _iconAllowsLabelArea;
    _Bool _iconCanShowCloseBox;
    _Bool _iconIsHighlighted;
    unsigned long long _dragState;
    double _iconContentScale;
    unsigned long long _mode;
    CDUnknownBlockType _cleanUpHandler;
    UIView *_sourceView;
    SBApplicationBlurContentView *_platterView;
    CDUnknownBlockType _platterViewAlphaAnimationCompletionBlock;
    double _platterScale;
    NSArray *_diffuseShadowFilters;
    NSArray *_rimShadowFilters;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    double _rotation;
    SBIconView *_iconView;
    UIView *_anchorPointAdjustmentContainerView;
    UIView *_iconContainerView;
    UIView *_cornerMaskingView;
    SBPortalView *_sourcePortalView;
    UIView *_unclippedSourceContainerView;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
    struct CGSize _platterSize;
    struct CGPoint _anchorPoint;
    struct SBDragPreviewShadowParameters _diffuseShadowParameters;
    struct SBDragPreviewShadowParameters _rimShadowParameters;
}

@property (retain, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) _Bool iconCanShowCloseBox;
@property (nonatomic) _Bool iconIsHighlighted;
@property (retain, nonatomic) UIView *anchorPointAdjustmentContainerView;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIView *cornerMaskingView;
@property (retain, nonatomic) SBPortalView *sourcePortalView;
@property (retain, nonatomic) UIView *unclippedSourceContainerView;
@property (retain, nonatomic) SBApplicationBlurContentView *platterView;
@property (retain, nonatomic) SBFView *diffuseShadowView;
@property (retain, nonatomic) SBFView *rimShadowView;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) CDUnknownBlockType cleanUpHandler;
@property (nonatomic, readonly, getter=isAnimatingPlatterViewAlpha) _Bool animatingPlatterViewAlpha;
@property (copy, nonatomic) CDUnknownBlockType platterViewAlphaAnimationCompletionBlock;
@property (nonatomic) struct CGSize platterSize;
@property (nonatomic) double platterScale;
@property (nonatomic) struct SBDragPreviewShadowParameters diffuseShadowParameters;
@property (nonatomic) struct SBDragPreviewShadowParameters rimShadowParameters;
@property (copy, nonatomic) NSArray *diffuseShadowFilters;
@property (copy, nonatomic) NSArray *rimShadowFilters;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) _Bool flocked;
@property (nonatomic) _Bool iconAllowsLabelArea;
@property (nonatomic) double iconContentScale;
@property (nonatomic) _Bool iconIsEditing;
@property (retain, nonatomic) SBIcon *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_isDragging;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)draggingSourceCancelAnimationCompleted;
- (void)dropDestinationAnimationCompleted;
- (void)_updateSubviewVisibility;
- (id)initWithReferenceIconView:(id)arg1 sourceView:(id)arg2;
- (void)updateSourceView:(id)arg1;
- (void)_matchMoveView:(id)arg1 toContainerView:(id)arg2;
- (void)_updateIconViewComponentVisibility;
- (void)invalidateSourceView;
- (void)handleCleanup;
- (double)_effectiveIconContentScale;
- (struct CGPoint)_effectiveIconContainerCenter;
- (struct CGRect)_effectivePlatterFrame;
- (id)_effectiveCornerRadiusConfiguration;
- (double)_effectiveCornerRadius;
- (void)_updateShadowView;
- (void)_updateContainerViewPositionForAnchorPoint;
- (unsigned long long)_effectiveMode;
- (void)_setSourcePortalViewHidden:(_Bool)arg1;
- (double)_blurContentViewIconViewCenterYOffset;
- (double)_effectiveIconAccessoryAlpha;
- (_Bool)_effectiveIconAllowsLabelArea;
- (_Bool)_effectiveIconIsHighlighted;
- (_Bool)_effectiveIconCanShowCloseBox;
- (void)configurePlatterForSceneHandle:(id)arg1 withTargetView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
