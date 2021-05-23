/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppStatusBarAssertionManager, SBMainDisplaySceneManager, SpringBoard, UIApplicationSceneSettingsDiffInspector, UIStatusBarServer;

@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate;

@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <Swift>

{
    SpringBoard *_orientationProvider;
    UIStatusBarServer *_statusBarConnection;
    SBAppStatusBarAssertionManager *_statusBarAssertionManager;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    UIApplicationSceneSettingsDiffInspector *_applicationSceneSettingsDiffInspector;
    int _currentStyleOverrides;
    id <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> _delegate;
    double _statusBarHeight;
    _Bool _isEnabled;
    _Bool _invalidated;
}

@property (weak, nonatomic) id <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> delegate;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) double enabledStatusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)_evaluateEnablement;
- (id)initWithMainDisplaySceneManager:(id)arg1 statusBarAssertionManager:(id)arg2 statusBarServer:(id)arg3 orientationProvider:(id)arg4;
- (void)_setEnabled:(_Bool)arg1 statusBarHeight:(double)arg2;
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;

@end
