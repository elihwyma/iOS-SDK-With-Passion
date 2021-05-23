/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneStatusBarSettingsDiffAction : NSObject

{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsStatusBarDiffInspector;
}

@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsStatusBarDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)arg1 transitionContext:(id)arg2;

@end
