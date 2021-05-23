/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBProcess, FBSDisplayConfiguration, FBSMutableSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, FBSSceneIdentityToken, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSceneHostManager, FBSceneLayerManager, FBSceneObserver, NSArray, NSHashTable, NSMutableOrderedSet, NSString;

@protocol BSInvalidatable, FBSceneClient, FBSceneClientProvider, FBSceneDelegate, FBSceneManagerSceneDelegate;

@interface FBScene : NSObject <Swift>

{
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_hostManager;
    id <FBSceneManagerSceneDelegate> _sceneManagerSceneDelegate;
    FBSceneObserver *_delegateProxy;
    NSMutableOrderedSet *_observerProxies;
    _Bool _valid;
    id <FBSceneClient> _client;
    id <FBSceneClientProvider> _clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    NSString *_workspaceIdentifier;
    FBSSceneIdentityToken *_identityToken;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    FBSSceneDefinition *_definition;
    long long _contentState;
    _Bool _contentStateIsChanging;
    NSHashTable *_geometryObservers;
    unsigned long long _transactionID;
    _Bool _inTransaction;
    id <BSInvalidatable> _stateCaptureAssertion;
    unsigned long long _lastForegroundingTransitionID;
}

@property (nonatomic, readonly) FBSceneHostManager *hostManager;
@property (retain, nonatomic, readonly) FBSDisplayConfiguration *display;
@property (weak, nonatomic) id <FBSceneManagerSceneDelegate> sceneManagerSceneDelegate;
@property (retain, nonatomic) FBSMutableSceneSettings *mutableSettings;
@property (nonatomic, readonly) FBSceneObserver *delegateProxy;
@property (copy, nonatomic, readonly) NSArray *observerProxies;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (nonatomic, readonly, getter=_isInTransaction) _Bool _inTransaction;
@property (nonatomic, readonly) id <FBSceneClient> client;
@property (nonatomic, readonly) id <FBSceneClientProvider> clientProvider;
@property (weak, nonatomic) id <FBSceneDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *workspaceIdentifier;
@property (copy, nonatomic, readonly) FBSSceneDefinition *definition;
@property (copy, nonatomic, readonly) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (copy, nonatomic, readonly) FBSSceneParameters *parameters;
@property (nonatomic, readonly) long long contentState;
@property (nonatomic, readonly) FBSceneLayerManager *layerManager;
@property (nonatomic, readonly) FBProcess *clientProcess;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) FBSSceneSpecification *specification;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)_beginTransaction;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)uiSettings;
- (id)uiClientSettings;
- (void)updateUISettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (id)createSnapshotWithContext:(id)arg1;
- (id)snapshotContext;
- (void)sendActions:(id)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (id)createSnapshot;
- (void)_addSceneGeometryObserver:(id)arg1;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)clientWillInvalidate:(id)arg1;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithBlock:(CDUnknownBlockType)arg1;
- (long long)currentInterfaceOrientation;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
- (void)_applyUpdateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endTransaction:(unsigned long long)arg1;
- (void)_adjustInitialSettings:(id)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_setContentState:(long long)arg1;
- (void)_dispatchClientMessageWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;

@end
