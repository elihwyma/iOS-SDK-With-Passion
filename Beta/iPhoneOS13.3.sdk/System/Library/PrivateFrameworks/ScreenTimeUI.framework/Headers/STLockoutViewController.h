/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class NSObject, NSString, SBSLockScreenService, STHourglassView, STLockoutPolicyController, UIAlertController, UIButton, UILabel, UIResponder, UIVisualEffectView;

@protocol OS_dispatch_group, STLockoutViewControllerDelegate;

@interface STLockoutViewController : UIViewController

{
    long long _style;
    unsigned long long _state;
    unsigned long long _stateBeforePending;
    unsigned long long _reuseIdentifier;
    SBSLockScreenService *_sbsLockScreenService;
    CDUnknownBlockType _restrictionsPINControllerCompletion;
    UIAlertController *_presentedAlertController;
    _Bool _isHourglassStateInitialized;
    _Bool _isApprovedAnimationWithApprovalPending;
    NSObject<OS_dispatch_group> *_initialAnimationGroup;
    NSObject<OS_dispatch_group> *_approvalAnimationGroup;
    NSObject<OS_dispatch_group> *_dismissingAnimationGroup;
    _Bool _okButtonAlwaysHidden;
    _Bool _mainButtonAlwaysHidden;
    _Bool _forSnapshot;
    _Bool _didFinishDismissing;
    UIResponder *_customNextResponder;
    STLockoutPolicyController *_policyController;
    NSString *_applicationName;
    STHourglassView *_hourglassView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_mainButton;
    UIButton *_okButton;
    long long _okButtonAction;
    id <STLockoutViewControllerDelegate> _viewControllerDelegate;
}

@property (retain, nonatomic) UIVisualEffectView *view;
@property (nonatomic, readonly) UIVisualEffectView *viewIfLoaded;
@property (weak, nonatomic) UIResponder *customNextResponder;
@property (retain, nonatomic) STLockoutPolicyController *policyController;
@property (readonly) NSString *applicationName;
@property (weak) STHourglassView *hourglassView;
@property (weak) UILabel *titleLabel;
@property (weak) UILabel *messageLabel;
@property (weak) UIButton *mainButton;
@property (weak) UIButton *okButton;
@property (nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool didFinishDismissing;
@property long long okButtonAction;
@property (weak, nonatomic) id <STLockoutViewControllerDelegate> viewControllerDelegate;
@property (nonatomic) _Bool okButtonAlwaysHidden;
@property (nonatomic) _Bool mainButtonAlwaysHidden;
@property (weak, nonatomic) UIResponder *nextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)lockoutViewControllerWithConversationContext:(id)arg1 bundleIdentifier:(id)arg2 contactStore:(id)arg3 applicationName:(id)arg4;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1;
+ (id)lockoutViewControllerWithWebsiteURL:(id)arg1;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3;
+ (id)_bundleIdentifierForWebsiteURL:(id)arg1;
+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (id)messageForApplicationName:(id)arg1 style:(long long)arg2;
+ (id)_applicationNameForWebsiteURL:(id)arg1;
+ (id)_messageForCategoryIdentifier:(id)arg1;
+ (id)messageForWebsiteURL:(id)arg1;
+ (id)messageForBundleIdentifier:(id)arg1 style:(long long)arg2;
+ (id)lockoutViewControllerWithCategoryIdentifier:(id)arg1;

- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)stateDidChange:(unsigned long long)arg1;
- (void)_setupCommon;
- (void)_hideBackdrop;
- (void)_hideHourglass;
- (void)_hideTextAndButtons;
- (void)_restoreBackdrop;
- (void)_restoreHourglass;
- (void)_restoreTextAndButtons;
- (void)_showInitialAnimationIfNeeded;
- (void)setDidFinishDismissing:(_Bool)arg1;
- (void)_showApprovalAnimationIfNeeded;
- (void)_presentAlertController:(id)arg1;
- (_Bool)_actionUnlockedAskOrApproveActionSheet;
- (void)_unlockWithSuccessMainCompletion:(CDUnknownBlockType)arg1;
- (void)_actionEnterScreenTimePasscodeActionSheet:(id)arg1;
- (_Bool)_actionUnlockedEnterScreenTimePasscodeActionSheet;
- (_Bool)_authenticatedApproveActionSheet;
- (void)_showRestrictionsPINControllerWithMainCompletion:(CDUnknownBlockType)arg1;
- (void)_undoApprovalAnimationIfNeeded;
- (void)_updateOKButtonVisibility;
- (void)_updateMainButtonVisibility;
- (void)_actionAskOrApproveActionSheet:(id)arg1;
- (void)_actionIgnoreLimitActionSheet:(id)arg1;
- (void)_actionAddContact:(id)arg1;
- (void)_changeMessageToInitial;
- (void)_changeMainButtonToIgnoreLimit;
- (void)_changeMainButtonToAskForMore;
- (void)_changeMainButtonToEnterScreenTimePasscode;
- (void)_changeStateToDismissing;
- (void)_changeMainButtonToAddContact;
- (void)_showDismissingAnimationIfNeeded;
- (_Bool)_actionDismiss;
- (_Bool)_isShowingInitialAnimation;
- (void)_doInitialAnimationExitingGroup:(id)arg1;
- (void)_fadeInHourglass;
- (void)_doInitialAnimationOfHourglassExitingGroup:(id)arg1;
- (void)_fadeInBackdropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fadeInTextAndButtons;
- (void)_fadeOutTextAndButtons;
- (void)_fadeOutHourglass;
- (void)_fadeOutBackdropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setTextAndButtonsAlpha:(double)arg1;
- (void)_changeStateToApproved;
- (void)_changeStateToWarn;
- (void)_changeStateToAsk;
- (void)_changeStateToPending;
- (void)_changeStateToDisapproved;
- (void)_changeStateToContactBlocked;
- (void)_startListeningForRestrictionsPINEntryNotification;
- (void)_handleRestrictionsPINNotification:(id)arg1;
- (void)_stopListeningForRestrictionsPINEntryNotification;
- (id)initWithWebsiteURL:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3;
- (void)_actionOK:(id)arg1;
- (void)_authenticatedApproveForAdditionalTime:(double)arg1;

@end
