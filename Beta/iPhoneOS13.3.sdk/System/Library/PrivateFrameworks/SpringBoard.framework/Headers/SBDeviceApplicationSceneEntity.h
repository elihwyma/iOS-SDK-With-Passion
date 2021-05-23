/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationSceneEntity.h>

@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)newEntityWithApplicationForMainDisplay:(id)arg1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
+ (id)entityWithApplicationForMainDisplay:(id)arg1 withScenePersistenceIdentifier:(id)arg2;

- (_Bool)wantsExclusiveForeground;
- (Class)viewControllerClass;
- (id)initWithApplicationForMainDisplay:(id)arg1;
- (id)initWithApplicationSceneHandle:(id)arg1;
- (id)initWithApplicationForMainDisplay:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 generatingNewPrimarySceneIfRequired:(_Bool)arg2;
- (_Bool)isDeviceApplicationSceneEntity;
- (id)initWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneHandleProvider:(id)arg4;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (_Bool)supportsPresentationAtAnySize;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;
- (long long)_mainDisplayPreferredInterfaceOrientation;
- (id)initWithApplicationForMainSecureDisplay:(id)arg1;
- (id)deviceApplicationSceneEntity;

@end
