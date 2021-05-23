/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSPluginBundle, CSAppearance, CSBehavior, FBProcess, NSMutableArray, NSString, SBLockOverlayContext, SBLockScreenPluginAction, SBLockScreenPluginAppearanceContext, UIViewController, _UILegibilitySettings;

@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginController, SBLockScreenPluginDelegate, SBLockScreenPluginViewController;

@interface SBLockScreenPlugin : NSObject <Swift>

{
    BSPluginBundle *_bundle;
    NSString *_bundleName;
    FBProcess *_process;
    id <SBLockScreenPluginController> _controller;
    id <SBLockScreenPluginAgent> _agent;
    SBLockScreenPluginAppearanceContext *_appearance;
    NSMutableArray *_lifecycleObservers;
    SBLockOverlayContext *_overlay;
    CDUnknownBlockType _auxiliaryActivationAnimationBlock;
    CDUnknownBlockType _auxiliaryDeactivationAnimationBlock;
    id <SBLockScreenPluginDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLockScreenPluginDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id <SBLockScreenPluginController> controller;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *viewController;
@property (nonatomic, readonly) SBLockScreenPluginAppearanceContext *appearance;
@property (nonatomic, readonly) SBLockScreenPluginAction *unlockAction;
@property (nonatomic, readonly) CSAppearance *coverSheetAppearance;
@property (nonatomic, readonly) CSBehavior *coverSheetBehavior;
@property (retain, nonatomic) SBLockOverlayContext *overlay;
@property (copy, nonatomic) CDUnknownBlockType auxiliaryActivationAnimationBlock;
@property (copy, nonatomic) CDUnknownBlockType auxiliaryDeactivationAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBLockScreenPluginAgent> pluginAgent;
@property (nonatomic, readonly) long long pluginPriority;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (nonatomic, readonly) id <SBLockScreenPluginAppearance> pluginAppearance;
@property (retain, nonatomic, readonly) SBLockScreenPluginAction *pluginUnlockAction;

+ (id)_pluginBundleForPluginWithName:(id)arg1;
+ (id)pluginWithName:(id)arg1 activationContext:(id)arg2;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)processDidExit:(id)arg1;
- (void)_updateAppearance:(id)arg1;
- (id)overrideForElement:(long long)arg1;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)deactivatePluginController:(id)arg1;
- (void)pluginWillActivateWithContext:(id)arg1;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
- (_Bool)handleDashBoardEvent:(id)arg1;
- (_Bool)isCapabilityRestricted:(unsigned long long)arg1;
- (id)initWithBundle:(id)arg1 activationContext:(id)arg2;
- (void)activatePluginController:(id)arg1;
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;
- (_Bool)isElementHidden:(long long)arg1;
- (void)addLifecycleObserver:(id)arg1;
- (void)removeLifecycleObserver:(id)arg1;
- (void)enumerateLifecycleObserversUsingBlock:(CDUnknownBlockType)arg1;

@end
