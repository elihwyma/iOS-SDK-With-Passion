/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class FBSSceneClientSettingsDiffInspector, FBScene, FBSceneManager, NSMutableSet, NSString;

@protocol UIExternalScenePairingObserverDelegate;

@interface UIExternalScenePairingObserver : NSObject <Swift>

{
    FBScene *_scene;
    id <UIExternalScenePairingObserverDelegate> _delegate;
    FBSceneManager *_sceneManager;
    NSString *_sceneID;
    NSMutableSet *_trackingExternalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    _Bool _invalidated;
}

@property (retain, nonatomic, setter=_setSceneManager:) FBSceneManager *_sceneManager;
@property (weak, nonatomic, readonly) FBScene *scene;
@property (weak, nonatomic) id <UIExternalScenePairingObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithScene:(id)arg1 delegate:(id)arg2;
- (_Bool)isPairedWithExternalSceneID:(id)arg1;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_updateExternalScenes;
- (id)_initWithSceneManager:(id)arg1 scene:(id)arg2 delegate:(id)arg3;
- (void)_updateScenePairingState;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;

@end
