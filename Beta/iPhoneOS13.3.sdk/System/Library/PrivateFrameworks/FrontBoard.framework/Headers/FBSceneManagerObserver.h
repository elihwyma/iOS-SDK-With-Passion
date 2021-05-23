/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSString;

@protocol FBSceneManagerDelegate, FBSceneManagerObserver;

@interface FBSceneManagerObserver : NSObject <Swift>

{
    id <FBSceneManagerObserver> _observer;
    unsigned long long _observerAddress;
    Class _observerClass;
    _Bool _isDelegate;
    _Bool _internalObserver;
    _Bool _privateDelegate;
    _Bool _didCreate;
    _Bool _willDestroy;
    _Bool _didDestroy;
    _Bool _updatePreparedDEPRECATED;
    _Bool _updateAppliedDEPRECATED;
    _Bool _updateCompletedDEPRECATED;
    _Bool _didCreateSceneDEPRECATED;
    _Bool _willUpdateSceneDEPRECATED;
    _Bool _willCommitDEPRECATED;
    _Bool _didCommitDEPRECATED;
    _Bool _didCommitDEPRECATED2;
    _Bool _didReceiveActionsDEPRECATED;
    _Bool _willSynchronize;
    _Bool _didSynchronize;
    _Bool _interceptSceneUpdatesForDeactivationManager;
    _Bool _didUpdateClientSettings;
    _Bool _interceptSceneUpdates;
    _Bool _hostingPolicyForDisplay;
    _Bool _hostingPolicyForScene;
    _Bool _createDefaultTransitionContext;
}

@property (weak, nonatomic, readonly) id <FBSceneManagerObserver> observer;
@property (weak, nonatomic, readonly) id <FBSceneManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)observerWithObserver:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_privateDelegate;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;
- (id)_initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManager:(id)arg1 interceptUpdateForSceneDeactivationManager:(id)arg2 withNewSettings:(id)arg3;
- (_Bool)isDelegate;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (id)_internalObserver;
- (_Bool)isInternalObserver;

@end
