/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSSceneTransitionContext, FBScene, FBSceneManager, FBWaitForSceneDestructionTransaction, NSString;

@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <Swift>

{
    FBSceneManager *_sceneManager;
    NSString *_sceneID;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBSSceneTransitionContext *_transitionContext;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
    unsigned long long _transactionID;
    _Bool _waitsForSceneCommit;
    _Bool _readyToCommit;
    _Bool _didCommit;
    _Bool _destroyed;
}

@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneSpecification *specification;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;
@property (nonatomic, readonly) _Bool destroyed;
@property (nonatomic) _Bool waitsForSceneCommit;
@property (nonatomic, readonly) FBSSceneSettings *newSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)sceneDidInvalidate:(id)arg1;
- (id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_noteDidCommit:(_Bool)arg1;
- (void)_noteDidCreate;
- (void)_noteWillCommit;
- (void)_commitSceneUpdate:(CDUnknownBlockType)arg1;
- (void)_noteWillUpdate;
- (void)performSynchronizedCommit;
- (void)_createScene;
- (void)_updateScene;
- (void)_commitSceneOrWait;
- (_Bool)isReadyForSynchronizedCommit;
- (void)_performCommit;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;

@end
