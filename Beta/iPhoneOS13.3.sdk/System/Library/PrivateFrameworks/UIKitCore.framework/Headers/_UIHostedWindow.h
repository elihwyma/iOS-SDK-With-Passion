/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@protocol _UIHostedWindowDelegate;

@interface _UIHostedWindow : UIWindow

{
    _Bool _wantsTraitPropagation;
    _Bool __hostViewUnderlapsStatusBar;
    long long _hostTintAdjustmentMode;
    UIColor *__hostTintColor;
    UITraitCollection *_hostTraitCollection;
    id <_UIHostedWindowDelegate> __hostedWindowDelegate;
}

@property (nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode;
@property (retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection;
@property (nonatomic, setter=_setWantsTraitPropagation:) _Bool _wantsTraitPropagation;
@property (retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor;
@property (weak, nonatomic) id <_UIHostedWindowDelegate> _hostedWindowDelegate;
@property (nonatomic, readonly) _UIHostedWindowHostingHandle *hostingHandle;

- (void)dealloc;
- (unsigned int)contextID;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_allowsLinkPreviewInteractionInViewServices;
- (id)_normalInheritedTintColor;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_extendsScreenSceneLifetime;
- (void)_setFirstResponder:(id)arg1;
- (_Bool)__hostViewUnderlapsStatusBar;
- (_Bool)_usesWindowServerHitTesting;
- (void)didSetResponderTargetForCalloutBar:(id)arg1;
- (long long)_orientationForViewTransform;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (_Bool)_needsShakesWhenInactive;
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (_Bool)_preventsRootPresentationController;
- (void)_didCreateRootPresentationController;
- (_Bool)_updatesSafeAreaInsetsOnRead;
- (void)_updateWindowTraitsAndNotify:(_Bool)arg1;
- (_Bool)_shouldPropagateTraitCollectionChanges;
- (id)_traitCollectionForSize:(struct CGSize)arg1 parentCollection:(id)arg2;
- (_Bool)_canPromoteFromKeyWindowStack;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)__setHostViewUnderlapsStatusBar:(_Bool)arg1;
- (long long)_defaultTintAdjustmentMode;

@end
