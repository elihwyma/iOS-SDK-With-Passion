/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class AXUIAlertStyleProvider, AXUIServiceManager, NSMutableDictionary, NSString;

@interface AXUIDisplayManager : NSObject

{
    AXUIAlertStyleProvider *_defaultAlertStyleProvider;
    long long _activeInterfaceOrientation;
    unsigned long long _numberOfAttemptsToInitializeActiveInterfaceOrientation;
    AXUIServiceManager *_serviceManager;
    NSMutableDictionary *_alertQueues;
    NSMutableDictionary *_visibleAlertContexts;
    NSMutableDictionary *_activeWindows;
    NSMutableDictionary *_passiveWindows;
    NSMutableDictionary *_activeContentViewControllers;
    NSMutableDictionary *_passiveContentViewControllers;
    NSString *_systemServerActionHandlerIdentifier;
    long long _userInterfaceStyle;
    NSMutableDictionary *_nubbitContexts;
    NSString *_reachabilityHandlerIdentifier;
    double _reachabilityOffset;
}

@property (retain, nonatomic) AXUIAlertStyleProvider *defaultAlertStyleProvider;
@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) unsigned long long numberOfAttemptsToInitializeActiveInterfaceOrientation;
@property (weak, nonatomic) AXUIServiceManager *serviceManager;
@property (retain, nonatomic) NSMutableDictionary *alertQueues;
@property (retain, nonatomic) NSMutableDictionary *visibleAlertContexts;
@property (retain, nonatomic) NSMutableDictionary *activeWindows;
@property (retain, nonatomic) NSMutableDictionary *passiveWindows;
@property (retain, nonatomic) NSMutableDictionary *activeContentViewControllers;
@property (retain, nonatomic) NSMutableDictionary *passiveContentViewControllers;
@property (retain, nonatomic) NSMutableDictionary *nubbitContexts;
@property (copy, nonatomic) NSString *systemServerActionHandlerIdentifier;
@property (copy, nonatomic) NSString *reachabilityHandlerIdentifier;
@property (nonatomic) double reachabilityOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDisplayManager;

- (id)init;
- (void)dealloc;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (id)initWithServiceManager:(id)arg1;
- (void)_attemptToInitializeActiveInterfaceOrientation;
- (void)_activeInterfaceOrientationDidChange:(long long)arg1 duration:(double)arg2;
- (void)_enumerateWindowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reachabilityToggledWithPayload:(id)arg1;
- (void)systemAppServerReady;
- (id)_contentViewControllersWithUserInteractionEnabled:(_Bool)arg1 forService:(id)arg2 createIfNeeded:(_Bool)arg3;
- (void)addContentViewController:(id)arg1 withUserInteractionEnabled:(_Bool)arg2 forService:(id)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeContentViewController:(id)arg1 withUserInteractionEnabled:(_Bool)arg2 forService:(id)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_windowWithUserInteractionEnabled:(_Bool)arg1 windowLevel:(double)arg2 createIfNeeded:(_Bool)arg3 purposeIdentifier:(id)arg4;
- (void)_addContentViewController:(id)arg1 toWindow:(id)arg2 forService:(id)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_disposeOfContentViewControllersWithUserInteractionEnabled:(_Bool)arg1 forService:(id)arg2;
- (void)_removeContentViewController:(id)arg1 forService:(id)arg2;
- (id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 priority:(unsigned long long)arg5 duration:(double)arg6 forService:(id)arg7;
- (id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 priority:(unsigned long long)arg5 duration:(double)arg6 userInfo:(id)arg7 forService:(id)arg8;
- (id)_transactionIdentifierForDisplayingAlertWithContext:(id)arg1 service:(id)arg2;
- (void)_showOrEnqueueAlertWithContext:(id)arg1;
- (void)_hideAlertWithContext:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)_didHideOrDequeueAlertWithContext:(id)arg1;
- (id)_nubbitContextKeyForNubbit:(id)arg1;
- (void)_handleMoveNubbitGestureRecognizer:(id)arg1;
- (void)_scheduleFadeForNubbitContext:(id)arg1;
- (void)_addDynamicAnimationsForNubbitContext:(id)arg1;
- (void)unregisterNubbit:(id)arg1 shouldUndoFade:(_Bool)arg2;
- (void)_undoFadeForNubbitContext:(id)arg1;
- (void)_removeDynamicAnimationsForNubbitContext:(id)arg1;
- (void)_rotateWindow:(id)arg1 toInterfaceOrientation:(long long)arg2 duration:(double)arg3 force:(_Bool)arg4;
- (void)enumerateContentViewControllersUsingBlock:(CDUnknownBlockType)arg1;
- (id)_transactionIdentifierForDisplayingContentViewController:(id)arg1 service:(id)arg2;
- (void)_reapHiddenWindows;
- (void)_handleNextAlertForType:(unsigned long long)arg1;
- (_Bool)_hasVisibleAlertWithType:(unsigned long long)arg1;
- (void)_showAlertWithContext:(id)arg1;
- (id)_boundingViewForNubbit:(id)arg1;
- (id)_gravityBehaviorForNubbit:(id)arg1 velocity:(struct CGPoint)arg2 boundingView:(id)arg3;
- (void)_endMoveForNubbitContext:(id)arg1;
- (id)_nubbitContextForGestureRecognizer:(id)arg1;
- (void)_beginMoveForNubbitContext:(id)arg1;
- (void)_changeNubbitPositionForNubbitContext:(id)arg1;
- (_Bool)_serviceWantsToPreventAutorotation:(id)arg1;
- (double)_originalDurationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 withAdjustedDuration:(double)arg3;
- (id)contentViewControllersWithUserInteractionEnabled:(_Bool)arg1 forService:(id)arg2;
- (void)addContentViewController:(id)arg1 withUserInteractionEnabled:(_Bool)arg2 forService:(id)arg3;
- (void)removeContentViewController:(id)arg1 withUserInteractionEnabled:(_Bool)arg2 forService:(id)arg3;
- (id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned long long)arg4 forService:(id)arg5;
- (void)hideAlertWithIdentifier:(id)arg1 forService:(id)arg2;
- (void)registerNubbit:(id)arg1 delegate:(id)arg2;
- (void)unregisterNubbit:(id)arg1;
- (void)pinNubbitToEdge:(id)arg1;
- (void)cancelNubbitFade:(id)arg1;
- (void)_resetServiceManager;

@end
