/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKInlineSignInViewController, GKAccountRemoteUIController, GKBubbleFlowContainerView, GKDispatchGroup, GKGame, GKLabel, GKSignInInputView, NSMutableArray, NSString, OBPrivacyLinkController, RemoteUIController, UIActivityIndicatorView, UINavigationController, UIScrollView, UIViewController;

@interface GKSignInViewController : GKViewController <Swift>

{
    _Bool _disablesSignIn;
    _Bool _loadingRemoteUI;
    _Bool _constraintsCreated;
    _Bool _userShouldSkipCreateAppleID;
    NSString *_appleID;
    CDUnknownBlockType _completionHandler;
    UIViewController *_remoteUIPresentingViewController;
    UIActivityIndicatorView *_progressIndicator;
    GKLabel *_signInLabel;
    GKLabel *_loginPromptLabel;
    GKSignInInputView *_signInInputView;
    OBPrivacyLinkController *_privacyLinkController;
    GKBubbleFlowContainerView *_bubbleContainerView;
    AKInlineSignInViewController *_inlineSignInViewController;
    AKAppleIDAuthenticationInAppContext *_authContext;
    double _fullWidthContentWidthConstraintConstant;
    double _horizontalPaddingConstraintConstant;
    double _labelWidthConstraintConstant;
    NSMutableArray *_fullWidthViewConstraints;
    RemoteUIController *_remoteU13Controller;
    UINavigationController *_u13NavigationController;
    NSMutableArray *_u13ObjectModels;
    GKDispatchGroup *_u13Group;
    UIScrollView *_scrollView;
    GKGame *_game;
    GKAccountRemoteUIController *_accountController;
    struct UIEdgeInsets _currentContentInsets;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollIndicatorInsetsBeforeKeyboard;
}

@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator;
@property (retain, nonatomic) GKLabel *signInLabel;
@property (retain, nonatomic) GKLabel *loginPromptLabel;
@property (retain, nonatomic) GKSignInInputView *signInInputView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic) _Bool constraintsCreated;
@property (nonatomic) struct UIEdgeInsets currentContentInsets;
@property (nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard;
@property (nonatomic) struct UIEdgeInsets scrollIndicatorInsetsBeforeKeyboard;
@property (retain, nonatomic) GKBubbleFlowContainerView *bubbleContainerView;
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *authContext;
@property (nonatomic) double fullWidthContentWidthConstraintConstant;
@property (nonatomic) double horizontalPaddingConstraintConstant;
@property (nonatomic) double labelWidthConstraintConstant;
@property (retain, nonatomic) NSMutableArray *fullWidthViewConstraints;
@property (retain, nonatomic) RemoteUIController *remoteU13Controller;
@property (retain, nonatomic) UINavigationController *u13NavigationController;
@property (retain, nonatomic) NSMutableArray *u13ObjectModels;
@property (retain, nonatomic) GKDispatchGroup *u13Group;
@property (nonatomic) _Bool userShouldSkipCreateAppleID;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKAccountRemoteUIController *accountController;
@property (retain, nonatomic) UIViewController *remoteUIPresentingViewController;
@property (nonatomic, getter=isLoadingRemoteUI) _Bool loadingRemoteUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool disablesSignIn;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)createConstraints;
- (void)keyboardWillHide:(id)arg1;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)createAppleID;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)createSubviews;
- (void)showViewController:(id)arg1;
- (id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
- (double)bubbleFlowAnimateOutDuration;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowSubviewFadeOutDuration;
- (double)bubbleFlowSubviewFadeOutDelay;
- (void)viewWillAppearAnimated:(_Bool)arg1 bubbleFlow:(_Bool)arg2;
- (id)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (void)_systemContentSizeSettingDidChange:(id)arg1;
- (void)startLoadingIndicator;
- (void)stopLoadingIndicator;
- (void)showLoginFailedAlert;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)addCancelButtonToNavigationItem:(id)arg1;
- (void)cancelSignIn;
- (void)setupAuthKitInlineViewController;
- (id)barBackgroundImage;
- (void)iForgotTapped;
- (void)authenticateRequestCompletedWithErrorResponse:(id)arg1 error:(id)arg2;
- (void)addGDPRPrivacyLink;
- (void)updateConstraintConstantsForTraitCollection:(id)arg1;
- (void)_updateBubbleRectsForOrientation:(long long)arg1;
- (void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2;
- (_Bool)handleUnderlyingAuthenticationError:(id)arg1 accountName:(id)arg2;
- (void)showConnectionFailedAlert;
- (void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showAuthKitAlertFromGreenBuddyWithAuthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountRemoteUIController:(id)arg1 finishedWithError:(id)arg2;
- (void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4;
- (void)presentAccountRemoteUIControllerAnimated:(_Bool)arg1;
- (void)showAccountDisabledAlert;
- (void)showPasswordAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showPasswordResetAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)signIn;
- (void)createNewAccount;
- (void)presentError:(id)arg1 forAccountRemoteUIController:(id)arg2;
- (void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showForgotPasswordAlert;

@end
