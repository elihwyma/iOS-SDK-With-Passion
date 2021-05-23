/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, UIImageView, UIScreen, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIIdleModeController : NSObject

{
    _Bool _didApplyVisualEffects;
    UIWindow *_backgroundWindow;
    UIImageView *_vignetteView;
    _Bool _keyWindowAllowedGroupBlending;
    UIWindow *_keyWindow;
    NSMapTable *_viewsToCAFilters;
    NSMapTable *_viewsToAttributes;
    NSMapTable *_viewsToOriginalAttributes;
    _Bool _idleModeEnabled;
    UIScreen *_screen;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, getter=isIdleModeEnabled) _Bool idleModeEnabled;

- (void)dealloc;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (double)_presentationAnimationDuration;
- (double)_dismissalAnimationDuration;
- (id)initWithScreen:(id)arg1;
- (void)_completeDismissal;
- (void)_enterIdleMode;
- (void)_exitIdleMode;
- (_Bool)_recordLayoutAttributesStartingAtView:(id)arg1;
- (void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2;
- (void)_animatePresentation;
- (void)_animateDismissal;
- (id)_imageForTraitCollection:(id)arg1;
- (id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2;
- (id)_vignetteImageAroundFocusedFrame:(struct CGRect)arg1;
- (void)_applyPresentationLayoutAttributesToViews;
- (double)_vignetteAlphaForUserInterfaceStyle:(long long)arg1;
- (double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)arg1;
- (void)_applyDismissalLayoutAttributesToViews;

@end
