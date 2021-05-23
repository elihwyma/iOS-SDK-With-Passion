/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class FBSMutableSceneParameters, NSString, SBApplicationSceneEntity, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest, UIApplicationSceneSettings, UIApplicationSceneTransitionContext;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction

{
    SBApplicationSceneEntity *_applicationSceneEntity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    NSString *_sceneIdentifier;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    _Bool _suspendedActivation;
    _Bool _shouldSendActivationResult;
}

@property (nonatomic, readonly) SBApplicationSceneEntity *applicationSceneEntity;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) _Bool shouldSendActivationResult;

- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;

@end
