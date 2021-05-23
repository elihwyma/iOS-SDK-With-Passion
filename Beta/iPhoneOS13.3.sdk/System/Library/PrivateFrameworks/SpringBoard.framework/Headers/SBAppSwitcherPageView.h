/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppSwitcherPageShadowView, SBAppSwitcherSettings, SBWallpaperEffectView;

@protocol SBAppSwitcherPageContentView;

@interface SBAppSwitcherPageView : UIView <Swift>

{
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_lighteningView;
    UIView *_viewClippingView;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayClippingView;
    UIView *_overlayView;
    long long _shadowStyle;
    double _shadowAlpha;
    double _shadowOffset;
    struct UIRectCornerRadii _cornerRadii;
    _Bool _isHighlighted;
    _Bool _isShadowHighlighted;
    SBAppSwitcherPageShadowView *_shadowView;
    SBAppSwitcherSettings *_settings;
    long long _orientation;
    _Bool _shouldClipContentView;
    _Bool _shouldScaleOverlayToFillBounds;
    _Bool _needsBackgroundWallpaperTreatment;
    double _switcherCardScale;
    double _darkeningAlpha;
    double _killingDarkeningAlpha;
    double _wallpaperOverlayAlpha;
    double _lighteningAlpha;
    struct CGSize _overlayViewSize;
    struct CGSize _fullyPresentedSize;
    struct CGRect _contentClippingFrame;
}

@property (nonatomic, readonly) UIView *_overlayClippingView;
@property (nonatomic, readonly) SBAppSwitcherPageShadowView *_shadowView;
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view;
@property (retain, nonatomic) UIView *overlay;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) double overlayAlpha;
@property (nonatomic) double contentAlpha;
@property (nonatomic) double darkeningAlpha;
@property (nonatomic) double killingDarkeningAlpha;
@property (nonatomic) _Bool needsBackgroundWallpaperTreatment;
@property (nonatomic) double wallpaperOverlayAlpha;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) struct UIRectCornerRadii cornerRadii;
@property (nonatomic) long long orientation;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isShadowHighlighted) _Bool shadowHighlighted;
@property (nonatomic) _Bool shouldClipContentView;
@property (nonatomic) struct CGRect contentClippingFrame;
@property (nonatomic) struct CGSize overlayViewSize;
@property (nonatomic) struct CGSize fullyPresentedSize;
@property (nonatomic) double switcherCardScale;
@property (nonatomic) _Bool shouldScaleOverlayToFillBounds;
@property (nonatomic) _Bool blocksTouches;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateShadow;
- (void)_updateCornerRadius;
- (void)_updateDimmingViewAlpha;
- (struct CGRect)_viewFrame;
- (void)_layoutOverlayView;
- (void)_updateEffectOverlayViews;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)setOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)_updateWallpaperOverlayAlpha;
- (void)_updateLighteningAlpha;
- (void)_setupShadowView;

@end
