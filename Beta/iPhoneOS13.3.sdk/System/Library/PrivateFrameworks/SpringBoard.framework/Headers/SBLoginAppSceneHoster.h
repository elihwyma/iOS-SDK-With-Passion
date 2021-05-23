/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBApplicationUpdateScenesTransaction, FBScene, NSString, SBApplication, SBDeviceApplicationSceneHandle, SBSUILoginUISceneClientSettingsDiffInspector, UIView;

@protocol SBLoginAppSceneHosterDelegate, UIScenePresenter;

@interface SBLoginAppSceneHoster : NSObject <Swift>

{
    FBScene *_scene;
    id <UIScenePresenter> _scenePresenter;
    FBApplicationUpdateScenesTransaction *_sceneCreateTransaction;
    long long _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    _Bool _deferHIDEvents;
    _Bool _hidEventDeferralsInstalled;
    id <SBLoginAppSceneHosterDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLoginAppSceneHosterDelegate> delegate;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NSString *hostedAppBundleID;
@property (nonatomic, readonly) NSString *hostedSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBApplication *hostedApp;
@property (nonatomic) _Bool deferHIDEvents;

- (id)init;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)_appClientSettingsDiffInspector;
- (void)launchLoginAppWithCompletion:(CDUnknownBlockType)arg1;
- (void)killLoginApp;

@end
