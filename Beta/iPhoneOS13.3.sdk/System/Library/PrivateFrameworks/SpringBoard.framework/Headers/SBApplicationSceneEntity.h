/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceEntity.h>

@class NSMutableSet, NSSet, NSString, SBApplication, SBApplicationSceneHandle, SBProcessSettings;

@interface SBApplicationSceneEntity : SBWorkspaceEntity

{
    SBApplicationSceneHandle *_sceneHandle;
    NSMutableSet *_actions;
    SBProcessSettings *_processSettings;
}

@property (nonatomic, readonly) SBProcessSettings *processSettings;
@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) SBApplication *application;
@property (copy, nonatomic, readonly) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllActions;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (Class)viewControllerClass;
- (void)addActions:(id)arg1;
- (void)removeActions:(id)arg1;
- (id)applicationSceneEntity;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (id)_initWithSceneHandle:(id)arg1;
- (void)translateActivationSettingsToActions;
- (_Bool)isApplicationSceneEntity;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (void)clearProcessSettings;
- (CDUnknownBlockType)entityGenerator;
- (void)applyProcessSettings:(id)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (id)copyProcessSettings;
- (void)_initializeWithSceneHandle:(id)arg1;

@end
