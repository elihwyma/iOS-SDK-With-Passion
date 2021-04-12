//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSceneObserver-Protocol.h>
#import <FrontBoard/FBSynchronizedTransaction-Protocol.h>

@class FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSSceneTransitionContext, FBScene, FBSceneManager, FBWaitForSceneDestructionTransaction, NSString;
@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction>
{
    FBSceneManager *_sceneManager;
    NSString *_sceneID;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBSSceneTransitionContext *_transitionContext;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
    NSUInteger _transactionID;
    BOOL _waitsForSceneCommit;
    BOOL _readyToCommit;
    BOOL _didCommit;
    BOOL _destroyed;
}

@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
@property(nonatomic) BOOL waitsForSceneCommit; // @synthesize waitsForSceneCommit=_waitsForSceneCommit;
@property(readonly, nonatomic) BOOL destroyed; // @synthesize destroyed=_destroyed;
@property(readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneID;
// - (void).cxx_destruct;
- (void)performSynchronizedCommit;
- (BOOL)isReadyForSynchronizedCommit;
- (void)sceneDidInvalidate:(id)arg1;
- (void)_noteDidCommit:(BOOL)arg1;
- (void)_noteWillCommit;
- (void)_noteWillUpdate;
- (void)_noteDidCreate;
- (id)_customizedDescriptionProperties;
- (BOOL)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_performCommit;
- (void)_commitSceneOrWait;
- (void)_updateScene;
- (void)_createScene;
- (void)_commitSceneUpdate:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) FBSSceneSpecification *specification; // @dynamic specification;
@property(readonly, nonatomic) FBSSceneSettings *newSettings; // @dynamic newSettings;
@property(readonly, nonatomic) FBSSceneSettings *settings; // @dynamic settings;
@property(readonly, nonatomic) FBScene *scene; // @dynamic scene;
- (void)dealloc;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4;
- (id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;

@end

