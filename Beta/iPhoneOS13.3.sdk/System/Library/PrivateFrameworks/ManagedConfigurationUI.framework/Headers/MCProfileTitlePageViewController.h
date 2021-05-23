/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>

#import <ManagedConfigurationUI/Swift-Protocol.h>

@class MCActivityViewController, MCInstallProfileQuestionViewController, MCProfileTitlePageMetaDataSectionAnimationController, MCProfileTitlePageMetaDataSectionController, MCProfileTitlePageView, MCProfileTitlePageViewModel, NSString;

@interface MCProfileTitlePageViewController : MCSectionBasedTableViewController <Swift>

{
    _Bool _hasUpdatedBottomInset;
    MCProfileTitlePageViewModel *_viewModel;
    MCProfileTitlePageView *_profileTitlePageView;
    double _metaDataSectionHeight;
    MCProfileTitlePageMetaDataSectionController *_metaDataSectionController;
    MCProfileTitlePageMetaDataSectionAnimationController *_animationController;
    MCInstallProfileQuestionViewController *_questionsController;
    MCActivityViewController *_activityViewController;
    CDUnknownBlockType _passcodeCompletionHandler;
    CDUnknownBlockType _authenticationCompletionHandler;
    CDUnknownBlockType _authenticationPreparationHandler;
    CDUnknownBlockType _userInputCompletionHandler;
}

@property (retain, nonatomic) MCProfileTitlePageViewModel *viewModel;
@property (retain, nonatomic) MCProfileTitlePageView *profileTitlePageView;
@property (nonatomic) double metaDataSectionHeight;
@property (nonatomic) _Bool hasUpdatedBottomInset;
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionController *metaDataSectionController;
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionAnimationController *animationController;
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController;
@property (retain, nonatomic) MCActivityViewController *activityViewController;
@property (copy, nonatomic) CDUnknownBlockType passcodeCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType authenticationCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType authenticationPreparationHandler;
@property (copy, nonatomic) CDUnknownBlockType userInputCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)defaultView;
- (void)cancelButtonTapped:(id)arg1;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)infoButtonTapped:(id)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)signInViewController:(id)arg1 willAuthenticateWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)signInViewControllerDidCancelAuthentication:(id)arg1;
- (void)setCurrentQuestionsController:(id)arg1;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (_Bool)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)promptForPasscodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)installationFinishedSuccessfully:(_Bool)arg1 shouldDismiss:(_Bool)arg2 shouldRedirect:(_Bool)arg3 errorToDisplay:(id)arg4;
- (void)promptForUserInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAuthenticationViewControllerWithContext:(id)arg1 authenticationPreparationHandler:(CDUnknownBlockType)arg2 authenticationCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentSpinnerViewController;
- (void)informQuestionViewControllerOfPreflightResult:(id)arg1 profileConnection:(id)arg2;
- (id)initWithViewModel:(id)arg1;
- (id)_sectionControllersWithProfile:(id)arg1;
- (void)_updateMetaDataSectionHeight;
- (void)installButtonTapped:(id)arg1;
- (void)_updateBottomInsetToEnableCompleteScrollAnimation;
- (void)_resetNavigationBarStyleForViewController:(id)arg1;
- (void)viewControllerHasBeenDismissed;

@end
