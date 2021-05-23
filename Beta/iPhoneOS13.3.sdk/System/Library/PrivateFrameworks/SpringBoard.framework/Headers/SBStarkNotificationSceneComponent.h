/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBStarkNotificationConfiguration, SBStarkNotificationViewController, SBStarkNotificationWindow, UIScene;

@protocol BSInvalidatable;

@interface SBStarkNotificationSceneComponent : NSObject

{
    UIScene *_scene;
    SBStarkNotificationConfiguration *_configuration;
    SBStarkNotificationWindow *_window;
    SBStarkNotificationViewController *_viewController;
    _Bool _observingDisplays;
    _Bool _connected;
    id <BSInvalidatable> _deferringRule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (void)dealloc;
- (id)configuration;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)_updateWindow;
- (id)bannerSource;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2;
- (void)_updateDynamicConfigurationOfScene:(id)arg1 withSettings:(id)arg2 transition:(id)arg3;

@end
