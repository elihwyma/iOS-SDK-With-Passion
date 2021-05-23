/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSSceneSpecification.h>

@interface UIApplicationSceneSpecification : FBSSceneSpecification

- (id)initialSettingsDiffActions;
- (id)initialActionHandlers;
- (id)finalActionHandlers;
- (Class)lifecycleMonitorClass;
- (_Bool)isUIKitManaged;
- (_Bool)isInternal;
- (id)disconnectionHandlers;
- (Class)uiSceneMinimumClass;
- (id)baseSceneComponentClassDictionary;
- (id)connectionHandlers;
- (id)uiSceneSessionRole;
- (Class)sceneSubstrateClass;
- (Class)hostAgentClass;
- (Class)clientAgentClass;
- (Class)settingsClass;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;

@end
