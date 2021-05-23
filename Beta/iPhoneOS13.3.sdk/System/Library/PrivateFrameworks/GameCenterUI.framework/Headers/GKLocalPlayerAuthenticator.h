/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKDispatchGroup, GKLocalPlayer, NSDate, NSMutableArray, NSString, RemoteUIController, UINavigationController, UIViewController;

@interface GKLocalPlayerAuthenticator : NSObject

{
    NSString *_username;
    NSString *_password;
    GKLocalPlayer *_resultantLocalPlayer;
    GKLocalPlayer *_inputLocalPlayer;
    _Bool _authenticated;
    _Bool _authenticating;
    _Bool _forceAuthentication;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    NSString *_alertTitle;
    NSString *_alertMessage;
    _Bool _userShouldSkipCreateAppleID;
    UIViewController *_presentingViewController;
    RemoteUIController *_remoteU13Controller;
    UINavigationController *_u13NavigationController;
    NSMutableArray *_u13ObjectModels;
    GKDispatchGroup *_u13Group;
}

@property (retain, nonatomic) RemoteUIController *remoteU13Controller;
@property (retain, nonatomic) UINavigationController *u13NavigationController;
@property (retain, nonatomic) NSMutableArray *u13ObjectModels;
@property (retain, nonatomic) GKDispatchGroup *u13Group;
@property (nonatomic) _Bool userShouldSkipCreateAppleID;
@property _Bool forceAuthentication;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSString *alertTitle;
@property (retain) NSString *alertMessage;
@property (getter=isAuthenticated) _Bool authenticated;
@property (getter=isAuthenticating) _Bool authenticating;
@property (retain) NSDate *lastAuthDate;
@property (retain) NSString *lastAuthPlayerID;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)authenticatorForExistingPlayer:(id)arg1;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3;
+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_authenticateUsingAuthUI:(_Bool)arg1 authenticationResults:(id)arg2 usernameEditable:(_Bool)arg3 authUIDismissHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)handleAuthKitResultsForUnder13WithContinuationData:(id)arg1 altDSID:(id)arg2 password:(id)arg3;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(CDUnknownBlockType)arg1;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(_Bool)arg1 usernameEditable:(_Bool)arg2 dismissHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateFromExternalServiceWithAuthenticationResults:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateUsingAuthUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAuthenticateForGameCenter;
- (void)authenticateWithAuthKitResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticationDidComplete;

@end
