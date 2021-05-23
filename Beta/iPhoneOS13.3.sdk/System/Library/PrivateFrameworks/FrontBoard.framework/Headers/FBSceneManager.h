/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneClientSettingsDiffInspector, FBSceneEventQueue, FBSceneManagerObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject

{
    FBSceneManagerObserver *_delegateProxy;
    NSMutableOrderedSet *_observerProxies;
    NSMutableDictionary *_displayIdentityToRootWindow;
    NSMutableDictionary *_displayIdentityToOcclusionsStack;
    unsigned long long _synchronizationBlockDepth;
    NSMutableDictionary *_scenesByID;
    NSMapTable *_providerToScenesMap;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    FBSceneEventQueue *_eventQueue;
    NSMutableArray *_pendingIdleEvents;
    _Bool _canImplicitlyCreateWindows;
}

@property (weak, nonatomic) id <FBSceneManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)synchronizeChanges:(CDUnknownBlockType)arg1;
+ (_Bool)_isSynchronizingSceneUpdates;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (id)sceneWithIdentifier:(id)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (void)_finalizeInit;
- (id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2;
- (id)_createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_beginSynchronizationBlock;
- (id)_occlusionStackForDisplayIdentity:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (void)_sendOutstandingOcclusionChangesForStack:(id)arg1 withTransitionContext:(id)arg2;
- (void)_endSynchronizationBlock;
- (void)_appendCommonDescriptionItemsToBuilder:(id)arg1;
- (void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)attachDefaultTransform:(id)arg1 forDisplayWithRootIdentity:(id)arg2;
- (void)removeDefaultTransform:(id)arg1 forDisplayWithRootIdentity:(id)arg2;
- (void)_enqueueSceneManagerInternalObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_rootWindowForDisplayConfiguration:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_enqueueSceneManagerObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 sceneObserverBlock:(CDUnknownBlockType)arg3 sceneManagerObserverBlock:(CDUnknownBlockType)arg4;
- (void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enqueueSceneObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_reEvaluateNeedForRootWindowOnDisplayWithIdentity:(id)arg1;
- (void)_positionWrapperViewInRootViewOrderedCorrectly:(id)arg1 rootWindow:(id)arg2;
- (void)_startLayerHostingForScene:(id)arg1;
- (void)_stopLayerHostingForScene:(id)arg1;
- (id)_eventForScene:(id)arg1 withName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 preferInternal:(_Bool)arg3 sceneObserverBlock:(CDUnknownBlockType)arg4 sceneManagerObserverBlock:(CDUnknownBlockType)arg5;
- (void)_executeNextIdleEventIfAppropriate;
- (void)_executeEventWhenIdle:(id)arg1;
- (id)_rootWindowForRootDisplayIdentity:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)scene:(id)arg1 enumerateAndCalloutToObserversWithEventName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)scenesMatchingPredicate:(id)arg1;
- (id)scenesPassingTest:(CDUnknownBlockType)arg1;
- (id)sceneFromIdentityToken:(id)arg1;
- (id)createSceneWithIdentifier:(id)arg1 parameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4;
- (id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5;
- (void)destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)attachDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (void)removeDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (id)newSceneIdentityTokenForIdentity:(id)arg1;

@end
