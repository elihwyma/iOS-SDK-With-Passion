/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class AFUISceneConfiguration, BKSProcessAssertion, FBApplicationUpdateScenesTransaction, FBScene, NSString;

@protocol AFUISceneControllerDelegate;

@interface AFUISceneController : NSObject

{
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    _Bool _sceneForeground;
    unsigned long long _deactivationReason;
    id <AFUISceneControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <AFUISceneControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (id)_currentConfiguration;
- (void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deactivateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)updateSceneViewWithConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelSceneLoadingTimeOut;
- (void)_recordSceneCreateBegin;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1;
- (void)_recordSceneCreateEnd;
- (void)sceneLoadingTimeOutDidOccur;

@end
