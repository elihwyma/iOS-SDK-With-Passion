/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAutoRotatingWindow.h>

@class NSDictionary, NSLayoutConstraint, NSString, UIEditingOverlayViewController, UIWindowScene;

@interface UITextEffectsWindow : UIAutoRotatingWindow

{
    _Bool _inDealloc;
    unsigned long long _activeEffectsCount;
    _Bool _isFullscreen;
    double _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary *_perCanvasOptions;
    UIWindowScene *__intendedWindowScene;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
    double _windowLevelStack[5];
    struct CGSize _hostedSceneSize;
    _Bool _manualHostingOverride;
    UIEditingOverlayViewController *_editingOverlayViewController;
    NSLayoutConstraint *_bottomConstraint;
    struct UIEdgeInsets _hostedSafeInsets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (nonatomic, readonly) UIEditingOverlayViewController *editingOverlayViewController;
@property (readonly) unsigned int contextID;
@property (nonatomic, readonly) _Bool isFullscreen;
@property (nonatomic) double defaultWindowLevel;
@property (nonatomic) struct CGPoint hostedWindowOffset;
@property (nonatomic, readonly) struct CGRect hostedFrame;
@property (nonatomic) struct CGSize hostedSceneSize;
@property (nonatomic) struct UIEdgeInsets hostedSafeInsets;

+ (id)sharedTextEffectsWindowForWindowScene:(id)arg1;
+ (id)activeTextEffectsWindowForWindowScene:(id)arg1;
+ (_Bool)_isSecure;
+ (_Bool)_shouldSoftAssertOnSetScreen;
+ (id)_sharedTextEffectsWindowforWindowScene:(id)arg1 allowHosted:(_Bool)arg2 matchesStatusBarOrientationOnAccess:(_Bool)arg3 shouldCreateIfNecessary:(_Bool)arg4;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)_canvasForScreen:(id)arg1;
+ (id)sharedTextEffectsWindow;
+ (id)sharedTextEffectsWindowForCanvas:(id)arg1;
+ (id)activeTextEffectsWindowForCanvas:(id)arg1;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (void)releaseSharedInstances;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;

- (void)dealloc;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)interfaceOrientation;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (_Bool)_isTextEffectsWindow;
- (void)sendSubviewToBack:(id)arg1;
- (void)_sceneBoundsDidChange;
- (_Bool)_isFullscreen;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)_updateTransformLayer;
- (_Bool)_extendsScreenSceneLifetime;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)isInternalWindow;
- (void)_setWindowLevel:(double)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (struct CGRect)_sceneReferenceBounds;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGRect)actualSceneBounds;
- (_Bool)_matchingOptions:(id)arg1;
- (struct CGRect)actualSceneFrame;
- (id)_inputWindowController;
- (void)_sortSubviewsOfView:(id)arg1;
- (void)updateForOrientation:(long long)arg1;
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;
- (_Bool)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (id)aboveStatusBarWindow;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;
- (void)_matchDeviceOrientation;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3;
- (void)_commonInitWithOptions:(id)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (struct CGRect)_sceneBounds;
- (void)_willSnapshot;
- (void)_didSnapshot;
- (void)_configureContextOptions:(id)arg1;
- (_Bool)_shouldInstallRootPresentationController;
- (struct CGRect)_usableSceneBounds;
- (_Bool)_shouldResizeWithScene;
- (void)updateEditingOverlayContainer;
- (void)addBottomPadding:(double)arg1;
- (id)_initBasicWithCanvas:(id)arg1 options:(id)arg2;
- (void)_commonTextEffectsInit;
- (_Bool)enableRemoteHosting;
- (struct CGPoint)_forHostedProcessConvertPoint:(struct CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(_Bool)arg3;
- (struct CGRect)_forHostedProcessConvertRect:(struct CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(_Bool)arg3;
- (struct CGRect)actualSceneFrameForOrientation:(long long)arg1;
- (void)delayHideWindow;
- (void)sortSubviews;
- (void)updateForOrientation:(long long)arg1 forceResetTransform:(_Bool)arg2;
- (void)setEnableRemoteHosting:(_Bool)arg1;
- (void)_restoreWindowLevel;
- (void)resetTransform;
- (void)updateSubviewOrdering;

@end
