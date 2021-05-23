/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKAvatarContainerView, GKNicknameController, GKReachability, NSLayoutConstraint, NSMutableDictionary, NSString, OBBoldTrayButton, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UITextField, UIView, UIVisualEffectView;

@protocol GKOnboardingFlowDelegate;

@interface GKDefaultNicknameViewController : UIViewController

{
    id <GKOnboardingFlowDelegate> _delegate;
    UIView *_bubblePlaceholder;
    NSMutableDictionary *_analyticsPayload;
    GKAvatarContainerView *_editAvatarView;
    UIView *_avatarContainer;
    UIVisualEffectView *_visualEffectView;
    UIStackView *_contentStackView;
    UITextField *_nickname;
    UIStackView *_stackView;
    UIView *_buttonContainer;
    OBBoldTrayButton *_continueButton;
    UILabel *_message;
    UIButton *_cancelButton;
    UIView *_cancelContainer;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_mainTitle;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_contentCenterY;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_avatarContainerLandscapeHeight;
    GKReachability *_reachability;
    GKNicknameController *_nicknameController;
}

@property (retain, nonatomic) GKAvatarContainerView *editAvatarView;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UITextField *nickname;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (retain, nonatomic) UILabel *message;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *cancelContainer;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) NSLayoutConstraint *topMargin;
@property (retain, nonatomic) NSLayoutConstraint *contentCenterY;
@property (retain, nonatomic) NSLayoutConstraint *bottomMargin;
@property (retain, nonatomic) NSLayoutConstraint *avatarContainerLandscapeHeight;
@property (retain, nonatomic) GKReachability *reachability;
@property (nonatomic, readonly) _Bool isAvatarEditingSupported;
@property (retain, nonatomic) GKNicknameController *nicknameController;
@property (weak, nonatomic) id <GKOnboardingFlowDelegate> delegate;
@property (retain, nonatomic) UIView *bubblePlaceholder;
@property (retain, nonatomic) NSMutableDictionary *analyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)reachabilityDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2;
- (void)nicknameTextDidChangeWithMessage:(id)arg1;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (void)addEditAvatarContainerView;
- (void)enableOrDisableNicknameEditing;
- (void)fadeNonEssentialViews:(_Bool)arg1;
- (void)animateNicknameTextFieldIntoView:(id)arg1;
- (void)refreshAvatarImage;
- (void)presentAvatarPicker;
- (void)presentDeleteAvatarImageAlert;
- (void)avatarView:(id)arg1 didSelectImageWithEditingEnabled:(_Bool)arg2;
- (void)settingsPressed:(id)arg1;

@end
