/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKLocalPlayer.h>

@class NSString, UIViewController;

@protocol GKAuthenticateViewController;

@interface GKLocalPlayer (GKFaceTimeSupport)

@property (retain, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) UIViewController *activeViewController;
@property (retain, nonatomic) UIViewController<GKAuthenticateViewController> *signInViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)accountName;
+ (_Bool)hasAuthenticatedAccount;
+ (id)sharedLocalPlayerAuthenticator;
+ (id)authenticationPersonality;
+ (void)setAuthenticationPersonality:(id)arg1;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)isAuthenticating;
- (void)cancelAuthentication;
- (_Bool)alertUserInStoreDemoModeEnabled;
- (void)deletePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)deletePhoto;
- (void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)deleteMonogramsWithHandler:(CDUnknownBlockType)arg1;
- (id)deleteAvatarAlertControllerWithHandler:(CDUnknownBlockType)arg1;
- (void)showViewController:(id)arg1 usingPresentingViewController:(id)arg2 wrapInNavController:(_Bool)arg3;
- (void)removeActiveViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (_Bool)shouldShowOnBoardingUI;
- (_Bool)shouldShowPrivacyNotice;
- (_Bool)shouldShowPersonalization;
- (void)showOnboardingUIFromViewController:(id)arg1;
- (void)_showWelcomeBanner;
- (void)showAlertForTag:(unsigned long long)arg1;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)validateAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)startLegacyAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showLoginFailedAlert;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showCreateAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showSignInAccountRestrictedAlert;

@end
