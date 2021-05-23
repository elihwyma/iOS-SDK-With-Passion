/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSceneManager.h>

@class FBSSceneClientSettingsDiffInspector, NSArray, NSHashTable, NSMutableSet, NSString, SBFaceContactExpectationManager, SBMainDisplayLayoutState, SBMainDisplayLayoutStateManager, SBMainDisplayPolicyAggregator, SBMainDisplaySceneLayoutViewController, SBMedusaHostedKeyboardWindow, SBSuspendedUnderLockManager, UIApplicationSceneClientSettingsDiffInspector, UIWindow;

@protocol SBIdleTimerCoordinating;

@interface SBMainDisplaySceneManager : SBSceneManager

{
    SBMainDisplayPolicyAggregator *_policyAggregator;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    unsigned long long _validInterfaceOrientationChangeCount;
    unsigned long long _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    SBMedusaHostedKeyboardWindow *_medusaHostedKeyboardWindow;
    NSMutableSet *_requiredContextIdentifiersForMedusaDraggingDestination;
    _Bool _didAddSceneLayoutViewControllerWindowContextIdentifier;
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    NSHashTable *_preventAdditionalMedusaSnapshotsAssertions;
    _Bool _isUsingMedusaHostedKeyboardWindow;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

@property (nonatomic, readonly) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (nonatomic, readonly) NSArray *_requiredContextIdentifiersForMedusaDraggingDestination;
@property (nonatomic, readonly, getter=_isUsingMedusaHostedKeyboardWindow) _Bool _isUsingMedusaHostedKeyboardWindow;
@property (nonatomic, readonly) UIWindow *_medusaHostedKeyboardWindow;
@property (nonatomic, readonly) SBMainDisplayPolicyAggregator *policyAggregator;
@property (nonatomic, readonly) SBMainDisplayLayoutState *currentLayoutState;
@property (nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (nonatomic, getter=isSuspendedUnderLock) _Bool suspendedUnderLock;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_layoutStateManagerClass;
+ (Class)_sceneLayoutWindowClass;
+ (Class)_applicationSceneHandleClass;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)window;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (id)initWithReference:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_userInterfaceStyleArbiterStyleChanged:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)_appClientSettingsDiffInspector;
- (id)externalForegroundApplicationSceneHandles;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)_proposeIdleTimerBehaviorForReason:(id)arg1;
- (id)_createRootWindowScenePresentationBinder;
- (id)_newSceneLayoutViewController;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(_Bool)arg2 forScene:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (_Bool)_shouldAutoHostScene:(id)arg1;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (_Bool)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (id)externalApplicationSceneHandles;
- (id)existingSceneHandleForPersistenceIdentifier:(id)arg1;
- (_Bool)_shouldTrackScenesForDeactivation;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)_newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(_Bool)arg2;
- (id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1;
- (void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1;
- (void)_updateMedusaHostedKeyboardWindow;
- (void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(_Bool)arg3 preferNewScene:(_Bool)arg4 visibleIdentifiers:(id)arg5;
- (void)_deviceOrientationChanged:(id)arg1;
- (_Bool)_isExternalForegroundScene:(id)arg1;
- (void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2;
- (id)_externalClientSettingsDiffInspector;
- (id)_internalClientSettingsDiffInspector;
- (void)_addMedusaDraggingDestinationWindow:(id)arg1;
- (void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2;
- (id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(_Bool)arg4 preferNewScene:(_Bool)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7;
- (id)_identifierForApplication:(id)arg1;
- (id)_newSceneIdentifierForApplication:(id)arg1;
- (id)_sceneIdentifierForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(_Bool)arg2 prefersTouchCancellationDisabled:(_Bool)arg3;
- (_Bool)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(_Bool *)arg2;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1;
- (id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2;
- (id)runningApplicationScenes:(id)arg1;
- (id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1;
- (void)_removeMedusaDraggingDestinationWindow:(id)arg1;
- (void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1;

@end
