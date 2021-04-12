//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayObserving-Protocol.h>
#import <SpringBoard/SBStarkNotificationViewControllerDelegate-Protocol.h>
#import <SpringBoard/_UISceneComponentProviding-Protocol.h>
#import <SpringBoard/_UISceneSettingsDiffAction-Protocol.h>

@class SBStarkNotificationConfiguration, SBStarkNotificationViewController, SBStarkNotificationWindow, UIScene;
@protocol BSInvalidatable;

@interface SBStarkNotificationSceneComponent : NSObject <SBStarkNotificationViewControllerDelegate, _UISceneSettingsDiffAction, FBSDisplayObserving, _UISceneComponentProviding>
{
    UIScene *_scene;
    SBStarkNotificationConfiguration *_configuration;
    SBStarkNotificationWindow *_window;
    SBStarkNotificationViewController *_viewController;
    BOOL _observingDisplays;
    BOOL _connected;
    id <BSInvalidatable> _deferringRule;
}

// - (void).cxx_destruct;
- (void)_updateDynamicConfigurationOfScene:(id)arg1 withSettings:(id)arg2 transition:(id)arg3;
- (void)_updateWindow;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)initWithScene:(id)arg1;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2;
- (id)bannerSource;
- (id)configuration;
- (void)dealloc;

@end

