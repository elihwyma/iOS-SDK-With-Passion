/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class BSUICAPackageView, LAUIPearlGlyphView, NSSet, SBUIFaceIDCameraGlyphView, SBUIFaceIDCoachingView, UIColor, _UILegibilitySettings;

@interface SBUIProudLockIconView : UIView

{
    long long _state;
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    _Bool _performingIncomingLayout;
    SBUIFaceIDCameraGlyphView *_cameraCoveredView;
    _UILegibilitySettings *_legibilitySettings;
    double _durationOnCameraCoveredGlyphBeforeCoaching;
    UIColor *_contentColor;
}

@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) long long state;
@property (nonatomic, readonly) SBUIFaceIDCameraGlyphView *cameraCoveredView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (id)fileNameForCurrentDevice;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)_transitionToState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureShadowFromLegibilitySettings:(id)arg1;
- (id)_faceIDCoachingView;
- (struct CGSize)_smallLockSize;
- (double)_lockToCoachingSpacing;
- (void)_resetPearlGlyphView;
- (void)_resetfaceIDCoachingView;
- (void)_resetCameraGlyphView;
- (id)_activeViewsForState:(long long)arg1;
- (id)_pearlGlyphView;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(_Bool)arg5;
- (double)_alphaForActiveViewForState:(long long)arg1;
- (struct CGAffineTransform)_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(_Bool)arg5;
- (struct CGAffineTransform)_outgoingTransformForView:(id)arg1 fromState:(long long)arg2;
- (struct CGAffineTransform)_transformForActiveView:(id)arg1 forState:(long long)arg2;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (struct CGAffineTransform)_zoomedTransform;
- (double)_scaleAmountForZoom;
- (struct CGSize)_smallLockSizeForTextSize:(id)arg1;

@end
