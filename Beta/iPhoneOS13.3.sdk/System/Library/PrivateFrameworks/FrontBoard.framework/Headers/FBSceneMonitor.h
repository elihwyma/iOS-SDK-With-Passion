/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBSMutableSceneSettings, FBSSceneClientSettingsDiffInspector, FBSSceneSettings, FBScene, FBSceneMonitorBehaviors, NSMutableSet, NSString;

@protocol FBSceneMonitorDelegate;

@interface FBSceneMonitor : NSObject <Swift>

{
    FBScene *_scene;
    NSString *_sceneID;
    NSMutableSet *_externalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSMutableSceneSettings *_sceneSettings;
    FBSceneMonitorBehaviors *_givenMonitorBehaviors;
    FBSceneMonitorBehaviors *_delegateMonitorBehaviors;
    FBSceneMonitorBehaviors *_effectiveMonitorBehaviors;
    _Bool _invalidated;
    _Bool _isSynchronizing;
    _Bool _updateSettingsAfterSync;
    _Bool _updateExternalScenesAfterSync;
    id <FBSceneMonitorDelegate> _delegate;
}

@property (nonatomic, readonly) FBScene *scene;
@property (copy, nonatomic, readonly) NSString *sceneID;
@property (weak, nonatomic) id <FBSceneMonitorDelegate> delegate;
@property (copy, nonatomic) FBSceneMonitorBehaviors *behaviors;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithScene:(id)arg1;
- (_Bool)isPairedWithExternalSceneID:(id)arg1;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)_evaluateEffectiveMonitorBehaviors;
- (id)initWithSceneID:(id)arg1;
- (id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_setEffectiveMonitorBehaviors:(id)arg1;
- (void)_updateSceneSettings:(_Bool)arg1;
- (void)_updateExternalScenes:(_Bool)arg1;
- (void)_updateScenePairingState:(_Bool)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (id)_effectiveBehaviors;

@end
