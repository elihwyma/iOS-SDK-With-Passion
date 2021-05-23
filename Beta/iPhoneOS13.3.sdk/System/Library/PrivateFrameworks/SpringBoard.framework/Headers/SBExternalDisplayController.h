/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableArray, NSString, SBExternalDisplayPresenter, SBMainDisplaySceneManager, SBMainWorkspace;

@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayController : NSObject

{
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayIdentity *_identity;
    SBExternalDisplayPresenter *_presenter;
    FBSDisplayConfiguration *_currentConfiguration;
    _Bool _observingAppState;
    _Bool _hasConnectTransactionRun;
    _Bool _disconnected;
    _Bool _tornDown;
    NSMutableArray *_pendingWork;
}

@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isConnected;
- (void)updateWithConfiguration:(id)arg1;
- (id)slaveTransactionsForTransitionRequest:(id)arg1;
- (id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainDisplaySceneManager:(id)arg3 layoutPublisher:(id)arg4 displayConfiguration:(id)arg5;
- (void)_authenicationStateDidChange:(id)arg1;
- (void)_handleDisplayConnectIfPossible;
- (void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_createUpdateTransactionWithLabel:(id)arg1;
- (id)_expectedForegroundApp;
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;
- (void)_appProcessStateDidChange:(id)arg1;
- (_Bool)_shouldConnectDisplayNow:(id)arg1;
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;

@end
