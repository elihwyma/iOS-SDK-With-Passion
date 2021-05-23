/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowHostingSceneSafeAreaInsetsSettingsDiffAction : NSObject

{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsSafeAreaInsetsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)sceneSettingsSafeAreaInsetsDiffInspector;
- (void)_updateSafeAreaInsetsWithSettingsObserverContext:(CDUnion_e8341a59)arg1 windowHostingScene:(id)arg2 transitionContext:(id)arg3;

@end
