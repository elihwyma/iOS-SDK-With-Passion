/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface CPTemplateApplicationSceneGeometrySettingsDiffAction : NSObject

{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsGeometryMutationDiffInspector;
}

@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateSceneGeometryWithSettingObserverContext:(CDStruct_65389fcd)arg1 windowScene:(id)arg2 transitionContext:(id)arg3;

@end
