/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSSceneSettingsDiffInspector, NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject

{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDeviceOrientationDiffInspector;
}

@property (nonatomic, readonly) FBSSceneSettingsDiffInspector *sceneSettingsDeviceOrientationDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateDeviceOrientationWithSettingObserverContext:(CDStruct_65389fcd)arg1 windowScene:(id)arg2 transitionContext:(id)arg3;

@end
