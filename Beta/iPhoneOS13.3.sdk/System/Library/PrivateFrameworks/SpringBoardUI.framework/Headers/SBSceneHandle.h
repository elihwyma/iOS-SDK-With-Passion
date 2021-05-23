/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class FBSDisplayIdentity, FBSSceneDefinition, FBScene, FBSceneMonitor, NSHashTable, NSMapTable, NSString;

@interface SBSceneHandle : NSObject

{
    FBSSceneDefinition *_definition;
    FBScene *_scene;
    long long _contentState;
    FBSDisplayIdentity *_displayIdentity;
    _Bool _manuallyControlsLifecycle;
    FBSceneMonitor *_sceneMonitor;
    NSHashTable *_observers;
    NSMapTable *_observersToObserverBehaviors;
}

@property (retain, nonatomic, getter=_sceneMonitor, setter=_setSceneMonitor:) FBSceneMonitor *sceneMonitor;
@property (nonatomic, readonly, getter=_definition) FBSSceneDefinition *definition;
@property (retain, nonatomic, setter=_setDisplayIdentity:) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:) _Bool manuallyControlsLifecycle;
@property (copy, nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) FBScene *sceneIfExists;
@property (nonatomic, readonly) long long contentState;
@property (nonatomic, readonly, getter=isContentReady) _Bool contentReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_commonInit;
- (void)_setScene:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (id)_createMonitor;
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;
- (id)_initWithDefinition:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1;
- (void)_didUpdateContentState:(long long)arg1;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (id)_initWithScene:(id)arg1 displayIdentity:(id)arg2;
- (id)_initWithDefinition:(id)arg1 displayIdentity:(id)arg2;
- (_Bool)isPairedWithExternalSceneWithIdentifier:(id)arg1;
- (void)_noteSceneCreated:(id)arg1;
- (void)_noteSceneDestroyed:(id)arg1;

@end
